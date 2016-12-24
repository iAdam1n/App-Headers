/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WASignalKeyStoreDelegate.h>
#import <WhatsApp/WAUpgradeCallback.h>
#import <WhatsApp/WAPersistentRequestManagerRegistering.h>

@protocol OS_dispatch_queue;
@class NSObject, WASignalCoordinator, NSMutableDictionary, NSDate, WASignalKeyBundle, NSString;

@interface WASignalManager : NSObject <WASignalKeyStoreDelegate, WAUpgradeCallback, WAPersistentRequestManagerRegistering> {

	NSObject*<OS_dispatch_queue> _workQueue;
	WASignalCoordinator* _signalCoordinator;
	NSMutableDictionary* _pendingPrekeyTasks;
	NSMutableDictionary* _groupSenderKeySentCache;
	BOOL _registrationInProgress;
	BOOL _requestRegistrationOnIdMismatchPermitted;
	BOOL _digestRequestPending;
	BOOL _senderKeyRotationRequestPending;
	int _prekeyRequestBackoffIndex;
	NSDate* _prekeyRequestAvailabilityDate;
	BOOL _needsRegistration;
	WASignalKeyBundle* _localKeyBundle;

}

@property (retain) WASignalKeyBundle * localKeyBundle;              //@synthesize localKeyBundle=_localKeyBundle - In the implementation block
@property (assign) BOOL needsRegistration;                          //@synthesize needsRegistration=_needsRegistration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(void)recordDecryptFieldStatEventForJid:(id)arg1 decryptRequest:(id)arg2 decryptedProtobuf:(id)arg3 isCall:(BOOL)arg4 retryCount:(unsigned char)arg5 decryptError:(id)arg6 ;
+(float)statsFromSessionType:(short)arg1 ;
+(float)statsFromCiphertextType:(unsigned long long)arg1 ;
+(float)statsFromMessageType:(int)arg1 ;
+(void)recordDecryptFieldStatEventForMesssageWithJid:(id)arg1 decryptRequest:(id)arg2 decryptedProtobuf:(id)arg3 retryCount:(unsigned char)arg4 decryptError:(id)arg5 ;
+(void)recordDecryptFieldStatEventForCallWithJid:(id)arg1 decryptRequest:(id)arg2 retryCount:(unsigned char)arg3 decryptError:(id)arg4 ;
+(void)recordEncryptFieldStatEventForMessage:(id)arg1 withEncryptResult:(id)arg2 retryCount:(unsigned char)arg3 ;
+(id)stableIdentifierFromJid:(id)arg1 ;
-(void)xmppConnectionStateDidChange:(id)arg1 ;
-(void)maybeTrickleGenerateSomePrekeys;
-(void)resetPersistentState;
-(id)sharedObjectKeyForPersistentRequestManager:(id)arg1 ;
-(void)registerHandlersForPersistentRequestManager:(id)arg1 ;
-(void)resetPrekeyBackoff;
-(void)processRetryReceiptForMessageId:(id)arg1 withRecipientRegistrationId:(id)arg2 atRetryCount:(unsigned char)arg3 ;
-(void)markSenderKeySentForAllParticipantsOfGroupWithJid:(id)arg1 ;
-(void)saveCurrentBaseKeyForMessageID:(id)arg1 ;
-(void)encryptMessage:(id)arg1 forJid:(id)arg2 participant:(id)arg3 completion:(/*^block*/id)arg4 ;
-(WASignalKeyBundle *)localKeyBundle;
-(id)signalCoordinator;
-(void)encryptIndividualMessage:(id)arg1 forUserJid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveServerCheckLocalRegistrationId:(unsigned)arg1 ;
-(void)decryptIndividualMessageWithRequest:(id)arg1 withDecryptJournalId:(id)arg2 forUserJid:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)synchronousBlockingOnDecryptVeryBad;
-(void)fetchSignalFingerprintForJid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchJidsNeedingSenderKeysForGroupChatSession:(id)arg1 ;
-(void)requestPrekeysForTask:(id)arg1 ;
-(void)encryptGroupMessage:(id)arg1 forGroupJid:(id)arg2 participantJid:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)encryptIndividualMessage:(id)arg1 forUserJid:(id)arg2 result:(out id*)arg3 error:(out id*)arg4 ;
-(void)encryptDirectedMessage:(id)arg1 forGroupJid:(id)arg2 participantJid:(id)arg3 senderKeyData:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)encryptGroupMessage:(id)arg1 forGroupJid:(id)arg2 senderKeyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)groupSenderKeySentCache;
-(void)prefetchSessionsForJids:(id)arg1 ;
-(void)keyStore:(id)arg1 failedWithError:(id)arg2 ;
-(void)keyStore:(id)arg1 detectedIdentityChangedForRecipientId:(long long)arg2 ;
-(id)createRegistrationRequest;
-(void)setLocalKeyBundle:(WASignalKeyBundle *)arg1 ;
-(void)registerWithServer;
-(void)resetPersistentStateImpl;
-(void)setNeedsRegistration:(BOOL)arg1 ;
-(id)createDigestRequest;
-(id)createSignedPrekeyRotationRequest;
-(void)checkServerDigest;
-(void)processBundles:(id)arg1 jidsWithSpecificErrors:(id)arg2 ;
-(void)processBundle:(id)arg1 withError:(id)arg2 forJid:(id)arg3 ;
-(void)requestSignedPrekeyRotation;
-(void)didReceiveDigestCheckNeededEvent;
-(id)initWithXMPPConnectionForPassiveModeHandlerRegistration:(id)arg1 urlToKeyStore:(id)arg2 ;
-(void)cleanupKeyStore;
-(void)didReceivePrekeyUploadRequestWithCurrentKeyCount:(unsigned long long)arg1 ;
-(void)clearLocalSenderKeySessionForGroup:(id)arg1 ;
-(void)didReceiveIdentityChangedNotificationForJid:(id)arg1 ;
-(BOOL)decryptMessageWithRequest:(id)arg1 forSignalAddress:(id)arg2 plaintextMessage:(out id*)arg3 error:(out id*)arg4 ;
-(void)handleDecryptResultForRequest:(id)arg1 protobuf:(id)arg2 decryptJournalId:(id)arg3 error:(id)arg4 endDeferringStoreSaves:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)shimForOrderingWithCompletion:(/*^block*/id)arg1 ;
-(void)decryptGroupMessageWithIndividualRequest:(id)arg1 groupRequest:(id)arg2 withDecryptJournalId:(id)arg3 forGroupJid:(id)arg4 participantJid:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchSignalIdentityPublicKeyForJid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)loadWithURL:(id)arg1 ;
-(id)workQueue;
-(BOOL)needsRegistration;
@end
