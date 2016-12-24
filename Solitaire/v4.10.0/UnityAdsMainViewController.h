/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SolitaireFree/UnityAdsViewStateDelegate.h>

@protocol UnityAdsMainViewControllerDelegate;
@class UnityAdsViewState, NSMutableArray, NSString;

@interface UnityAdsMainViewController : UIViewController <UnityAdsViewStateDelegate> {

	BOOL _isClosing;
	BOOL _isOpen;
	UnityAdsViewState* _currentViewState;
	UnityAdsViewState* _previousViewState;
	NSMutableArray* _viewStateHandlers;
	id<UnityAdsMainViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UnityAdsMainViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isClosing;                                                      //@synthesize isClosing=_isClosing - In the implementation block
@property (assign,nonatomic) BOOL isOpen;                                                         //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) UnityAdsViewState * currentViewState;                                //@synthesize currentViewState=_currentViewState - In the implementation block
@property (nonatomic,retain) UnityAdsViewState * previousViewState;                               //@synthesize previousViewState=_previousViewState - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewStateHandlers;                                  //@synthesize viewStateHandlers=_viewStateHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setCurrentViewState:(UnityAdsViewState *)arg1 ;
-(UnityAdsViewState *)currentViewState;
-(void)notificationHandler:(id)arg1 ;
-(BOOL)mainControllerVisible;
-(BOOL)openAds:(BOOL)arg1 inState:(int)arg2 withOptions:(id)arg3 ;
-(BOOL)closeAds:(BOOL)arg1 withAnimations:(BOOL)arg2 withOptions:(id)arg3 ;
-(id)getCurrentViewState;
-(BOOL)changeState:(int)arg1 withOptions:(id)arg2 ;
-(void)applyOptionsToCurrentState:(id)arg1 ;
-(NSMutableArray *)viewStateHandlers;
-(void)setViewStateHandlers:(NSMutableArray *)arg1 ;
-(void)setPreviousViewState:(UnityAdsViewState *)arg1 ;
-(id)selectState:(int)arg1 ;
-(BOOL)hasState:(int)arg1 ;
-(UnityAdsViewState *)previousViewState;
-(void)_dismissMainViewController:(BOOL)arg1 withAnimations:(BOOL)arg2 ;
-(void)stateNotification:(int)arg1 ;
-(void)applyViewStateHandler:(id)arg1 ;
-(id)getPreviousViewState;
-(void)setDelegate:(id<UnityAdsMainViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UnityAdsMainViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isOpen;
-(void)setIsOpen:(BOOL)arg1 ;
-(BOOL)isClosing;
-(void)setIsClosing:(BOOL)arg1 ;
@end
