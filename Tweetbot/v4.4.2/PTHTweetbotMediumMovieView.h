/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, PTHTweetbotMediumMoviePlayerView, PTHTweetbotMediumMoviePlayerControlView, UIViewController, UIView;

@interface PTHTweetbotMediumMovieView : UIView {

	AVPlayer* _player;
	PTHTweetbotMediumMoviePlayerView* _playerView;
	PTHTweetbotMediumMoviePlayerControlView* _controlView;
	BOOL _hasAudio;
	CGRect _lastBounds;
	UIViewController* _controller;
	UIView* _accessoryView;

}

@property (assign,nonatomic,__weak) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                            //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)doubleTap;
-(void)_togglePlay;
-(void)willPresentFrom:(CGRect)arg1 ;
-(void)dismissTo:(CGRect)arg1 ;
-(void)willShow;
-(void)willPreview;
-(void)didPreview;
-(void)configureActionSheet:(id)arg1 ;
-(id)flickView;
-(BOOL)shouldPan;
-(CGSize)previewPreferredContentSize;
-(id)initWithMedium:(id)arg1 responseDictionary:(id)arg2 ;
-(void)_replay;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)panGestureRecognizer;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(id)panView;
-(void)didShow;
-(void)willHide;
-(void)didHide;
-(void)didPresent;
@end

