/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class WASignalKeyStore;

@interface WASignalCoordinator : NSObject {

	signal_contextRef _signal_global_context;
	signal_protocol_store_contextRef _signal_store_context;
	WASignalKeyStore* _keyStore;

}

@property (nonatomic,readonly) BOOL localKeysAvailable; 
+(BOOL)verifyContentsForPreKeyBundle:(id)arg1 ;
+(int)signalPublicKey:(out ec_public_key*)arg1 fromKeyData:(id)arg2 withKeyType:(unsigned char)arg3 context:(signal_contextRef)arg4 ;
+(id)rawKeyDataFromSerializedSignalKeyBuffer:(signal_bufferRef)arg1 ;
+(signal_contextRef)createGlobalContext;
+(BOOL)validateSignatureForKeyBundle:(id)arg1 ;
-(BOOL)createAndSaveIdentity;
-(BOOL)regenerateKeyStore;
-(NSRange)createAndStorePreKeysWithIdRange:(NSRange)arg1 ;
-(id)unsentPrekeys;
-(int)encryptForGroupAddress:(signal_protocol_sender_key_name*)arg1 plaintextData:(id)arg2 ciphertextData:(out id*)arg3 ciphertextType:(out unsigned long long*)arg4 ;
-(int)encryptForIndividualAddress:(signal_protocol_address*)arg1 plaintextData:(id)arg2 ciphertextData:(out id*)arg3 ciphertextType:(out unsigned long long*)arg4 ;
-(int)decryptPreKeyCiphertextData:(id)arg1 signalAddress:(signal_protocol_address*)arg2 plaintextData:(out id*)arg3 ;
-(int)decryptRegularCiphertextData:(id)arg1 signalAddress:(signal_protocol_address*)arg2 plaintextData:(out id*)arg3 ;
-(int)decryptSenderKeyCiphertextData:(id)arg1 senderKeyName:(signal_protocol_sender_key_name*)arg2 plaintextData:(out id*)arg3 ;
-(BOOL)encryptPlaintextData:(id)arg1 forSignalAddress:(id)arg2 maxPkcs7PaddingLength:(unsigned char)arg3 ciphertextData:(out id*)arg4 ciphertextType:(out unsigned long long*)arg5 error:(out id*)arg6 ;
-(BOOL)decryptCiphertextData:(id)arg1 withCiphertextType:(unsigned long long)arg2 forSignalAddress:(id)arg3 unpadPkcs7:(BOOL)arg4 plaintextData:(out id*)arg5 error:(out id*)arg6 ;
-(BOOL)processPreKeyBundle:(id)arg1 forSignalAddress:(id)arg2 ;
-(signal_protocol_store_contextRef)signal_store_context;
-(signal_contextRef)signal_global_context;
-(BOOL)localKeysAvailable;
-(id)fetchLocalKeyBundle;
-(id)initWithKeyStore:(id)arg1 ;
-(signal_protocol_store_contextRef)createAndSetupStoreContextFromGlobalContext:(signal_contextRef)arg1 withKeyStore:(id)arg2 ;
-(id)fetchIdentityPublicKey;
-(int)fetchSignedPrekeyId:(out unsigned*)arg1 keyData:(out id*)arg2 signatureData:(out id*)arg3 ;
-(void)dealloc;
-(id)keyStore;
@end

