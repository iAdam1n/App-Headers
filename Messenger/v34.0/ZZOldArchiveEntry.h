/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZZArchiveEntry.h>

@class NSDate, NSString;

@interface ZZOldArchiveEntry : ZZArchiveEntry {

	ZZCentralFileHeader* _centralFileHeader;
	ZZLocalFileHeader* _localFileHeader;
	unsigned long long _encoding;
	long long _encryptionMode;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned long long crc32; 
@property (nonatomic,readonly) unsigned long long compressedSize; 
@property (nonatomic,readonly) unsigned long long uncompressedSize; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
-(id)initWithCentralFileHeader:(ZZCentralFileHeader*)arg1 localFileHeader:(ZZLocalFileHeader*)arg2 encoding:(unsigned long long)arg3 ;
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)newStreamWithPassword:(id)arg1 error:(out id*)arg2 ;
-(id)newDataWithPassword:(id)arg1 error:(out id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithPassword:(id)arg1 error:(out id*)arg2 ;
-(unsigned short)fileMode;
-(BOOL)check:(out id*)arg1 ;
-(BOOL)checkEncryptionAndCompression:(out id*)arg1 ;
-(id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id*)arg3 ;
-(unsigned long long)crc32;
-(unsigned long long)uncompressedSize;
-(unsigned short)compressionMethod;
-(NSString *)fileName;
-(BOOL)encrypted;
-(id)fileData;
-(BOOL)compressed;
-(id)stringWithBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)compressedSize;
-(NSDate *)lastModified;
@end

