/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPDiskLRUCacheFile : NSObject {

	NSString* _filePath;
	double _lastModTimestamp;
	unsigned long long _fileSize;

}

@property (nonatomic,copy) NSString * filePath;                        //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) double lastModTimestamp;                  //@synthesize lastModTimestamp=_lastModTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
-(double)lastModTimestamp;
-(void)setLastModTimestamp:(double)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
@end
