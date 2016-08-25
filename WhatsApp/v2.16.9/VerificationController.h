/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAModalNavigationController.h>
#import <WhatsApp/PhoneInputViewControllerDelegate.h>
#import <WhatsApp/PassInputViewControllerDelegate.h>
#import <WhatsApp/ProfileViewControllerDelegate.h>
#import <WhatsApp/RestoreBackupViewControllerDelegate.h>
#import <WhatsApp/ChangeConfirmationControllerDelegate.h>
#import <WhatsApp/ChangeNumberInputControllerDelegate.h>
#import <WhatsApp/WANetworkChangedControllerDelegate.h>
#import <WhatsApp/WAWelcomeViewControllerDelegate.h>

@protocol VerificationControllerDelegate;
@class NSString;

@interface VerificationController : WAModalNavigationController <PhoneInputViewControllerDelegate, PassInputViewControllerDelegate, ProfileViewControllerDelegate, RestoreBackupViewControllerDelegate, ChangeConfirmationControllerDelegate, ChangeNumberInputControllerDelegate, WANetworkChangedControllerDelegate, WAWelcomeViewControllerDelegate> {

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
+(void)updateDefaultsAndKeychain:(id)arg1 ;
+(id)alertTextForFailedRegRequest;
+(BOOL)profilePhotoValid;
+(BOOL)pushNameValid;
+(id)alertTextForFailedRegRequestWifi;
+(id)alertTextForFailedRegRequestOther;
+(void)cancelPhoneNumberChange;
-(void)setVerificationDelegate:(id<VerificationControllerDelegate>)arg1 ;
-(void)restoreBackupViewControllerDidFinish:(id)arg1 ;
-(void)phoneInputViewControllerDidFinish:(id)arg1 ;
-(void)phoneInputViewControllerDidEnterPhone:(id)arg1 ;
-(void)passInputViewControllerDidFinish:(id)arg1 ;
-(void)passInputViewControllerDidCancel:(id)arg1 ;
-(id)restoreBackupViewController;
-(id<VerificationControllerDelegate>)verificationDelegate;
-(id)passInputController;
-(void)verifiedAfterInstallGoToNextScreen;
-(void)finishVerification;
-(void)cancelVerification;
-(void)goToProfileScreen;
-(void)profileViewControllerDidFinish:(id)arg1 ;
-(void)changeConfirmationControllerDidFinish:(id)arg1 ;
-(void)changeConfirmationControllerDidCancel:(id)arg1 ;
-(void)changeNumberInputControllerDidFinish:(id)arg1 ;
-(void)changeNumberInputControllerDidEnterPhone:(id)arg1 ;
-(void)changeNumberInputControllerDidCancel:(id)arg1 ;
-(void)networkChangedController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(void)welcomeViewControllerDidAccept:(id)arg1 ;
-(id)init;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)mode;
-(id)initWithMode:(unsigned long long)arg1 ;
-(id)profileViewController;
@end

