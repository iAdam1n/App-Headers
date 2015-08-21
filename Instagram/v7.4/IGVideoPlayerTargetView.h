/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, IGVideoPlayerTargetViewDelegate;
@class NSObject, IGKVOHandle, AVQueuePlayer;

@interface IGVideoPlayerTargetView : UIView {

	NSObject*<OS_dispatch_queue> _workingQueue;
	id<IGVideoPlayerTargetViewDelegate> _delegate;
	IGKVOHandle* _readyToDisplayObserver;
	IGKVOHandle* _playerRateObserver;
	id _playerPlaybackObserver;

}

@property (nonatomic,retain) AVQueuePlayer * player; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workingQueue;                        //@synthesize workingQueue=_workingQueue - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlayerTargetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGKVOHandle * readyToDisplayObserver;                             //@synthesize readyToDisplayObserver=_readyToDisplayObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerRateObserver;                                 //@synthesize playerRateObserver=_playerRateObserver - In the implementation block
@property (nonatomic,retain) id playerPlaybackObserver;                                        //@synthesize playerPlaybackObserver=_playerPlaybackObserver - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 workingQueue:(id)arg2 ;
-(void)setWorkingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(IGKVOHandle *)playerRateObserver;
-(id)playerPlaybackObserver;
-(void)setPlayerRateObserver:(IGKVOHandle *)arg1 ;
-(void)setPlayerPlaybackObserver:(id)arg1 ;
-(IGKVOHandle *)readyToDisplayObserver;
-(void)setReadyToDisplayObserver:(IGKVOHandle *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGVideoPlayerTargetViewDelegate>)arg1 ;
-(id<IGVideoPlayerTargetViewDelegate>)delegate;
-(void)setPlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)player;
@end

