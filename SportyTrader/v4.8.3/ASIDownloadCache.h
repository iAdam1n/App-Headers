/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/ASICacheDelegate.h>

@class NSString, NSRecursiveLock;

@interface ASIDownloadCache : NSObject <ASICacheDelegate> {

	int defaultCachePolicy;
	NSString* storagePath;
	NSRecursiveLock* accessLock;
	BOOL shouldRespectCacheControlHeaders;

}

@property (assign,nonatomic) int defaultCachePolicy; 
@property (nonatomic,retain) NSString * storagePath; 
@property (retain) NSRecursiveLock * accessLock; 
@property (assign) BOOL shouldRespectCacheControlHeaders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)serverAllowsResponseCachingForRequest:(id)arg1 ;
+(id)fileExtensionsToHandleAsHTML;
+(id)keyForURL:(id)arg1 ;
+(void)initialize;
+(id)sharedCache;
-(void)setShouldRespectCacheControlHeaders:(BOOL)arg1 ;
-(void)setDefaultCachePolicy:(int)arg1 ;
-(void)setAccessLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)accessLock;
-(void)clearCachedResponsesForStoragePolicy:(int)arg1 ;
-(id)pathToStoreCachedResponseHeadersForRequest:(id)arg1 ;
-(id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2 ;
-(BOOL)shouldRespectCacheControlHeaders;
-(id)pathToStoreCachedResponseDataForRequest:(id)arg1 ;
-(id)pathToCachedResponseHeadersForURL:(id)arg1 ;
-(id)pathToCachedResponseDataForURL:(id)arg1 ;
-(id)pathToFile:(id)arg1 ;
-(void)removeCachedDataForURL:(id)arg1 ;
-(id)cachedResponseHeadersForURL:(id)arg1 ;
-(BOOL)isCachedDataCurrentForRequest:(id)arg1 ;
-(int)defaultCachePolicy;
-(void)updateExpiryForRequest:(id)arg1 maxAge:(double)arg2 ;
-(BOOL)canUseCachedDataForRequest:(id)arg1 ;
-(void)removeCachedDataForRequest:(id)arg1 ;
-(void)storeResponseForRequest:(id)arg1 maxAge:(double)arg2 ;
-(id)cachedResponseDataForURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setStoragePath:(NSString *)arg1 ;
-(NSString *)storagePath;
@end

