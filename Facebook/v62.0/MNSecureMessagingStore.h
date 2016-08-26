/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNThreadEncryptionKeyStoring.h>
#import <Facebook/MNSecureMessagingPreKeyStoring.h>
#import <Facebook/MNSecureMessagingRemoteIdentityStoring.h>

@protocol OS_dispatch_queue, MNSecureMessagingStoreListener, FBClock;
@class EGODatabase, NSURL, FBUserSession, FBAnalytics, NSObject, NSDictionary, MNThreadEncryptionKeyResolver, NSData, MNEphemeralMessagingSQLFilterQueryBuilder, NSString;

@interface MNSecureMessagingStore : NSObject <MNThreadEncryptionKeyStoring, MNSecureMessagingPreKeyStoring, MNSecureMessagingRemoteIdentityStoring> {

	EGODatabase* _db;
	NSURL* _fileUrl;
	FBUserSession* _userSession;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _dbStatements;
	id<MNSecureMessagingStoreListener> _listener;
	MNThreadEncryptionKeyResolver* _threadEncryptionKeyResolver;
	NSData* _masterKey;
	MNEphemeralMessagingSQLFilterQueryBuilder* _ephemeralFilterSQLBuilder;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fileUrl;
-(id)restoreThreadsBefore:(unsigned long long)arg1 limit:(long long)arg2 numberOfMessagesPerThread:(long long)arg3 ;
-(id)secureThreadSummariesWithOtherUserFbIds:(id)arg1 ;
-(id)requestThreadAndMessagesForReportingFlow:(id)arg1 numberOfMessages:(long long)arg2 before:(unsigned long long)arg3 ;
-(id)loadIdentityForOtherUserFbId:(id)arg1 ;
-(id)messageIdsInHoldingTankMovedBeforeTimestamp:(unsigned long long)arg1 ;
-(id)requestThread:(id)arg1 numberOfMessages:(long long)arg2 before:(unsigned long long)arg3 ;
-(id)requestMessage:(id)arg1 ;
-(id)allIncomingExpiredEphemeralMessagesOnThread:(id)arg1 ;
-(id)requestAttachment:(id)arg1 ;
-(id)runPersistenceJobs:(id)arg1 ;
-(id)openWithMasterKey:(id)arg1 ;
-(BOOL)deleteStoreIfDirty;
-(id)objectInCustomBlobStorageForType:(unsigned long long)arg1 ;
-(BOOL)storePreKeyRecords:(id)arg1 ;
-(BOOL)saveObjectInCustomBlobStorage:(id)arg1 forType:(unsigned long long)arg2 ;
-(id)_wrapError:(id)arg1 ;
-(id)_checkVersionMatches:(id)arg1 ;
-(id)_excludeFromBackup;
-(void)_createDBStatements;
-(void)_enableSecureDelete;
-(void)_setIsDirty:(BOOL)arg1 ;
-(id)_restoreMessagesForThreads:(id)arg1 limit:(long long)arg2 before:(unsigned long long)arg3 ;
-(id)_messageSetFromResult:(id)arg1 secureThreadKey:(id)arg2 ;
-(id)loadPreKey:(int)arg1 ;
-(id)_selectMessagesForSecureThread:(id)arg1 limit:(long long)arg2 before:(unsigned long long)arg3 ;
-(id)requestWrappedEncryptionKeyForThread:(id)arg1 ;
-(BOOL)containsPreKey:(int)arg1 ;
-(void)removePreKey:(int)arg1 ;
-(id)numberOfPreKeysStored;
-(BOOL)storeRemoteIdentity:(id)arg1 forOtherUserFbId:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 storeListener:(id)arg2 analytics:(id)arg3 ephemeralTimerStoreReader:(id)arg4 clock:(id)arg5 queue:(id)arg6 ;
-(id)deleteAllMessagingContent;
-(long long)numberOfMessageForThread:(id)arg1 after:(unsigned long long)arg2 ;
-(id)requestThread:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isDirty;
-(void)close;
-(BOOL)isOpen;
@end
