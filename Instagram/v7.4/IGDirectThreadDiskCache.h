/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGDirectThreadDiskCache : NSObject
+(id)cacheBasePath;
+(id)cachePathForThreadId:(id)arg1 ;
+(id)cachedThreadWithId:(id)arg1 ;
+(void)cacheThread:(id)arg1 withContentCount:(unsigned long long)arg2 ;
+(void)uncacheThreadWithID:(id)arg1 ;
+(id)mergeCachedThreadWithThread:(id)arg1 ;
+(id)allCachedThreads;
@end
