/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FBPlatformPrefetchedURLStore : NSObject {

	NSMutableDictionary* _urlToFileMap;
	NSString* _cachedResponsesDiskPath;
	NSString* _urlToFileMapArchivePath;

}

@property (nonatomic,retain) NSMutableDictionary * urlToFileMap;              //@synthesize urlToFileMap=_urlToFileMap - In the implementation block
@property (nonatomic,copy) NSString * cachedResponsesDiskPath;                //@synthesize cachedResponsesDiskPath=_cachedResponsesDiskPath - In the implementation block
@property (nonatomic,copy) NSString * urlToFileMapArchivePath;                //@synthesize urlToFileMapArchivePath=_urlToFileMapArchivePath - In the implementation block
+(id)canonicalURLStringForURLString:(id)arg1 ;
-(void)removeOrphanedCachedResponses;
-(void)setCachedResponsesDiskPath:(NSString *)arg1 ;
-(NSString *)cachedResponsesDiskPath;
-(void)setUrlToFileMapArchivePath:(NSString *)arg1 ;
-(NSString *)urlToFileMapArchivePath;
-(void)setUrlToFileMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)urlToFileMap;
-(id)cachedResponseForURL:(id)arg1 ;
-(id)initWithDiskPath:(id)arg1 ;
-(BOOL)storeResponse:(id)arg1 data:(id)arg2 ;
-(BOOL)removeCachedResponseForURLString:(id)arg1 ;
-(BOOL)serializeToDisk;
@end
