/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsSyncStatusListener.h>

@protocol FBContactsStore;
@class NSString;

@interface FBSyncedLocalContactsStoreUpdater : NSObject <FBLocalContactsSyncStatusListener> {

	id<FBContactsStore> _previouslySyncedContactsStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(id)initWithPreviouslySyncedContactsStore:(id)arg1 ;
@end
