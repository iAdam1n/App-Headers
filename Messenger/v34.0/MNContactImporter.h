/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBImportedContactsSyncListener.h>
#import <Messenger/FBContactImportPermissionListener.h>
#import <Messenger/MNContactsSyncLockDelegate.h>
#import <Messenger/FBContactImporter.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBContactImporter, MNContactsSyncLock;
@class MNContactImportAnalyticsLogger, FBEmptyImportedContactsSyncEventFilter, MNImportedContactsFilter, FBContactImportPermissionListenerAnnouncer, FBImportedContactsSyncListenerAnnouncer, FBSyncStoreWriter, FBUserSession, MNContactsSegmentInPeopleTabExperimentContext, NSString;

@interface MNContactImporter : NSObject <FBImportedContactsSyncListener, FBContactImportPermissionListener, MNContactsSyncLockDelegate, FBContactImporter, FBSessionClassProvidable> {

	MNContactImportAnalyticsLogger* _analyticsLogger;
	FBEmptyImportedContactsSyncEventFilter* _emptyContactImportAnalyticsFilter;
	id<FBContactImporter> _contactImporter;
	MNImportedContactsFilter* _contactsFilter;
	FBContactImportPermissionListenerAnnouncer* _permissionAnnouncer;
	FBImportedContactsSyncListenerAnnouncer* _syncAnnouncer;
	id<MNContactsSyncLock> _syncLock;
	FBSyncStoreWriter* _syncSyncStoreWriter;
	FBUserSession* _session;
	MNContactsSegmentInPeopleTabExperimentContext* _contactsSegmentInPeopleTabExperimentContext;

}

@property (nonatomic,retain) MNContactImportAnalyticsLogger * analyticsLogger;                                                         //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,retain) FBEmptyImportedContactsSyncEventFilter * emptyContactImportAnalyticsFilter;                               //@synthesize emptyContactImportAnalyticsFilter=_emptyContactImportAnalyticsFilter - In the implementation block
@property (nonatomic,retain) id<FBContactImporter> contactImporter;                                                                    //@synthesize contactImporter=_contactImporter - In the implementation block
@property (nonatomic,retain) MNImportedContactsFilter * contactsFilter;                                                                //@synthesize contactsFilter=_contactsFilter - In the implementation block
@property (nonatomic,retain) FBContactImportPermissionListenerAnnouncer * permissionAnnouncer;                                         //@synthesize permissionAnnouncer=_permissionAnnouncer - In the implementation block
@property (nonatomic,retain) FBImportedContactsSyncListenerAnnouncer * syncAnnouncer;                                                  //@synthesize syncAnnouncer=_syncAnnouncer - In the implementation block
@property (nonatomic,retain) id<MNContactsSyncLock> syncLock;                                                                          //@synthesize syncLock=_syncLock - In the implementation block
@property (nonatomic,retain) FBSyncStoreWriter * syncSyncStoreWriter;                                                                  //@synthesize syncSyncStoreWriter=_syncSyncStoreWriter - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNContactsSegmentInPeopleTabExperimentContext * contactsSegmentInPeopleTabExperimentContext;              //@synthesize contactsSegmentInPeopleTabExperimentContext=_contactsSegmentInPeopleTabExperimentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNContactImportAnalyticsLogger *)analyticsLogger;
-(void)addSyncListener:(id)arg1 ;
-(void)removeSyncListener:(id)arg1 ;
-(void)contactImportStartedForNumberOfContacts:(unsigned long long)arg1 ;
-(void)contactImportProgressedWithStatus:(id)arg1 ;
-(void)contactImportCompleted;
-(void)contactImportFailed;
-(void)contactImportFailedDueToContactImportingBeingLocked;
-(void)contactImportCancelled;
-(void)contactImportingAllowed;
-(void)contactImportingDisallowed;
-(void)allowContactImporting;
-(void)disallowContactImporting;
-(id<FBContactImporter>)contactImporter;
-(void)setContactImporter:(id<FBContactImporter>)arg1 ;
-(/*^block*/id)_importedContactsFilterBlock;
-(id)initWithContactImporter:(id)arg1 syncStoreWriter:(id)arg2 syncLock:(id)arg3 session:(id)arg4 analyticsLogger:(id)arg5 contactsSegmentInPeopleTabExperimentContext:(id)arg6 ;
-(FBEmptyImportedContactsSyncEventFilter *)emptyContactImportAnalyticsFilter;
-(void)setEmptyContactImportAnalyticsFilter:(FBEmptyImportedContactsSyncEventFilter *)arg1 ;
-(void)setContactsFilter:(MNImportedContactsFilter *)arg1 ;
-(FBContactImportPermissionListenerAnnouncer *)permissionAnnouncer;
-(void)setPermissionAnnouncer:(FBContactImportPermissionListenerAnnouncer *)arg1 ;
-(FBImportedContactsSyncListenerAnnouncer *)syncAnnouncer;
-(void)setSyncAnnouncer:(FBImportedContactsSyncListenerAnnouncer *)arg1 ;
-(FBSyncStoreWriter *)syncSyncStoreWriter;
-(void)setSyncSyncStoreWriter:(FBSyncStoreWriter *)arg1 ;
-(MNContactsSegmentInPeopleTabExperimentContext *)contactsSegmentInPeopleTabExperimentContext;
-(void)setContactsSegmentInPeopleTabExperimentContext:(MNContactsSegmentInPeopleTabExperimentContext *)arg1 ;
-(void)unlockingContactImporting;
-(void)lockingContactImporting;
-(void)failedToLockContactImporting;
-(void)failedToUnlockContactImporting;
-(void)contactImportingUnlocked;
-(void)contactImportingLocked;
-(void)setAnalyticsLogger:(MNContactImportAnalyticsLogger *)arg1 ;
-(void)addPermissionListener:(id)arg1 ;
-(void)removePermissionListener:(id)arg1 ;
-(id<MNContactsSyncLock>)syncLock;
-(void)setSyncLock:(id<MNContactsSyncLock>)arg1 ;
-(MNImportedContactsFilter *)contactsFilter;
-(void)dealloc;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
