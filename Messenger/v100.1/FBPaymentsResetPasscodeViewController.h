/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/FBPaymentsUpdateListener.h>

@protocol FBPaymentsConnectionStatusProviding, FBPaymentsLoadingIndicatorControlling, FBPaymentsResetPasscodeViewControllerDelegate;
@class FBPaymentsPINController, FBRichTextView, UITextField, UIView, NSString;

@interface FBPaymentsResetPasscodeViewController : UIViewController <UITextFieldDelegate, FBPaymentsUpdateListener> {

	FBPaymentsPINController* _paymentPinController;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusService;
	FBRichTextView* _titleTextView;
	UITextField* _passwordTextField;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	UIView* _passwordBaselineView;
	id<FBPaymentsResetPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsResetPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)initWithPaymentPinController:(id)arg1 connectionStatusService:(id)arg2 ;
-(void)_resetPinWithPassword:(id)arg1 ;
-(void)_handleResetPinCallback:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleFailToResetPinWithError:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsResetPasscodeViewControllerDelegate>)arg1 ;
-(id<FBPaymentsResetPasscodeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end
