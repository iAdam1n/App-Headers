/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAuthenticatingEnterPasscodeViewDelegate.h>

@class FBAuthenticationEnterPasscodeView, FBDeviceBasedAccount, NSString;

@interface FBDBLPasswordSetPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate> {

	FBAuthenticationEnterPasscodeView* _enterPasscodeView;
	FBDeviceBasedAccount* _deviceBasedAccount;
	unsigned long long _flowType;
	NSString* _password;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passcodeEntered:(id)arg1 attempt:(long long)arg2 ;
-(void)secondaryButtonTapped;
-(id)_getInstruction;
-(id)_getTitle;
-(void)_showUnknownErrorBar;
-(id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned long long)arg2 password:(id)arg3 ;
-(void)_handleSetPasscodeError:(id)arg1 ;
-(void)_handleSetPasscodeSuccess:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
@end
