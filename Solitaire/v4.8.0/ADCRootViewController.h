/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class ADCAppDelegateOverride;

@interface ADCRootViewController : UIViewController {

	ADCAppDelegateOverride* _appDelegateOverride;
	long long _initialOrientation;
	BOOL _inControl;
	BOOL _dismissing;
	BOOL _rotationUnlocked;

}
-(id)getVisibleViewControllerChild:(id)arg1 ;
-(BOOL)takeControlWithRotationLocked:(BOOL)arg1 ;
-(void)releaseControlWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
@end

