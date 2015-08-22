/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBMThreadSummaryFetchStatusBuilder : NSObject {

	BOOL _hasFetchedFbId;
	BOOL _hasFetchedCustomName;
	BOOL _hasFetchedIsGroupThread;
	BOOL _hasFetchedFbGroupId;
	BOOL _hasFetchedCustomLikeEmoji;
	BOOL _hasFetchedStatusForViewer;
	BOOL _hasFetchedMutedUntil;
	BOOL _hasFetchedTimestamp;
	BOOL _hasFetchedParticipationInfoCollection;
	BOOL _hasFetchedOtherParticipantIds;
	BOOL _hasFetchedNumberOfMessages;
	BOOL _hasFetchedNumberOfUnreadMessages;
	BOOL _hasFetchedPicHash;
	BOOL _hasFetchedFolderType;
	BOOL _hasFetchedIsArchived;
	BOOL _hasFetchedSnippet;
	BOOL _hasFetchedIsFlaggedAsImportant;

}
+(id)threadSummaryFetchStatus;
+(id)threadSummaryFetchStatusFromExistingThreadSummaryFetchStatus:(id)arg1 ;
-(id)withHasFetchedFbId:(BOOL)arg1 ;
-(id)withHasFetchedCustomName:(BOOL)arg1 ;
-(id)withHasFetchedIsGroupThread:(BOOL)arg1 ;
-(id)withHasFetchedFbGroupId:(BOOL)arg1 ;
-(id)withHasFetchedCustomLikeEmoji:(BOOL)arg1 ;
-(id)withHasFetchedStatusForViewer:(BOOL)arg1 ;
-(id)withHasFetchedMutedUntil:(BOOL)arg1 ;
-(id)withHasFetchedTimestamp:(BOOL)arg1 ;
-(id)withHasFetchedParticipationInfoCollection:(BOOL)arg1 ;
-(id)withHasFetchedOtherParticipantIds:(BOOL)arg1 ;
-(id)withHasFetchedNumberOfMessages:(BOOL)arg1 ;
-(id)withHasFetchedNumberOfUnreadMessages:(BOOL)arg1 ;
-(id)withHasFetchedPicHash:(BOOL)arg1 ;
-(id)withHasFetchedFolderType:(BOOL)arg1 ;
-(id)withHasFetchedIsArchived:(BOOL)arg1 ;
-(id)withHasFetchedSnippet:(BOOL)arg1 ;
-(id)withHasFetchedIsFlaggedAsImportant:(BOOL)arg1 ;
-(id)build;
@end
