// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.



#import "MSGraphCalendarCollection.h"

@class MSGraphCalendarRequest, MSURLSessionDataTask;

#import "MSGraphModels.h"
#import "MSCollectionRequest.h"

typedef void (^MSGraphCalendarCompletionHandler)(MSGraphCalendar *response, NSError *error);

typedef void (^MSGraphUserCalendarsCollectionCompletionHandler)(MSGraphCalendarCollection* response, MSGraphUserCalendarsCollectionRequest *nextRequest, NSError *error);

@interface MSGraphUserCalendarsCollectionRequest : MSCollectionRequest

- (MSURLSessionDataTask *)getWithCompletion:(MSGraphUserCalendarsCollectionCompletionHandler)completionHandler;

- (MSURLSessionDataTask *)addCalendar:(MSGraphCalendar*)calendar withCompletion:(MSGraphCalendarCompletionHandler)completionHandler;

@end
