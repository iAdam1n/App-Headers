/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface TFNTwitterUserBannerCache : NSObject
+(id)imageForUser:(id)arg1 cacheKey:(id)arg2 ;
+(id)sourceUrlForUser:(id)arg1 cacheKey:(id)arg2 ;
+(void)cacheImage:(id)arg1 withSourceUrl:(id)arg2 forUser:(id)arg3 cacheKey:(id)arg4 ;
+(void)clearAllCachedImagesForUser:(id)arg1 ;
+(id)_imageCacheForCacheKey:(id)arg1 ;
+(id)_urlCacheForCacheKey:(id)arg1 ;
+(void)clearCachedImageForUser:(id)arg1 cacheKey:(id)arg2 ;
@end

