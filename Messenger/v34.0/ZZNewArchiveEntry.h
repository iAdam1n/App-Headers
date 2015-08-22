/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/ZZArchiveEntry.h>

@class NSString, NSDate;

@interface ZZNewArchiveEntry : ZZArchiveEntry {

	NSString* _fileName;
	unsigned short _fileMode;
	NSDate* _lastModified;
	long long _compressionLevel;
	/*^block*/id _dataBlock;
	/*^block*/id _streamBlock;
	/*^block*/id _dataConsumerBlock;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
-(unsigned short)fileMode;
-(NSString *)fileName;
-(BOOL)compressed;
-(NSDate *)lastModified;
@end
