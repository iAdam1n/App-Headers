/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class ADCAppDelegateOverride;

@interface ADCRootViewController : UIViewController {

	ADCAppDelegateOverride* _appDelegateOverride;
	long long _initialOrientation;
	BOOL _inControl;
	BOOL _dismissing;

}
-(id)getVisibleViewControllerChild:(id)arg1 ;
-(BOOL)takeControl;
-(void)releaseControl;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
@end

