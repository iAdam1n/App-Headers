/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HandshakeCipher, WAECKeyPair, WAECPublicKey, NoiseStreamCipher;

@interface NoiseFullHandshake : NSObject {

	HandshakeCipher* _cipher;
	WAECKeyPair* _clientEphemeralKeyPair;
	WAECKeyPair* _clientStaticKeyPair;
	WAECPublicKey* _serverEphemeralPublicKey;
	WAECPublicKey* _serverStaticPublicKey;
	BOOL _generatedClientHello;

}

@property (nonatomic,readonly) BOOL generatedClientHello;                     //@synthesize generatedClientHello=_generatedClientHello - In the implementation block
@property (nonatomic,readonly) NoiseStreamCipher * streamCipher; 
-(id)initWithVersion:(id)arg1 clientStaticKeyPair:(id)arg2 ;
-(BOOL)generateClientHelloCiphertextOutput:(out id*)arg1 withError:(out id*)arg2 ;
-(BOOL)decryptServerHelloCiphertext:(id)arg1 certificate:(out id*)arg2 serverStaticPublicKey:(out id*)arg3 error:(out id*)arg4 ;
-(BOOL)encryptClientFinishLoginPayload:(id)arg1 ciphertextOutput:(out id*)arg2 error:(out id*)arg3 ;
-(NoiseStreamCipher *)streamCipher;
-(BOOL)generatedClientHello;
@end

