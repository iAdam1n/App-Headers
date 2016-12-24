/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoCreativeToolsApplierListenerAnnouncer;


@protocol FBVideoCreativeToolsApplier <NSObject>
@property (assign,nonatomic,__weak) id<FBVideoCreativeToolsApplierVideoOutputDelegate> cameraOutputDelegate; 
@property (nonatomic,readonly) FBVideoCreativeToolsApplierListenerAnnouncer * applierAnnouncer; 
@property (assign,nonatomic) unsigned long long selectedFilterIndex; 
@property (assign,nonatomic) BOOL overlayFilterIsApplied; 
@required
-(void)removeFilterAtIndex:(unsigned long long)arg1;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2;
-(void)dispatchOnCameraThread:(/*^block*/id)arg1;
-(id)getRenderQueue;
-(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)cameraOutputDelegate;
-(void)setCameraOutputDelegate:(id)arg1;
-(FBVideoCreativeToolsApplierListenerAnnouncer *)applierAnnouncer;
-(unsigned long long)selectedFilterIndex;
-(void)setSelectedFilterIndex:(unsigned long long)arg1;
-(BOOL)overlayFilterIsApplied;
-(void)setOverlayFilterIsApplied:(BOOL)arg1;

@end
