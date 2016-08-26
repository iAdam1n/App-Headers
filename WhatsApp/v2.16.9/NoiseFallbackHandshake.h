/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HandshakeCipher, WAECKeyPair, WAECPublicKey, WAPBHandshakeMessage_ServerHello, NoiseStreamCipher;

@interface NoiseFallbackHandshake : NSObject {

	HandshakeCipher* _cipher;
	WAECKeyPair* _clientEphemeralKeyPair;
	WAECKeyPair* _clientStaticKeyPair;
	WAECPublicKey* _serverEphemeralPublicKey;
	WAPBHandshakeMessage_ServerHello* _serverHello;

}

@property (nonatomic,readonly) NoiseStreamCipher * streamCipher; 
-(BOOL)encryptClientFinishLoginPayload:(id)arg1 ciphertextOutput:(out id*)arg2 error:(out id*)arg3 ;
-(NoiseStreamCipher *)streamCipher;
-(BOOL)retrieveCertificate:(out id*)arg1 newServerStaticPublicKey:(out id*)arg2 error:(out id*)arg3 ;
-(id)initWithServerHello:(id)arg1 clientEphemeralKeyPair:(id)arg2 clientStaticKeyPair:(id)arg3 version:(id)arg4 ;
@end
