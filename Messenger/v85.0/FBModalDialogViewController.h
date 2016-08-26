/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBModalDialogView, FBPopoverController;

@interface FBModalDialogViewController : UIViewController {

	FBModalDialogView* _modalDialogView;
	FBPopoverController* _fb_popoverController;

}

@property (nonatomic,readonly) FBModalDialogView * modalDialogView;                            //@synthesize modalDialogView=_modalDialogView - In the implementation block
@property (nonatomic,__weak,readonly) FBPopoverController * fb_popoverController;              //@synthesize fb_popoverController=_fb_popoverController - In the implementation block
-(FBPopoverController *)fb_popoverController;
-(void)_registerObservers;
-(id)initWithView:(id)arg1 popoverController:(id)arg2 ;
-(FBModalDialogView *)modalDialogView;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
@end
