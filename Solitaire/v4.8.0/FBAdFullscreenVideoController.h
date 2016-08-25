/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>
#import <SolitaireFree/FBAdVideoViewDelegate.h>

@protocol FBAdFullscreenVideoControllerDelegate;
@class NSString, FBAdVideoView, UIButton, UINavigationBar, FBAdTimer;

@interface FBAdFullscreenVideoController : UIViewController <FBAdVideoViewDelegate> {

	SCD_Struct_Un22 _currentTimeInternal;
	id<FBAdFullscreenVideoControllerDelegate> _delegate;
	NSString* _callToAction;
	/*^block*/id _callToActionBlock;
	FBAdVideoView* _videoView;
	UIButton* _dismissButton;
	UIButton* _callToActionButton;
	UINavigationBar* _videoNavigationBar;
	FBAdTimer* _disappearanceTimer;

}

@property (assign,nonatomic,__weak) FBAdVideoView * videoView;                                       //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * callToActionButton;                                   //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * videoNavigationBar;                            //@synthesize videoNavigationBar=_videoNavigationBar - In the implementation block
@property (nonatomic,retain) FBAdTimer * disappearanceTimer;                                         //@synthesize disappearanceTimer=_disappearanceTimer - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdFullscreenVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * callToAction;                                                //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy) id callToActionBlock;                                                     //@synthesize callToActionBlock=_callToActionBlock - In the implementation block
@property (assign,nonatomic) SCD_Struct_Un22 currentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)callToAction;
-(void)setVideoNavigationBar:(UINavigationBar *)arg1 ;
-(void)callToActionHit:(id)arg1 withEvent:(id)arg2 ;
-(void)gestureRecognizerDidTap:(id)arg1 ;
-(void)generateDisappearanceTimer;
-(UINavigationBar *)videoNavigationBar;
-(FBAdTimer *)disappearanceTimer;
-(void)setDisappearanceTimer:(FBAdTimer *)arg1 ;
-(id)callToActionBlock;
-(void)videoViewDidLoad:(id)arg1 ;
-(void)videoViewTapped:(id)arg1 ;
-(id)videoViewCallToActionText:(id)arg1 ;
-(void)videoViewDidTapCallToAction:(id)arg1 withButton:(id)arg2 withEvent:(id)arg3 ;
-(void)setCallToAction:(NSString *)arg1 ;
-(void)playMovieWithURL:(id)arg1 ;
-(void)setCallToActionBlock:(id)arg1 ;
-(UIButton *)callToActionButton;
-(void)setCallToActionButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<FBAdFullscreenVideoControllerDelegate>)arg1 ;
-(id<FBAdFullscreenVideoControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(void)setVideoView:(FBAdVideoView *)arg1 ;
-(void)setCurrentTime:(SCD_Struct_Un22)arg1 ;
-(SCD_Struct_Un22)currentTime;
-(void)setDismissButton:(UIButton *)arg1 ;
-(FBAdVideoView *)videoView;
-(UIButton *)dismissButton;
@end

