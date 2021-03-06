/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MNThreadParticipantUpdater, MNThreadCustomNameUpdater, MNThreadMuteSettingUpdater, MNThreadPicHashUpdater, MNThreadArchivedStateUpdater, MNThreadReadStateUpdater;

@interface MNThreadSummaryUpdateDispatcher : NSObject {

	MNThreadParticipantUpdater* _participantUpdater;
	MNThreadCustomNameUpdater* _customNameUpdater;
	MNThreadMuteSettingUpdater* _muteSettingsUpdater;
	MNThreadPicHashUpdater* _picHashUpdater;
	MNThreadArchivedStateUpdater* _archivedUpdater;
	MNThreadReadStateUpdater* _readStateUpdater;

}
-(id)initWithAuthenticationManager:(id)arg1 ;
-(id)applySummaryUpdate:(id)arg1 toThreadSummary:(id)arg2 ;
@end

