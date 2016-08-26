/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/MasterViewControllerBase.h>
#import <BubbleMania/StormApiDelegate.h>

@class ViewControllerBase, UIViewController, UIActivityIndicatorView, FullScreenMovieViewController, XibDialogView;

@interface MasterViewController : MasterViewControllerBase <StormApiDelegate> {

	BOOL canJump;
	BOOL firstCheckpointApplied;
	BOOL preventJumpOut;
	BOOL preventJumpInto;
	BOOL pendingOfflineLogin;
	ViewControllerBase* _currentViewController;
	UIViewController* videoViewController;
	UIActivityIndicatorView* waitView;
	FullScreenMovieViewController* movie;
	XibDialogView* connectionErrorDialogView;
	double loginTime;
	CGPoint titleWaitSpinnerPosition;

}

@property (nonatomic,retain) XibDialogView * connectionErrorDialogView; 
@property (assign,nonatomic) CGPoint titleWaitSpinnerPosition; 
@property (assign,nonatomic) BOOL canJump; 
@property (nonatomic,retain) UIViewController * videoViewController; 
@property (nonatomic,retain) UIActivityIndicatorView * waitView; 
@property (nonatomic,retain) FullScreenMovieViewController * movie; 
@property (assign,nonatomic) BOOL firstCheckpointApplied; 
@property (assign,nonatomic) double loginTime; 
@property (assign,nonatomic) BOOL preventJumpOut; 
@property (assign,nonatomic) BOOL preventJumpInto; 
@property (assign,nonatomic) BOOL pendingOfflineLogin; 
+(void)load;
-(void)didReceiveResult:(id)arg1 ;
-(void)willReceiveResult:(id)arg1 ;
-(void)jumpToPageNamed:(id)arg1 withAnimation:(int)arg2 ;
-(void)displayMandatoryNotices:(BOOL)arg1 ;
-(void)showConnectionError:(id)arg1 forceToShow:(BOOL)arg2 ;
-(void)showConnectionError:(id)arg1 ;
-(id)currentViewController;
-(void)playIntroCinematic:(id)arg1 withDelegate:(id)arg2 ;
-(void)removeTitleScreen;
-(void)setTitleWaitSpinnerPosition:(CGPoint)arg1 ;
-(void)showTitleScreenWithImageNamed:(id)arg1 fadeIn:(BOOL)arg2 ignoreHasLoaded:(BOOL)arg3 ;
-(void)playBackDidFinish;
-(void)showTitleScreen;
-(void)handleNoNoticeToShow;
-(void)onStartUpLoginFinishedNotification:(id)arg1 ;
-(void)displayOrientedTitleScreenWithImageNamed:(id)arg1 ;
-(void)showTitleScreenWithImageNamed:(id)arg1 fadeIn:(BOOL)arg2 ;
-(void)displayOrientedTitleScreenWithImageNamed:(id)arg1 ignoreHasLoaded:(BOOL)arg2 ;
-(BOOL)showMandatoryNotice:(id)arg1 withDeck:(id)arg2 ;
-(void)addMandatoryNoticeToDeck:(id)arg1 mandatoryNotice:(id)arg2 headerImage:(id)arg3 ;
-(BOOL)loadOpenGLTitleScreen;
-(UIActivityIndicatorView *)waitView;
-(void)setWaitView:(UIActivityIndicatorView *)arg1 ;
-(void)cleanUpTitleScreen;
-(void)completedLogin;
-(void)pushSubview:(id)arg1 ;
-(void)jumpToPageNamed:(id)arg1 withAnimation:(int)arg2 withParams:(id)arg3 ;
-(void)setCurrentViewController:(id)arg1 ;
-(void)finalizeAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(XibDialogView *)connectionErrorDialogView;
-(void)setConnectionErrorDialogView:(XibDialogView *)arg1 ;
-(void)completeLoginNotification;
-(void)playTapSound;
-(void)showTitleScreenPortrait;
-(BOOL)shouldProcessNextMandatoryNotice;
-(id)buildNoticeDialogDeck;
-(void)playIntroCinematic:(id)arg1 ;
-(void)displayMandatoryNotices;
-(void)setCanJump:(BOOL)arg1 ;
-(BOOL)firstCheckpointApplied;
-(void)setFirstCheckpointApplied:(BOOL)arg1 ;
-(CGPoint)titleWaitSpinnerPosition;
-(double)loginTime;
-(void)setLoginTime:(double)arg1 ;
-(BOOL)preventJumpOut;
-(void)setPreventJumpOut:(BOOL)arg1 ;
-(BOOL)preventJumpInto;
-(void)setPreventJumpInto:(BOOL)arg1 ;
-(BOOL)pendingOfflineLogin;
-(void)setPendingOfflineLogin:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)videoViewController;
-(BOOL)canJump;
-(void)setVideoViewController:(UIViewController *)arg1 ;
-(FullScreenMovieViewController *)movie;
-(void)setMovie:(FullScreenMovieViewController *)arg1 ;
@end
