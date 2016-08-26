/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>
#import <Skype/SKPPhoneNumberEnterTokenViewDelegate.h>
#import <Skype/SKPKeyboardObserverDelegate.h>

@class SKPPNVProfilePhoneNumber, SKPPhoneNumberEnterTokenView, SKPKeyboardObserver, NSString;

@interface SKPEnterVerificationTokenViewController : SKPViewController <SKPPhoneNumberEnterTokenViewDelegate, SKPKeyboardObserverDelegate> {

	/*^block*/id _registrationBlock;
	SKPPNVProfilePhoneNumber* _phoneNumber;
	SKPPhoneNumberEnterTokenView* _enterTokenView;
	SKPKeyboardObserver* _keyboardObserver;

}

@property (nonatomic,retain) SKPPNVProfilePhoneNumber * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) SKPPhoneNumberEnterTokenView * enterTokenView;              //@synthesize enterTokenView=_enterTokenView - In the implementation block
@property (nonatomic,retain) SKPKeyboardObserver * keyboardObserver;                     //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,copy) id registrationBlock;                                         //@synthesize registrationBlock=_registrationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupView;
-(SKPPhoneNumberEnterTokenView *)enterTokenView;
-(void)observeKeyboardNotifications;
-(void)unobserveKeyboardNotifications;
-(void)setEnterTokenView:(SKPPhoneNumberEnterTokenView *)arg1 ;
-(void)dismissViewControllerWithSuccessfulRegisteredPhoneNumber:(BOOL)arg1 ;
-(void)handleVerificationError:(id)arg1 ;
-(void)temporaryDisableResendActions;
-(void)showAlertView:(id)arg1 ;
-(void)phoneNumberEnterTokenViewDidPressBackButton;
-(void)phoneNumberEnterTokenViewDidEnterToken:(id)arg1 ;
-(void)phoneNumberEnterTokenViewDidPressResendToken;
-(void)phoneNumberEnterTokenViewDidPressCallMe;
-(id)registrationBlock;
-(void)setRegistrationBlock:(id)arg1 ;
-(void)setKeyboardObserver:(SKPKeyboardObserver *)arg1 ;
-(SKPKeyboardObserver *)keyboardObserver;
-(void)keyboardObserverWillHide:(id)arg1 curve:(long long)arg2 duration:(double)arg3 ;
-(void)keyboardObserverWillShow:(id)arg1 curve:(long long)arg2 duration:(double)arg3 ;
-(void)keyboardObserverHeightWillChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SKPPNVProfilePhoneNumber *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)setPhoneNumber:(SKPPNVProfilePhoneNumber *)arg1 ;
@end
