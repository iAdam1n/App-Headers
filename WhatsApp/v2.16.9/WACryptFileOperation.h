/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WATriggeredOperation.h>

@class NSString, NSData, WAEncryptionMetadata, NSFileHandle, NSMutableData;

@interface WACryptFileOperation : WATriggeredOperation {

	NSString* _source;
	NSString* _destination;
	unsigned _operation;
	NSData* _cryptKey;
	WAEncryptionMetadata* _cryptMetadata;
	/*^block*/id _keyLoader;
	NSFileHandle* _inputFile;
	NSFileHandle* _outputFile;
	int _inputfd;
	int _outputfd;
	CCCryptorRef _cryptor;
	SCD_Struct_WA63 _hmac;
	SCD_Struct_WA63* _hmacPtr;
	long long _bytesToCrypt;
	NSMutableData* _readBuffer;
	NSMutableData* _outputBuffer;
	BOOL _hasMissingKeyError;
	BOOL _hasNoConnectionError;
	BOOL _failed;

}

@property (assign) BOOL failed;                            //@synthesize failed=_failed - In the implementation block
@property (assign) BOOL hasMissingKeyError;                //@synthesize hasMissingKeyError=_hasMissingKeyError - In the implementation block
@property (assign) BOOL hasNoConnectionError;              //@synthesize hasNoConnectionError=_hasNoConnectionError - In the implementation block
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(void)performTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 encryptionKey:(id)arg3 encryptionMetadata:(id)arg4 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 decryptionKeyLoader:(/*^block*/id)arg3 ;
-(BOOL)hasNoConnectionError;
-(BOOL)hasMissingKeyError;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 operation:(unsigned)arg3 ;
-(long long)readBytes:(void*)arg1 ofLength:(unsigned long long)arg2 ;
-(BOOL)tryToOpenInputFileAtURL:(id)arg1 ;
-(void)closeInputFile;
-(void)setHasNoConnectionError:(BOOL)arg1 ;
-(void)setHasMissingKeyError:(BOOL)arg1 ;
-(void)runOperationWithInputURL:(id)arg1 ;
-(BOOL)tryToRunOperationWithInputURL:(id)arg1 ;
-(BOOL)tryToOpenOutputFile;
-(BOOL)prepareForCrypt;
-(BOOL)writeBytes:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(BOOL)tryToCrypt;
-(void)getHMACBytes:(void*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)runOperation;
-(void)loadKeyWithCompletion:(/*^block*/id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)finish;
-(id)readMetadata;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)succeeded;
-(BOOL)verifyMetadata;
@end

