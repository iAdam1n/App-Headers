/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpStepCompletion.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNModalPresentation;
@class MNEnterPhoneViewController, MNUserSetUpStatePersister, NSString;

@interface MNPhoneVerificationCoordinator : NSObject <MNUserSetUpStepCompletion, FBClassProvidable> {

	id<FBProvider> _enterPhoneViewControllerProvider;
	id<MNModalPresentation> _modalPresenter;
	/*^block*/id _completionBlock;
	MNEnterPhoneViewController* _enterPhoneViewController;
	MNUserSetUpStatePersister* _userSetUpStatePersister;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithEnterPhoneViewControllerProvider:(id)arg1 modalPresenter:(id)arg2 userSetUpStatePersister:(id)arg3 ;
-(void)_presentPhoneVerificationForNumber:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_completePresentationForViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_invokeCompletionBlock;
-(void)presentPhoneVerificationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)presentPhoneVerificationForNumber:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)userSetUpStepViewControllerDidCompleteStep:(id)arg1 ;
-(void)userSetUpStepViewControllerDidFailStep:(id)arg1 ;
@end
