// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.



#import "MSCollection.h"

#import "MSGraphProfilePhotoStreamRequest.h"
#import "MSGraphGraphServiceDirectoryObjectsCollectionRequestBuilder.h"
#import "MSGraphGraphServiceDirectoryObjectsCollectionRequest.h"
#import "MSGraphGraphServiceDevicesCollectionRequestBuilder.h"
#import "MSGraphGraphServiceDevicesCollectionRequest.h"
#import "MSGraphGraphServiceGroupsCollectionRequestBuilder.h"
#import "MSGraphGraphServiceGroupsCollectionRequest.h"
#import "MSGraphGraphServiceDirectoryRolesCollectionRequestBuilder.h"
#import "MSGraphGraphServiceDirectoryRolesCollectionRequest.h"
#import "MSGraphGraphServiceDirectoryRoleTemplatesCollectionRequestBuilder.h"
#import "MSGraphGraphServiceDirectoryRoleTemplatesCollectionRequest.h"
#import "MSGraphGraphServiceOrganizationCollectionRequestBuilder.h"
#import "MSGraphGraphServiceOrganizationCollectionRequest.h"
#import "MSGraphGraphServiceSubscribedSkusCollectionRequestBuilder.h"
#import "MSGraphGraphServiceSubscribedSkusCollectionRequest.h"
#import "MSGraphGraphServiceUsersCollectionRequestBuilder.h"
#import "MSGraphGraphServiceUsersCollectionRequest.h"
#import "MSGraphGraphServiceDrivesCollectionRequestBuilder.h"
#import "MSGraphGraphServiceDrivesCollectionRequest.h"
#import "MSGraphEntityRequestBuilder.h"
#import "MSGraphEntityRequest.h"
#import "MSGraphDirectoryObjectRequestBuilder.h"
#import "MSGraphDirectoryObjectRequest.h"
#import "MSGraphDirectoryObjectCheckMemberGroupsRequestBuilder.h"
#import "MSGraphDirectoryObjectCheckMemberGroupsRequest.h"
#import "MSGraphDirectoryObjectGetMemberGroupsRequestBuilder.h"
#import "MSGraphDirectoryObjectGetMemberGroupsRequest.h"
#import "MSGraphDirectoryObjectGetMemberObjectsRequestBuilder.h"
#import "MSGraphDirectoryObjectGetMemberObjectsRequest.h"
#import "MSGraphDeviceRequestBuilder.h"
#import "MSGraphDeviceRequest.h"
#import "MSGraphDeviceRegisteredOwnersCollectionWithReferencesRequestBuilder.h"
#import "MSGraphDeviceRegisteredOwnersCollectionWithReferencesRequest.h"
#import "MSGraphDeviceRegisteredOwnersCollectionReferencesRequestBuilder.h"
#import "MSGraphDeviceRegisteredOwnersCollectionReferencesRequest.h"
#import "MSGraphDeviceRegisteredUsersCollectionWithReferencesRequestBuilder.h"
#import "MSGraphDeviceRegisteredUsersCollectionWithReferencesRequest.h"
#import "MSGraphDeviceRegisteredUsersCollectionReferencesRequestBuilder.h"
#import "MSGraphDeviceRegisteredUsersCollectionReferencesRequest.h"
#import "MSGraphDirectoryRoleRequestBuilder.h"
#import "MSGraphDirectoryRoleRequest.h"
#import "MSGraphDirectoryRoleMembersCollectionWithReferencesRequestBuilder.h"
#import "MSGraphDirectoryRoleMembersCollectionWithReferencesRequest.h"
#import "MSGraphDirectoryRoleMembersCollectionReferencesRequestBuilder.h"
#import "MSGraphDirectoryRoleMembersCollectionReferencesRequest.h"
#import "MSGraphDirectoryRoleTemplateRequestBuilder.h"
#import "MSGraphDirectoryRoleTemplateRequest.h"
#import "MSGraphGroupRequestBuilder.h"
#import "MSGraphGroupRequest.h"
#import "MSGraphGroupMembersCollectionWithReferencesRequestBuilder.h"
#import "MSGraphGroupMembersCollectionWithReferencesRequest.h"
#import "MSGraphGroupMembersCollectionReferencesRequestBuilder.h"
#import "MSGraphGroupMembersCollectionReferencesRequest.h"
#import "MSGraphGroupMemberOfCollectionWithReferencesRequestBuilder.h"
#import "MSGraphGroupMemberOfCollectionWithReferencesRequest.h"
#import "MSGraphGroupMemberOfCollectionReferencesRequestBuilder.h"
#import "MSGraphGroupMemberOfCollectionReferencesRequest.h"
#import "MSGraphDirectoryObjectWithReferenceRequestBuilder.h"
#import "MSGraphDirectoryObjectWithReferenceRequest.h"
#import "MSGraphDirectoryObjectReferenceRequestBuilder.h"
#import "MSGraphDirectoryObjectReferenceRequest.h"
#import "MSGraphGroupOwnersCollectionWithReferencesRequestBuilder.h"
#import "MSGraphGroupOwnersCollectionWithReferencesRequest.h"
#import "MSGraphGroupOwnersCollectionReferencesRequestBuilder.h"
#import "MSGraphGroupOwnersCollectionReferencesRequest.h"
#import "MSGraphGroupThreadsCollectionRequestBuilder.h"
#import "MSGraphGroupThreadsCollectionRequest.h"
#import "MSGraphCalendarRequestBuilder.h"
#import "MSGraphCalendarRequest.h"
#import "MSGraphGroupCalendarViewCollectionRequestBuilder.h"
#import "MSGraphGroupCalendarViewCollectionRequest.h"
#import "MSGraphGroupEventsCollectionRequestBuilder.h"
#import "MSGraphGroupEventsCollectionRequest.h"
#import "MSGraphGroupConversationsCollectionRequestBuilder.h"
#import "MSGraphGroupConversationsCollectionRequest.h"
#import "MSGraphProfilePhotoRequestBuilder.h"
#import "MSGraphProfilePhotoRequest.h"
#import "MSGraphGroupAcceptedSendersCollectionRequestBuilder.h"
#import "MSGraphGroupAcceptedSendersCollectionRequest.h"
#import "MSGraphGroupRejectedSendersCollectionRequestBuilder.h"
#import "MSGraphGroupRejectedSendersCollectionRequest.h"
#import "MSGraphDriveRequestBuilder.h"
#import "MSGraphDriveRequest.h"
#import "MSGraphGroupSubscribeByMailRequestBuilder.h"
#import "MSGraphGroupSubscribeByMailRequest.h"
#import "MSGraphGroupUnsubscribeByMailRequestBuilder.h"
#import "MSGraphGroupUnsubscribeByMailRequest.h"
#import "MSGraphGroupAddFavoriteRequestBuilder.h"
#import "MSGraphGroupAddFavoriteRequest.h"
#import "MSGraphGroupRemoveFavoriteRequestBuilder.h"
#import "MSGraphGroupRemoveFavoriteRequest.h"
#import "MSGraphGroupResetUnseenCountRequestBuilder.h"
#import "MSGraphGroupResetUnseenCountRequest.h"
#import "MSGraphConversationThreadRequestBuilder.h"
#import "MSGraphConversationThreadRequest.h"
#import "MSGraphConversationThreadPostsCollectionRequestBuilder.h"
#import "MSGraphConversationThreadPostsCollectionRequest.h"
#import "MSGraphConversationThreadReplyRequestBuilder.h"
#import "MSGraphConversationThreadReplyRequest.h"
#import "MSGraphCalendarEventsCollectionRequestBuilder.h"
#import "MSGraphCalendarEventsCollectionRequest.h"
#import "MSGraphCalendarCalendarViewCollectionRequestBuilder.h"
#import "MSGraphCalendarCalendarViewCollectionRequest.h"
#import "MSGraphOutlookItemRequestBuilder.h"
#import "MSGraphOutlookItemRequest.h"
#import "MSGraphEventRequestBuilder.h"
#import "MSGraphEventRequest.h"
#import "MSGraphEventInstancesCollectionRequestBuilder.h"
#import "MSGraphEventInstancesCollectionRequest.h"
#import "MSGraphEventAttachmentsCollectionRequestBuilder.h"
#import "MSGraphEventAttachmentsCollectionRequest.h"
#import "MSGraphEventAcceptRequestBuilder.h"
#import "MSGraphEventAcceptRequest.h"
#import "MSGraphEventDeclineRequestBuilder.h"
#import "MSGraphEventDeclineRequest.h"
#import "MSGraphEventTentativelyAcceptRequestBuilder.h"
#import "MSGraphEventTentativelyAcceptRequest.h"
#import "MSGraphEventSnoozeReminderRequestBuilder.h"
#import "MSGraphEventSnoozeReminderRequest.h"
#import "MSGraphEventDismissReminderRequestBuilder.h"
#import "MSGraphEventDismissReminderRequest.h"
#import "MSGraphConversationRequestBuilder.h"
#import "MSGraphConversationRequest.h"
#import "MSGraphConversationThreadsCollectionRequestBuilder.h"
#import "MSGraphConversationThreadsCollectionRequest.h"
#import "MSGraphDriveItemsCollectionRequestBuilder.h"
#import "MSGraphDriveItemsCollectionRequest.h"
#import "MSGraphDriveSpecialCollectionRequestBuilder.h"
#import "MSGraphDriveSpecialCollectionRequest.h"
#import "MSGraphDriveItemRequestBuilder.h"
#import "MSGraphDriveItemRequest.h"
#import "MSGraphDriveRecentRequestBuilder.h"
#import "MSGraphDriveRecentRequest.h"
#import "MSGraphDriveSharedWithMeRequestBuilder.h"
#import "MSGraphDriveSharedWithMeRequest.h"
#import "MSGraphSubscribedSkuRequestBuilder.h"
#import "MSGraphSubscribedSkuRequest.h"
#import "MSGraphOrganizationRequestBuilder.h"
#import "MSGraphOrganizationRequest.h"
#import "MSGraphUserRequestBuilder.h"
#import "MSGraphUserRequest.h"
#import "MSGraphUserOwnedDevicesCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserOwnedDevicesCollectionWithReferencesRequest.h"
#import "MSGraphUserOwnedDevicesCollectionReferencesRequestBuilder.h"
#import "MSGraphUserOwnedDevicesCollectionReferencesRequest.h"
#import "MSGraphUserRegisteredDevicesCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserRegisteredDevicesCollectionWithReferencesRequest.h"
#import "MSGraphUserRegisteredDevicesCollectionReferencesRequestBuilder.h"
#import "MSGraphUserRegisteredDevicesCollectionReferencesRequest.h"
#import "MSGraphUserDirectReportsCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserDirectReportsCollectionWithReferencesRequest.h"
#import "MSGraphUserDirectReportsCollectionReferencesRequestBuilder.h"
#import "MSGraphUserDirectReportsCollectionReferencesRequest.h"
#import "MSGraphUserMemberOfCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserMemberOfCollectionWithReferencesRequest.h"
#import "MSGraphUserMemberOfCollectionReferencesRequestBuilder.h"
#import "MSGraphUserMemberOfCollectionReferencesRequest.h"
#import "MSGraphUserCreatedObjectsCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserCreatedObjectsCollectionWithReferencesRequest.h"
#import "MSGraphUserCreatedObjectsCollectionReferencesRequestBuilder.h"
#import "MSGraphUserCreatedObjectsCollectionReferencesRequest.h"
#import "MSGraphUserOwnedObjectsCollectionWithReferencesRequestBuilder.h"
#import "MSGraphUserOwnedObjectsCollectionWithReferencesRequest.h"
#import "MSGraphUserOwnedObjectsCollectionReferencesRequestBuilder.h"
#import "MSGraphUserOwnedObjectsCollectionReferencesRequest.h"
#import "MSGraphUserMessagesCollectionRequestBuilder.h"
#import "MSGraphUserMessagesCollectionRequest.h"
#import "MSGraphUserMailFoldersCollectionRequestBuilder.h"
#import "MSGraphUserMailFoldersCollectionRequest.h"
#import "MSGraphUserCalendarsCollectionRequestBuilder.h"
#import "MSGraphUserCalendarsCollectionRequest.h"
#import "MSGraphUserCalendarGroupsCollectionRequestBuilder.h"
#import "MSGraphUserCalendarGroupsCollectionRequest.h"
#import "MSGraphUserCalendarViewCollectionRequestBuilder.h"
#import "MSGraphUserCalendarViewCollectionRequest.h"
#import "MSGraphUserEventsCollectionRequestBuilder.h"
#import "MSGraphUserEventsCollectionRequest.h"
#import "MSGraphUserContactsCollectionRequestBuilder.h"
#import "MSGraphUserContactsCollectionRequest.h"
#import "MSGraphUserContactFoldersCollectionRequestBuilder.h"
#import "MSGraphUserContactFoldersCollectionRequest.h"
#import "MSGraphUserAssignLicenseRequestBuilder.h"
#import "MSGraphUserAssignLicenseRequest.h"
#import "MSGraphUserChangePasswordRequestBuilder.h"
#import "MSGraphUserChangePasswordRequest.h"
#import "MSGraphUserSendMailRequestBuilder.h"
#import "MSGraphUserSendMailRequest.h"
#import "MSGraphUserReminderViewRequestBuilder.h"
#import "MSGraphUserReminderViewRequest.h"
#import "MSGraphMessageRequestBuilder.h"
#import "MSGraphMessageRequest.h"
#import "MSGraphMessageAttachmentsCollectionRequestBuilder.h"
#import "MSGraphMessageAttachmentsCollectionRequest.h"
#import "MSGraphMessageCopyRequestBuilder.h"
#import "MSGraphMessageCopyRequest.h"
#import "MSGraphMessageMoveRequestBuilder.h"
#import "MSGraphMessageMoveRequest.h"
#import "MSGraphMessageCreateReplyRequestBuilder.h"
#import "MSGraphMessageCreateReplyRequest.h"
#import "MSGraphMessageCreateReplyAllRequestBuilder.h"
#import "MSGraphMessageCreateReplyAllRequest.h"
#import "MSGraphMessageCreateForwardRequestBuilder.h"
#import "MSGraphMessageCreateForwardRequest.h"
#import "MSGraphMessageReplyRequestBuilder.h"
#import "MSGraphMessageReplyRequest.h"
#import "MSGraphMessageReplyAllRequestBuilder.h"
#import "MSGraphMessageReplyAllRequest.h"
#import "MSGraphMessageForwardRequestBuilder.h"
#import "MSGraphMessageForwardRequest.h"
#import "MSGraphMessageSendRequestBuilder.h"
#import "MSGraphMessageSendRequest.h"
#import "MSGraphMailFolderRequestBuilder.h"
#import "MSGraphMailFolderRequest.h"
#import "MSGraphMailFolderMessagesCollectionRequestBuilder.h"
#import "MSGraphMailFolderMessagesCollectionRequest.h"
#import "MSGraphMailFolderChildFoldersCollectionRequestBuilder.h"
#import "MSGraphMailFolderChildFoldersCollectionRequest.h"
#import "MSGraphMailFolderCopyRequestBuilder.h"
#import "MSGraphMailFolderCopyRequest.h"
#import "MSGraphMailFolderMoveRequestBuilder.h"
#import "MSGraphMailFolderMoveRequest.h"
#import "MSGraphCalendarGroupRequestBuilder.h"
#import "MSGraphCalendarGroupRequest.h"
#import "MSGraphCalendarGroupCalendarsCollectionRequestBuilder.h"
#import "MSGraphCalendarGroupCalendarsCollectionRequest.h"
#import "MSGraphContactRequestBuilder.h"
#import "MSGraphContactRequest.h"
#import "MSGraphContactFolderRequestBuilder.h"
#import "MSGraphContactFolderRequest.h"
#import "MSGraphContactFolderContactsCollectionRequestBuilder.h"
#import "MSGraphContactFolderContactsCollectionRequest.h"
#import "MSGraphContactFolderChildFoldersCollectionRequestBuilder.h"
#import "MSGraphContactFolderChildFoldersCollectionRequest.h"
#import "MSGraphAttachmentRequestBuilder.h"
#import "MSGraphAttachmentRequest.h"
#import "MSGraphFileAttachmentRequestBuilder.h"
#import "MSGraphFileAttachmentRequest.h"
#import "MSGraphItemAttachmentRequestBuilder.h"
#import "MSGraphItemAttachmentRequest.h"
#import "MSGraphEventMessageRequestBuilder.h"
#import "MSGraphEventMessageRequest.h"
#import "MSGraphReferenceAttachmentRequestBuilder.h"
#import "MSGraphReferenceAttachmentRequest.h"
#import "MSGraphPostRequestBuilder.h"
#import "MSGraphPostRequest.h"
#import "MSGraphPostAttachmentsCollectionRequestBuilder.h"
#import "MSGraphPostAttachmentsCollectionRequest.h"
#import "MSGraphPostForwardRequestBuilder.h"
#import "MSGraphPostForwardRequest.h"
#import "MSGraphPostReplyRequestBuilder.h"
#import "MSGraphPostReplyRequest.h"
#import "MSGraphUserWithReferenceRequestBuilder.h"
#import "MSGraphUserWithReferenceRequest.h"
#import "MSGraphUserReferenceRequestBuilder.h"
#import "MSGraphUserReferenceRequest.h"
#import "MSGraphDriveItemPermissionsCollectionRequestBuilder.h"
#import "MSGraphDriveItemPermissionsCollectionRequest.h"
#import "MSGraphDriveItemChildrenCollectionRequestBuilder.h"
#import "MSGraphDriveItemChildrenCollectionRequest.h"
#import "MSGraphDriveItemThumbnailsCollectionRequestBuilder.h"
#import "MSGraphDriveItemThumbnailsCollectionRequest.h"
#import "MSGraphDriveItemContentRequest.h"
#import "MSGraphDriveItemCreateLinkRequestBuilder.h"
#import "MSGraphDriveItemCreateLinkRequest.h"
#import "MSGraphDriveItemCopyRequestBuilder.h"
#import "MSGraphDriveItemCopyRequest.h"
#import "MSGraphDriveItemSearchRequestBuilder.h"
#import "MSGraphDriveItemSearchRequest.h"
#import "MSGraphDriveItemDeltaRequestBuilder.h"
#import "MSGraphDriveItemDeltaRequest.h"
#import "MSGraphPermissionRequestBuilder.h"
#import "MSGraphPermissionRequest.h"
#import "MSGraphThumbnailSetRequestBuilder.h"
#import "MSGraphThumbnailSetRequest.h"
#import "MSGraphThumbnailRequestBuilder.h"
#import "MSGraphThumbnailRequest.h"
#import "MSGraphThumbnailContentRequest.h"
#import "MSGraphClient.h"
