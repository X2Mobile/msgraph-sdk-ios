// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.



#import "MSGraphConversationCollection.h"
#import "MSGraphConversation.h"

@implementation MSGraphConversationCollection

+ (MSGraphConversationCollection *) fromMSCollection:(MSCollection *)collection {
    MSGraphConversationCollection *col = [[MSGraphConversationCollection alloc] init];
    col.value = collection.value;
    col.nextLink = collection.nextLink;
    col.additionalData = collection.additionalData;
    return col;
}

- (MSGraphConversation*) objectAtIndex:(NSUInteger)index {
    return [[MSGraphConversation alloc] initWithDictionary: [super.value objectAtIndex:index] ];
    
}

- (NSUInteger) count {
    return [super.value count];
}

@end
