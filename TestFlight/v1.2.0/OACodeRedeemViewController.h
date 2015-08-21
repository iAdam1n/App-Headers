/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class OASSessionContext, UITextField, NSString;

@interface OACodeRedeemViewController : UIViewController <UITextFieldDelegate> {

	BOOL _redeeming;
	OASSessionContext* _sessionContext;
	UITextField* _hiddenTextField;
	UITextField* _codeTextField;

}

@property (nonatomic,retain) OASSessionContext * sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
@property (nonatomic,retain) UITextField * hiddenTextField;                   //@synthesize hiddenTextField=_hiddenTextField - In the implementation block
@property (nonatomic,retain) UITextField * codeTextField;                     //@synthesize codeTextField=_codeTextField - In the implementation block
@property (assign,nonatomic) BOOL redeeming;                                  //@synthesize redeeming=_redeeming - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OASSessionContext *)sessionContext;
-(void)setSessionContext:(OASSessionContext *)arg1 ;
-(id)initWithSessionContext:(id)arg1 ;
-(void)setHiddenTextField:(UITextField *)arg1 ;
-(UITextField *)hiddenTextField;
-(void)setCodeTextField:(UITextField *)arg1 ;
-(UITextField *)codeTextField;
-(void)resetRedeemButtonState;
-(void)keyboardShown;
-(BOOL)redeeming;
-(void)setRedeeming:(BOOL)arg1 ;
-(void)showAppDetailViewControllerForAppContext:(id)arg1 ;
-(void)showRedemptionAlertViewControllerWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)redeem;
@end

