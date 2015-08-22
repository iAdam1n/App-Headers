/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSDate;

@interface IGAlertHUD : UIView {

	UILabel* _textLabel;
	UIActivityIndicatorView* _spinner;
	NSDate* _suppressAlertsUntil;

}
+(id)sharedHUD;
-(void)onAppResumed:(id)arg1 ;
-(void)showWithProgressIndicatorInView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canDisplay;
-(void)sizeToFitView:(id)arg1 ;
-(void)showInView:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideAfterDelay:(double)arg1 animated:(BOOL)arg2 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)doShowWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3 animated:(BOOL)arg4 force:(BOOL)arg5 ;
-(void)hideAfterShowingText:(id)arg1 animated:(BOOL)arg2 ;
-(void)showWithProgressIndicatorInView:(id)arg1 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3 ;
-(void)hideAfterShowingText:(id)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)hide;
-(void)dealloc;
-(id)init;
@end
