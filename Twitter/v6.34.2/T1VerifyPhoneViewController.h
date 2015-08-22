/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1MandatoryPhoneSignUpViewController.h>
#import <Twitter/T1VerifyPINFormDelegate.h>

@protocol T1VerifyPhoneViewControllerDelegate;
@class NSString;

@interface T1VerifyPhoneViewController : T1MandatoryPhoneSignUpViewController <T1VerifyPINFormDelegate> {

	BOOL _forSignUp;
	NSString* _phoneNumber;
	id<T1VerifyPhoneViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * phoneNumber;                                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic,__weak) id<T1VerifyPhoneViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(void)verifyPINFormShouldSubmit:(id)arg1 ;
-(void)submitForm:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 SMSNotificationsEnabled:(BOOL)arg2 forSignUp:(BOOL)arg3 ;
-(void)_didNotReceiveSMS;
-(void)setDelegate:(id<T1VerifyPhoneViewControllerDelegate>)arg1 ;
-(id<T1VerifyPhoneViewControllerDelegate>)delegate;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
