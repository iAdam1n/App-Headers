/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGDocumentFileReference.h>

@class NSData, NSString;

@interface TGDocumentEncryptedFileReference : NSObject <TGDocumentFileReference> {

	int _datacenterId;
	int _encryptedSize;
	int _decryptedSize;
	int _keyFingerprint;
	long long _fileId;
	long long _accessHash;
	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,readonly) int datacenterId;                    //@synthesize datacenterId=_datacenterId - In the implementation block
@property (nonatomic,readonly) long long fileId;                    //@synthesize fileId=_fileId - In the implementation block
@property (nonatomic,readonly) long long accessHash;                //@synthesize accessHash=_accessHash - In the implementation block
@property (nonatomic,readonly) int encryptedSize;                   //@synthesize encryptedSize=_encryptedSize - In the implementation block
@property (nonatomic,readonly) int decryptedSize;                   //@synthesize decryptedSize=_decryptedSize - In the implementation block
@property (nonatomic,readonly) int keyFingerprint;                  //@synthesize keyFingerprint=_keyFingerprint - In the implementation block
@property (nonatomic,readonly) NSData * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSData * iv;                         //@synthesize iv=_iv - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(long long)accessHash;
-(int)datacenterId;
-(long long)fileId;
-(int)keyFingerprint;
-(NSData *)iv;
-(id)initWithDatacenterId:(int)arg1 fileId:(long long)arg2 accessHash:(long long)arg3 encryptedSize:(int)arg4 decryptedSize:(int)arg5 keyFingerprint:(int)arg6 key:(id)arg7 iv:(id)arg8 ;
-(int)encryptedSize;
-(int)decryptedSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)key;
@end
