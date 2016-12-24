/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMThreadSummaryTypeProperties, FBMThreadCustomizationInfo, FBMThreadMuteSettings, FBMIndexedThreadParticipationInfoSet, FBMThreadSnippet, NSSet, NSDictionary, NSString, FBMThreadActiveBookingRequests, FBMThreadSummaryFetchStatus;

@interface FBMThreadSummaryBuilder : NSObject {

	FBMThreadSummaryTypeProperties* _typeProperties;
	long long _ephemeralMessageLifeTime;
	FBMThreadCustomizationInfo* _customizationInfo;
	unsigned long long _statusForViewer;
	FBMThreadMuteSettings* _muteSettings;
	unsigned long long _timestamp;
	FBMIndexedThreadParticipationInfoSet* _participationInfoCollection;
	unsigned long long _viewerReadWatermarkTimestamp;
	long long _folderType;
	BOOL _isArchived;
	FBMThreadSnippet* _snippet;
	BOOL _isFlaggedAsImportant;
	NSSet* _eventReminders;
	NSDictionary* _gameData;
	NSString* _montageThreadFbId;
	NSSet* _liveLocations;
	FBMThreadActiveBookingRequests* _activeBookingRequests;
	FBMThreadSummaryFetchStatus* _fetchStatus;

}
+(id)threadSummary;
+(id)threadSummaryFromExistingThreadSummary:(id)arg1 ;
-(id)withFetchStatus:(id)arg1 ;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withTypeProperties:(id)arg1 ;
-(id)withEphemeralMessageLifeTime:(long long)arg1 ;
-(id)withCustomizationInfo:(id)arg1 ;
-(id)withStatusForViewer:(unsigned long long)arg1 ;
-(id)withMuteSettings:(id)arg1 ;
-(id)withParticipationInfoCollection:(id)arg1 ;
-(id)withViewerReadWatermarkTimestamp:(unsigned long long)arg1 ;
-(id)withFolderType:(long long)arg1 ;
-(id)withIsArchived:(BOOL)arg1 ;
-(id)withSnippet:(id)arg1 ;
-(id)withIsFlaggedAsImportant:(BOOL)arg1 ;
-(id)withEventReminders:(id)arg1 ;
-(id)withGameData:(id)arg1 ;
-(id)withMontageThreadFbId:(id)arg1 ;
-(id)withLiveLocations:(id)arg1 ;
-(id)withActiveBookingRequests:(id)arg1 ;
-(id)build;
@end
