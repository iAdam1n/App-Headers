/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTImageURLLoader.h>

@class NSString, RCTBridge;

@interface RCTLocalAssetImageLoader : NSObject <RCTImageURLLoader>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(BOOL)canLoadImageURL:(id)arg1 ;
-(/*^block*/id)loadImageForURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressHandler:(/*^block*/id)arg5 partialLoadHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)requiresScheduling;
-(BOOL)shouldCacheLoadedImages;
@end
