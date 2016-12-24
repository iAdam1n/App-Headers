/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAModalNavigationController.h>
#import <WhatsApp/PhoneInputViewControllerDelegate.h>
#import <WhatsApp/PassInputViewControllerDelegate.h>
#import <WhatsApp/ProfileViewControllerDelegate.h>
#import <WhatsApp/RestoreBackupViewControllerDelegate.h>
#import <WhatsApp/ChangeConfirmationControllerDelegate.h>
#import <WhatsApp/ChangeNumberInputControllerDelegate.h>
#import <WhatsApp/WATwoFactorRegistrationViewControllerDelegate.h>
#import <WhatsApp/WANetworkChangedControllerDelegate.h>
#import <WhatsApp/WAWelcomeViewControllerDelegate.h>

@protocol VerificationControllerDelegate;
@class NSString;

@interface VerificationController : WAModalNavigationController <PhoneInputViewControllerDelegate, PassInputViewControllerDelegate, ProfileViewControllerDelegate, RestoreBackupViewControllerDelegate, ChangeConfirmationControllerDelegate, ChangeNumberInputControllerDelegate, WATwoFactorRegistrationViewControllerDelegate, WANetworkChangedControllerDelegate, WAWelcomeViewControllerDelegate> {

	id<VerificationControllerDelegate> _verificationDelegate;
	unsigned long long _mode;

}

@property (assign,nonatomic,__weak) id<VerificationControllerDelegate> verificationDelegate;              //@synthesize verificationDelegate=_verificationDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)validateProfileAndSettingsOnUpgrade;
+(BOOL)userProfileValid;
+(id)alertTextForFailedRegRequest;
+(void)updateDefaultsAndKeychain:(id)arg1 ;
+(BOOL)profilePhotoValid;
+(BOOL)pushNameValid;
+(id)alertTextForFailedRegRequestWifi;
+(id)alertTextForFailedRegRequestOther;
+(void)saveNormalizedNumber:(id)arg1 countryCode:(id)arg2 accountType:(id)arg3 ;
+(void)cancelPhoneNumberChange;
+(void)savePhoneNumberChangeWithNormalizedNumber:(id)arg1 countryCode:(id)arg2 savePreviousJid:(BOOL)arg3 ;
-(void)setVerificationDelegate:(id<VerificationControllerDelegate>)arg1 ;
-(void)restoreBackupViewControllerDidFinish:(id)arg1 ;
-(void)phoneInputViewControllerDidFinish:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 accountType:(id)arg4 ;
-(void)phoneInputViewControllerDidFail2FA:(id)arg1 countryCode:(id)arg2 phoneNumber:(id)arg3 response:(id)arg4 ;
-(void)phoneInputViewControllerDidEnterPhone:(id)arg1 ;
-(void)passInputViewControllerDidFinish:(id)arg1 ;
-(void)passInputViewControllerDidFail2FA:(id)arg1 response:(id)arg2 ;
-(void)passInputViewControllerDidCancel:(id)arg1 ;
-(id)restoreBackupViewController;
-(id<VerificationControllerDelegate>)verificationDelegate;
-(id)passInputController;
-(void)verifiedAfterInstallGoToNextScreen;
-(void)finishVerification;
-(void)presentTwoFactorCodeViewControllerWithCountryCode:(id)arg1 phoneNumber:(id)arg2 response:(id)arg3 animated:(BOOL)arg4 ;
-(void)cancelVerification;
-(void)goToProfileScreen;
-(void)profileViewControllerDidFinish:(id)arg1 ;
-(void)changeConfirmationControllerDidFinish:(id)arg1 ;
-(void)changeConfirmationControllerDidCancel:(id)arg1 ;
-(void)changeNumberInputControllerDidFinish:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 ;
-(void)changeNumberInputControllerDidFail2FA:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 response:(id)arg4 ;
-(void)changeNumberInputControllerDidEnterPhone:(id)arg1 ;
-(void)changeNumberInputControllerDidCancel:(id)arg1 ;
-(void)registrationViewControllerVerificationDidSucceed:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 accountType:(id)arg4 ;
-(void)registrationViewControllerVerificationDidFail:(id)arg1 ;
-(void)networkChangedController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(void)welcomeViewControllerDidAccept:(id)arg1 ;
-(id)init;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)mode;
-(id)initWithMode:(unsigned long long)arg1 ;
-(id)profileViewController;
@end
