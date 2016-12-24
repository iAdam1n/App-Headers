/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStorylineMoodsManagerListener, OS_dispatch_queue;
@class NSObject;

@interface FBStorylineMoodsManagerSubscription : NSObject {

	id<FBStorylineMoodsManagerListener> _listener;
	NSObject*<OS_dispatch_queue> _performer;

}

@property (nonatomic,__weak,readonly) id<FBStorylineMoodsManagerListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> performer;                           //@synthesize performer=_performer - In the implementation block
-(NSObject*<OS_dispatch_queue>)performer;
-(id)initWithListener:(id)arg1 performer:(id)arg2 ;
-(id<FBStorylineMoodsManagerListener>)listener;
@end
