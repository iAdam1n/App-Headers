/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableArray, NSMapTable, UIViewController, NSString;

@interface FBAlertViewCoordinator : NSObject <UIAlertViewDelegate> {

	NSMutableArray* _activeAlertViews;
	NSMapTable* _alertViewsByToken;
	NSMapTable* _completionsByAlertView;
	UIViewController* _hackPresentingViewControllerForAlertControllerCompatibility;

}

@property (nonatomic,retain) UIViewController * hackPresentingViewControllerForAlertControllerCompatibility;              //@synthesize hackPresentingViewControllerForAlertControllerCompatibility=_hackPresentingViewControllerForAlertControllerCompatibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAlertViewProviderBlock:(/*^block*/id)arg1 ;
+(id)sharedCoordinator;
-(id)_createAlertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(unsigned long long)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitlesCollection:(id)arg6 ;
-(void)_dispatchAndRemoveCompletionForAlertView:(id)arg1 buttonIndex:(long long)arg2 isTapped:(BOOL)arg3 ;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitlesCollection:(id)arg5 ;
-(unsigned long long)showAlertViewWithTitle:(id)arg1 message:(id)arg2 configuration:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
-(void)cancelAndDismissAlertViewWithToken:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAlertViewShown;
-(UIViewController *)hackPresentingViewControllerForAlertControllerCompatibility;
-(void)setHackPresentingViewControllerForAlertControllerCompatibility:(UIViewController *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
@end
