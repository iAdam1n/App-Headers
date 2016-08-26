/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, NSObject, ALLogManager, NSArray;

@interface ALFileManager : NSObject {

	ALSdk* _sdk;
	NSObject* _fileSystemLock;

}

@property (readonly) unsigned long long fileTTL; 
@property (readonly) unsigned long long maximumCacheSize; 
@property (nonatomic,retain) ALSdk * sdk;                              //@synthesize sdk=_sdk - In the implementation block
@property (retain) NSObject * fileSystemLock;                          //@synthesize fileSystemLock=_fileSystemLock - In the implementation block
@property (__weak,readonly) ALLogManager * logManager; 
@property (__weak,readonly) NSArray * allCachedFilePaths; 
-(unsigned long long)cacheSizeAfterDroppingExpiredFiles;
-(void)dropCacheIfRequired:(unsigned long long)arg1 ;
-(unsigned long long)fileTTL;
-(unsigned long long)maximumCacheSize;
-(unsigned long long)bytesToMegabytes:(unsigned long long)arg1 ;
-(void)dropCache;
-(void)compactCache;
-(BOOL)cacheResourceWithData:(id)arg1 named:(id)arg2 ;
-(BOOL)removeExistingFileAtPath:(id)arg1 ;
-(BOOL)removeExistingFileNamed:(id)arg1 ;
-(BOOL)hasCachedResourceNamed:(id)arg1 ;
-(id)urlStringForResourceNamed:(id)arg1 ;
-(id)filePathForResourceNamed:(id)arg1 ;
-(id)urlForResourceNamed:(id)arg1 ;
-(id)allCachedFileNames;
-(id)initWithSdk:(id)arg1 ;
-(ALSdk *)sdk;
-(void)setSdk:(ALSdk *)arg1 ;
-(ALLogManager *)logManager;
-(void)setFileSystemLock:(NSObject *)arg1 ;
-(NSObject *)fileSystemLock;
-(NSArray *)allCachedFilePaths;
@end
