/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSCache.h>

@interface IGDecodedImageCache : NSCache
+(id)sharedDecodedImageCache;
-(void)saveImage:(id)arg1 dataLength:(id)arg2 forURL:(id)arg3 ;
-(id)dataLengthForURL:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
-(id)init;
@end

