/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNUserSetUpStatePersister, NSString;

@interface MNUserSetUpFlowViewControllerProvider : NSObject <FBClassProvidable> {

	id<FBProvider> _enterPhoneVCProvider;
	id<FBProvider> _requirePushVCProvider;
	id<FBProvider> _requestCIVCProvider;
	id<FBProvider> _welcomeVCProvider;
	id<FBProvider> _paymentsVCProvider;
	id<FBProvider> _inviteFriendsVCProvider;
	id<FBProvider> _userSetUpPersisterProvider;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	MNUserSetUpStatePersister* _userSetUpPersister;

}

@property (nonatomic,readonly) BOOL shouldPresentUserSetUpFlow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldPresentUserSetUpFlow;
-(id)providersForSetUpFlow;
-(id)initWithEnterPhoneVCProvider:(id)arg1 requirePushVCProvider:(id)arg2 requestCIVCProvider:(id)arg3 welcomeVCProvider:(id)arg4 paymentsVCProvider:(id)arg5 inviteFriendsVCProvider:(id)arg6 userSetUpStatePersisterProvider:(id)arg7 userSetUpFlowConfiguratorProvider:(id)arg8 ;
@end
