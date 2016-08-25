/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AngryBirdsClassic/GADIntermitting.h>

@protocol GADOverlayPresenting;
@class GADIntermission, GADSlot, NSString;

@interface GADViewController : UIViewController <GADIntermitting> {

	id _appForegroundObserver;
	BOOL _viewDidAppear;
	GADIntermission* _intermission;
	unsigned long long _supportedInterfaceOrientations;
	GADSlot* _slot;
	GADViewController* _retainCycle;
	id<GADOverlayPresenting> _presenter;
	/*^block*/id _dismissalCompletion;

}

@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                          //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) GADViewController * retainCycle;                                //@synthesize retainCycle=_retainCycle - In the implementation block
@property (nonatomic,retain) id<GADOverlayPresenting> presenter;                             //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                           //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                             //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GADIntermission * intermission;                               //@synthesize intermission=_intermission - In the implementation block
-(void)relinquishScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)recordDismissal;
-(void)addToCurrentIntermission;
-(void)setRetainCycle:(GADViewController *)arg1 ;
-(GADViewController *)retainCycle;
-(id)dismissalCompletion;
-(GADIntermission *)intermission;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldDismissOnApplicationEnteringForeground;
-(void)setDismissalCompletion:(id)arg1 ;
-(void)finishAppearing;
-(void)finishDismissal;
-(void)viewChangedToOrientation:(long long)arg1 ;
-(GADSlot *)slot;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)commonInit;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(BOOL)viewDidAppear;
-(void)setSlot:(GADSlot *)arg1 ;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(id<GADOverlayPresenting>)presenter;
-(void)setPresenter:(id<GADOverlayPresenting>)arg1 ;
@end

