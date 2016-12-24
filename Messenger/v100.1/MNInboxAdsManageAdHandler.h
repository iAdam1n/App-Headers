/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation, FBIntentHandler, MNInboxAdsManageAdHandlerDelegate;
@interface MNInboxAdsManageAdHandler : NSObject {

	id<MNModalPresentation> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<MNInboxAdsManageAdHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxAdsManageAdHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_adPreferencesActionWithAdPreferencesLink:(id)arg1 adProperties:(id)arg2 ;
-(void)_handleAdPreferencesActionWithAdPreferencesLink:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 intentHandler:(id)arg2 ;
-(void)presentManageAdControllerForAdViewModel:(id)arg1 ;
-(id)_hideAdActionWithAdViewModel:(id)arg1 ;
-(id)_adFeedbackActionWithAdViewModel:(id)arg1 ;
-(void)_handleHideAdActionWithAdViewModel:(id)arg1 ;
-(void)_handleAdFeedbackActionWithAdViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNInboxAdsManageAdHandlerDelegate>)arg1 ;
-(id<MNInboxAdsManageAdHandlerDelegate>)delegate;
@end
