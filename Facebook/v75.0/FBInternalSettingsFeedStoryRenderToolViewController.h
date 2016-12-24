/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFeedZombieToMemModelConverterDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/CKComponentProvider.h>

@class FBFeedToolbox, FBFeedZombieToMemModelConverter, UIScrollView, UILabel, UIButton, UIActivityIndicatorView, UITextView, CKComponentHostingView, NSString;

@interface FBInternalSettingsFeedStoryRenderToolViewController : UIViewController <FBFeedZombieToMemModelConverterDelegate, UITextViewDelegate, UIAlertViewDelegate, CKComponentProvider> {

	FBFeedToolbox* _toolbox;
	FBFeedZombieToMemModelConverter* _converter;
	UIScrollView* _contentScrollView;
	UILabel* _messageLabel;
	UIButton* _generateButton;
	UIActivityIndicatorView* _activityIndicator;
	UITextView* _inputZombieTextView;
	CKComponentHostingView* _feedComponentView;
	NSString* _oldSandbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showAuxiliaryViewController;
-(void)didTapRender;
-(void)restoreSandbox;
-(void)requestZombie;
-(void)updateStateTo:(unsigned long long)arg1 ;
-(void)configureSandbox;
-(void)zombieToMemModelConverter:(id)arg1 didGenerateModel:(id)arg2 fromZombie:(id)arg3 withErrorMessage:(id)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end
