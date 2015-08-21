/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSLock, IGRenderer;

@interface IGFilteredImageGenerator : NSObject {

	NSLock* _appBackgroundLock;
	IGRenderer* _renderer;

}

@property (nonatomic,retain) IGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)filteredImagesForImage:(id)arg1 filterClasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationDidWillResignActive:(id)arg1 ;
-(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(IGRenderer *)renderer;
@end

