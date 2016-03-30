// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.


@class MSGraphEmailAddress; 


#import "MSObject.h"
#import "MSCollection.h"

@interface MSGraphRecipient : MSObject

	@property (nonatomic, setter=setEmailAddress:, getter=emailAddress) MSGraphEmailAddress* emailAddress;
	
@end
