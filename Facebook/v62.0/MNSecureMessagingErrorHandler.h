/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingSendHandling, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingMessagingCollectionAddress, MNSecureThreadUpdater, MNSecureMessagingPacketFactory, MNBouncedMessageTracker, FBAnalytics, NSObject;

@interface MNSecureMessagingErrorHandler : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	MNSecureMessagingPacketFactory* _packetFactory;
	id<MNSecureMessagingSendHandling> _sendHandler;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_messageFromStatusPacket:(id)arg1 ;
-(void)_applyMessage:(id)arg1 toThread:(id)arg2 source:(long long)arg3 ;
-(void)_logErrorAdminMessagesForMessage:(id)arg1 source:(long long)arg2 ;
-(void)didEncounterError:(id)arg1 decryptingPacket:(id)arg2 forThread:(id)arg3 ;
-(BOOL)handleWrongVersionedPacket:(id)arg1 ;
-(void)didReceiveStatusPacket:(id)arg1 ;
-(void)handleFailureToProcessLookupReponseForUser:(id)arg1 serverTimestamp:(unsigned long long)arg2 ;
-(void)handleFailureToLookupPreKeysForUser:(id)arg1 serverTimestamp:(unsigned long long)arg2 userHasNotUploadedPreKeys:(BOOL)arg3 ;
-(void)didEncounterError:(id)arg1 encryptingPacket:(id)arg2 forThread:(id)arg3 ;
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 threadUpdater:(id)arg3 packetFactory:(id)arg4 sendHandler:(id)arg5 bouncedMessageTracker:(id)arg6 analytics:(id)arg7 queue:(id)arg8 ;
@end

