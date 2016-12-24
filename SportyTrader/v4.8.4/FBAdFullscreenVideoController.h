/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBAdFullscreenVideoControllerDelegate;
@class NSString, FBAdVideoView, UIButton, UINavigationBar, FBAdTimer;

@interface FBAdFullscreenVideoController : UIViewController {

	id<FBAdFullscreenVideoControllerDelegate> _delegate;
	NSString* _callToAction;
	/*^block*/id _callToActionBlock;
	FBAdVideoView* _videoView;
	UIButton* _dismissButton;
	UIButton* _callToActionButton;
	UINavigationBar* _videoNavigationBar;
	FBAdTimer* _disappearanceTimer;

}

@property (assign,nonatomic,__weak) id<FBAdFullscreenVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * callToAction;                                                //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy) id callToActionBlock;                                                     //@synthesize callToActionBlock=_callToActionBlock - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SA23 currentTime; 
@property (assign,nonatomic,__weak) FBAdVideoView * videoView;                                       //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * callToActionButton;                                   //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * videoNavigationBar;                            //@synthesize videoNavigationBar=_videoNavigationBar - In the implementation block
@property (nonatomic,retain) FBAdTimer * disappearanceTimer;                                         //@synthesize disappearanceTimer=_disappearanceTimer - In the implementation block
-(NSString *)callToAction;
-(void)setCallToAction:(NSString *)arg1 ;
-(void)setVideoNavigationBar:(UINavigationBar *)arg1 ;
-(void)callToActionHit:(id)arg1 withEvent:(id)arg2 ;
-(void)gestureRecognizerDidTap:(id)arg1 ;
-(void)generateDisappearanceTimer;
-(UINavigationBar *)videoNavigationBar;
-(FBAdTimer *)disappearanceTimer;
-(void)setDisappearanceTimer:(FBAdTimer *)arg1 ;
-(id)callToActionBlock;
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
-(SCD_Struct_SA23)currentTime;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(FBAdVideoView *)videoView;
-(void)setVideoView:(FBAdVideoView *)arg1 ;
-(void)dismiss:(id)arg1 ;
@end
