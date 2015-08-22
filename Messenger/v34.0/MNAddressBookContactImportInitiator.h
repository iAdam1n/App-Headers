/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/MNContactImportInitiator.h>

@protocol FBContactImporter;
@class FBSystemAddressBook, MNAddressBookContactImportInitiationCoordinator, MNContactImportInitiationListenerAnnouncer, MNGraphGlobalContactsSyncLock, MNUserSettings, MNContactImportInitationAnalyticsLogger, NSString;

@interface MNAddressBookContactImportInitiator : NSObject <MNContactImportInitiationListener, MNContactImportInitiator> {

	FBSystemAddressBook* _addressBook;
	id<FBContactImporter> _contactImporter;
	MNAddressBookContactImportInitiationCoordinator* _initiationCoordinator;
	MNContactImportInitiationListenerAnnouncer* _initiationEventAnnouncer;
	MNGraphGlobalContactsSyncLock* _syncLock;
	MNUserSettings* _userSettings;
	MNContactImportInitationAnalyticsLogger* _contactImportInitiationAnalyticsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initiateContactImporting;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 listener:(id)arg4 contactImportInitiationAnalyticsLogger:(id)arg5 ;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)dealloc;
@end
