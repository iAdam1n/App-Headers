/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFacecastScheduledHelpers : NSObject
+(BOOL)isScheduledLiveAttachment:(id)arg1 ;
+(BOOL)isScheduledStateWithBroadcastStatus:(id)arg1 ;
+(id)videoFromStory:(id)arg1 ;
+(BOOL)isFeatureEnabledInSession:(id)arg1 ;
+(BOOL)isScheduledStyleWithBroadcastStatus:(id)arg1 ;
+(id)scheduleFromAttachment:(id)arg1 ;
+(id)customPictureURLFromStory:(id)arg1 ;
+(id)profilePictureURLFromStory:(id)arg1 ;
+(BOOL)isLobbyOpenWithBroadcastSchedule:(id)arg1 ;
+(BOOL)isBroadcasterRunningLateWithBroadcastSchedule:(id)arg1 ;
+(BOOL)isScheduledLiveExpiredWithBroadcastSchedule:(id)arg1 ;
+(BOOL)isScheduledLiveCanceledWithVideo:(id)arg1 ;
+(id)adjustedStartDateWithBroadcastSchedule:(id)arg1 ;
+(id)localizedStartTime:(id)arg1 ;
+(unsigned long long)zeroFlashingTimeInSecondsWithBroadcastSchedule:(id)arg1 ;
+(id)coverPhotoURLFromAttachment:(id)arg1 ;
+(id)scheduleFromStory:(id)arg1 ;
+(id)scheduledLiveAttachmentStyle;
+(BOOL)isPriorToLobbyOpenWithBroadcastSchedule:(id)arg1 ;
+(double)timeRemainingToLobbyOpenWithBroadcastSchedule:(id)arg1 ;
+(double)timeRemainingToZeroFlashingEndDateWithBroadcastSchedule:(id)arg1 ;
+(double)timeRemainingToScheduleExpirationDateWithBroadcastSchedule:(id)arg1 ;
+(id)updatedStoryWithStory:(id)arg1 newSchedule:(id)arg2 ;
+(id)localizedRelativeTimeWithTimeRemaining:(double)arg1 ;
+(BOOL)shouldShowScheduledUIInSession:(id)arg1 story:(id)arg2 ;
+(id)titleFromStory:(id)arg1 ;
+(id)descriptionFromStory:(id)arg1 ;
+(id)coverPhotoURLFromStory:(id)arg1 ;
+(BOOL)isScheduledLiveDueWithBroadcastSchedule:(id)arg1 ;
+(id)_attachmentFromStory:(id)arg1 ;
+(id)_styleInfoFromAttachment:(id)arg1 ;
+(id)lobbyOpenDateWithBroadcastSchedule:(id)arg1 ;
+(id)scheduledLiveExpirationDateWithBroadcastSchedule:(id)arg1 ;
+(double)clientBufferTimeInSecondsWithBroadcastSchedule:(id)arg1 ;
+(id)updatedAttachmentWithAttachment:(id)arg1 newSchedule:(id)arg2 ;
+(id)_styleInfoFromStory:(id)arg1 ;
@end
