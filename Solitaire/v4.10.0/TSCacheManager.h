/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCacheManager : NSObject {

	unsigned long long _totalSize;

}

@property (assign,nonatomic) unsigned long long totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
+(id)sharedInstance;
-(void)clearCacheSubFolder:(id)arg1 ;
-(void)clearEntireCache;
-(BOOL)checkFileExist:(id)arg1 adUnitId:(id)arg2 ;
-(id)getURLForFile:(id)arg1 adUnitId:(id)arg2 ;
-(void)cacheData:(id)arg1 withFileName:(id)arg2 adUnitId:(id)arg3 ;
-(id)getCacheSubFolder:(id)arg1 ;
-(id)getTSCacheRootDir;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
@end
