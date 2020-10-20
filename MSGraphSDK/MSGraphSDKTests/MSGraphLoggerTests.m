//
//  MSGraphLoggerTests.m
//  MSGraphSDK
//
//  Created by canviz on 6/15/16.
//  Copyright © 2016 Microsoft. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "MSGraphLogger.h"
#import "OCMock.h"

@interface MSGraphLoggerTests : XCTestCase
@property(nonatomic, retain) MSGraphLogger * mockLogger;
@end

@implementation MSGraphLoggerTests

- (void)setUp {
    [super setUp];
    self.mockLogger = OCMPartialMock([[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogError]);
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testInitWithLogLevelWithNoLevel {
    MSGraphLogger *MSGraphLogger = [[MSGraphLogger alloc] init];
    XCTAssertEqual(MSGraphLogger.logLevel, 0);
}
- (void)testInitWithLogLevelWithLevel {
    MSGraphLogger *MSGraphLogger = [[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogError];
    XCTAssertEqual(MSGraphLogger.logLevel, MSLogLevelLogError);
    
    MSGraphLogger = [[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogWarn];
    XCTAssertEqual(MSGraphLogger.logLevel, MSLogLevelLogWarn);
    
    MSGraphLogger = [[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogInfo];
    XCTAssertEqual(MSGraphLogger.logLevel, MSLogLevelLogInfo);
    
    MSGraphLogger = [[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogDebug];
    XCTAssertEqual(MSGraphLogger.logLevel, MSLogLevelLogDebug);
    
    //unkown level
    MSGraphLogger = [[MSGraphLogger alloc] initWithLogLevel:5];
    XCTAssertEqual(MSGraphLogger.logLevel, 5);
}
-(void)testMSGraphLoggerDelegateWithLogError{
    [self assertWriteMessage:@"Graph SDK ERROR : test logger" LogLevel:MSLogLevelLogError formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithLogWarn{
    [self assertWriteMessage:@"Graph SDK WARNING : test logger" LogLevel:MSLogLevelLogWarn formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithLogInfo{
    [self assertWriteMessage:@"Graph SDK INFO : test logger" LogLevel:MSLogLevelLogInfo formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithLogDebug{
    [self assertWriteMessage:@"Graph SDK DEBUG : test logger" LogLevel:MSLogLevelLogDebug formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithLogVerbose{
    [self assertWriteMessage:@"Graph SDK VERBOSE : test logger" LogLevel:MSLogLevelLogVerbose formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithLogUnknown{
    [self assertWriteMessage:@"Graph SDK 100 : test logger" LogLevel:100 formatter:@"test logger"];
}
-(void)testMSGraphLoggerDelegateWithNilFormatter{
    id<MSLogger> MSGraphLoggerDelegate = [[MSGraphLogger alloc] initWithLogLevel:MSLogLevelLogError];
    [MSGraphLoggerDelegate setLogLevel:MSLogLevelLogInfo];
    NSString *message = nil;
    [self getWriteMessage:&message];
    [MSGraphLoggerDelegate logWithLevel:MSLogLevelLogError message:nil];
    XCTAssertNil(message);
}
-(void)assertWriteMessage:(NSString *)expectedMessage LogLevel:(MSLogLevel)level formatter:(NSString *)formatter{
    
    NSString *logLevel = nil;
    switch (level) {
        case MSLogLevelLogError:
            logLevel = @"ERROR :";
            break;
        case MSLogLevelLogWarn:
            logLevel = @"WARNING :";
            break;
        case MSLogLevelLogInfo:
            logLevel = @"INFO :";
            break;
        case MSLogLevelLogDebug:
            logLevel = @"DEBUG : ";
            break;
        case MSLogLevelLogVerbose:
            logLevel = @"VERBOSE :";
            break;
        default:
            break;
    }
    NSString *message = nil;
    [self getWriteMessage:&message];
    [self.mockLogger setLogLevel:level];
    [self.mockLogger logWithLevel:level message:formatter];
    NSString *expectedstring =[NSString stringWithFormat:@"Graph SDK %@ %@",logLevel, formatter];
    XCTAssertEqualObjects(message, expectedstring);
}
-(void)getWriteMessage:(NSString * __strong *)message{
    OCMStub([self.mockLogger writeMessage:[OCMArg any]]).andDo(^(NSInvocation *invocation){
        NSString *receivedMessage = nil;
        [invocation getArgument:&receivedMessage atIndex:2];
        *message = receivedMessage;
    });
}
@end
