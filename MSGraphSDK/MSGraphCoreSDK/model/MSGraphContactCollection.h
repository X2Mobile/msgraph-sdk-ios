// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.



#import "MSCollection.h"
@class MSGraphContact;

@interface MSGraphContactCollection : MSCollection

+ (MSGraphContactCollection *) fromMSCollection:(MSCollection *)collection;
- (MSGraphContact*) objectAtIndex:(NSUInteger)index;
@property(readonly) NSUInteger count;

@end
