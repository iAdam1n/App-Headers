/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface FBContainerViewController : UIViewController {

	long long _containerVisibilityState;
	BOOL _isPreviewing;

}

@property (nonatomic,readonly) BOOL isPreviewing;              //@synthesize isPreviewing=_isPreviewing - In the implementation block
-(void)viewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)viewController:(id)arg1 didAppearAnimated:(BOOL)arg2 ;
-(void)viewController:(id)arg1 willDisappearAnimated:(BOOL)arg2 ;
-(void)viewController:(id)arg1 didDisappearAnimated:(BOOL)arg2 ;
-(id)initWithPreviewing:(BOOL)arg1 ;
-(id)init;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)isPreviewing;
@end
