/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDExperimentalDiskCache;
@interface FBUIKitRenderedImageCache : NSObject {

	id<CDExperimentalDiskCache> _cache;

}
+(id)sharedRenderedImageCache;
-(id)__cacheKeyForImageNamed:(id)arg1 withColor:(id)arg2 ;
-(void)asynchronouslySetRenderedImage:(id)arg1 forName:(id)arg2 color:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)renderedImageForName:(id)arg1 color:(id)arg2 ;
-(id)synchronouslySetRenderedImage:(id)arg1 forName:(id)arg2 color:(id)arg3 ;
-(id)init;
@end
