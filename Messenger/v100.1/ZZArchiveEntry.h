/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDate, NSString;

@interface ZZArchiveEntry : NSObject

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned long long crc32; 
@property (nonatomic,readonly) unsigned long long compressedSize; 
@property (nonatomic,readonly) unsigned long long uncompressedSize; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
+(id)archiveEntryWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(BOOL)arg2 dataBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(BOOL)arg2 streamBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(BOOL)arg2 dataConsumerBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithDirectoryName:(id)arg1 ;
-(id)newDataWithError:(id*)arg1 ;
-(unsigned short)fileMode;
-(id)newStreamWithError:(id*)arg1 ;
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)newStreamWithPassword:(id)arg1 error:(id*)arg2 ;
-(id)newDataWithPassword:(id)arg1 error:(id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithPassword:(id)arg1 error:(id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithError:(id*)arg1 ;
-(unsigned long long)uncompressedSize;
-(BOOL)compressed;
-(unsigned long long)compressedSize;
-(BOOL)check:(id*)arg1 ;
-(BOOL)encrypted;
-(NSString *)fileName;
-(unsigned long long)crc32;
-(NSDate *)lastModified;
@end
