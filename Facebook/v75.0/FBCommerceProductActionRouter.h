/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommerceProductVariantPickerViewControllerDelegate, FBCommerceProductSaveButtonPopoverViewControllerDelegate;
@class UIViewController, FBPopoverController, FBCommerceProductActionPopoverController;

@interface FBCommerceProductActionRouter : NSObject {

	id<FBCommerceProductVariantPickerViewControllerDelegate> _pickerDelegate;
	UIViewController*<FBCommerceProductSaveButtonPopoverViewControllerDelegate> _viewController;
	FBPopoverController* _savePopoverController;
	FBCommerceProductActionPopoverController* _popover;
	BOOL _popoverPickerExperiment;

}
-(void)presentViewControllerFor:(id)arg1 variantIndex:(long long)arg2 viewControllerType:(unsigned long long)arg3 inView:(id)arg4 fromView:(id)arg5 ;
-(void)presentPopoverFor:(id)arg1 inView:(id)arg2 fromView:(id)arg3 ;
-(id)initWithViewController:(id)arg1 pickerDelegate:(id)arg2 ;
-(void)gotoSaveDashboard;
@end
