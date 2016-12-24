/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNUserWriting.h>

@class FBSyncEventWriter, FBAnalytics;

@interface FBSyncStoreWriter : NSObject <MNUserWriting> {

	FBSyncEventWriter* _syncEventWriter;
	FBAnalytics* _analytics;

}
-(void)beginWritePresenceUpdates:(id)arg1 shouldClearExistingPresenceValues:(BOOL)arg2 ;
-(void)beginWriteMessengerStatusUpdates:(id)arg1 ;
-(void)writeSyncPeopleToStore:(id)arg1 ;
-(void)removeSyncPeopleFromStore:(id)arg1 ;
-(void)beginWriteFavoriteContacts:(id)arg1 ;
-(id)initWithSyncEventWriter:(id)arg1 analytics:(id)arg2 ;
-(void)beginWriteAddSyncPersons:(id)arg1 ;
-(void)beginWriteRemovalSyncPersons:(id)arg1 ;
@end
