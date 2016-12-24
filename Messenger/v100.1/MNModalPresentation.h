/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation
@required
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)dismissAllViewControllersAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id)presentingNavigationControllerWithRootVC:(id)arg1;
-(void)presentViewControllerInActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)presentViewControllerInActionSheet:(id)arg1 maxHeightRatio:(double)arg2 animated:(BOOL)arg3 keyboardAware:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)presentViewControllerInFullHeightActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dismissActionSheetViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id)presentedActionSheetContentViewController;
-(id)presentedActionSheetViewController;
-(id)presentedViewController;
-(BOOL)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end
