/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNConfirmPhoneViewDelegate.h>
#import <Messenger/MNPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNPhoneVerificationConfirmationSenderDelegate.h>

@protocol MNConfirmPhoneViewControllerDelegate, FBPhoneNumber;
@class MNConfirmPhoneView, MNPhoneVerificationConfirmationSender, MNPhoneVerificationRequestSender, MNUserSetUpStatePersister, FBUserSession, NSString;

@interface MNConfirmPhoneViewController : UIViewController <MNConfirmPhoneViewDelegate, MNPhoneVerificationRequestSenderDelegate, MNPhoneVerificationConfirmationSenderDelegate> {

	BOOL _skippable;
	id<MNConfirmPhoneViewControllerDelegate> _delegate;
	MNConfirmPhoneView* _confirmPhoneView;
	MNPhoneVerificationConfirmationSender* _confirmationCodeSender;
	MNPhoneVerificationRequestSender* _confirmationCodeRequest;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	id<FBPhoneNumber> _phoneNumber;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<MNConfirmPhoneViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skippable;                                                              //@synthesize skippable=_skippable - In the implementation block
@property (nonatomic,retain) MNConfirmPhoneView * confirmPhoneView;                                       //@synthesize confirmPhoneView=_confirmPhoneView - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationConfirmationSender * confirmationCodeSender;              //@synthesize confirmationCodeSender=_confirmationCodeSender - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationRequestSender * confirmationCodeRequest;                  //@synthesize confirmationCodeRequest=_confirmationCodeRequest - In the implementation block
@property (nonatomic,retain) MNUserSetUpStatePersister * userSetUpStatePersister;                         //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,retain) id<FBPhoneNumber> phoneNumber;                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showAlertViewForError:(id)arg1 ;
+(void)showSMSSentAlertWithNumber:(id)arg1 ;
-(id)analyticsModule;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(void)setUserSetUpStatePersister:(MNUserSetUpStatePersister *)arg1 ;
-(void)changePhoneNumberButtonTapped;
-(void)continueButtonTapped;
-(void)skipThisStepButtonTapped;
-(void)resendCodeButtonTapped;
-(void)_logAnalyticsIfInvalidPhoneNumber:(id)arg1 ;
-(void)_sendConfirmPhoneRequest;
-(id)initWithSession:(id)arg1 userSetUpStatePersister:(id)arg2 andPhoneNumber:(id)arg3 ;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)skippable;
-(MNConfirmPhoneView *)confirmPhoneView;
-(void)setConfirmPhoneView:(MNConfirmPhoneView *)arg1 ;
-(MNPhoneVerificationConfirmationSender *)confirmationCodeSender;
-(void)setConfirmationCodeSender:(MNPhoneVerificationConfirmationSender *)arg1 ;
-(MNPhoneVerificationRequestSender *)confirmationCodeRequest;
-(void)setConfirmationCodeRequest:(MNPhoneVerificationRequestSender *)arg1 ;
-(void)phoneVerificationConfirmationSenderDidConfirm:(id)arg1 ;
-(void)phoneVerificationConfirmationSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)phoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)phoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNConfirmPhoneViewControllerDelegate>)arg1 ;
-(id<MNConfirmPhoneViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<FBPhoneNumber>)phoneNumber;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setPhoneNumber:(id<FBPhoneNumber>)arg1 ;
@end

