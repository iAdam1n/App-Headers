/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAccountRecoveryContactPointsFlowControlling.h>
#import <Facebook/FBAuthRecoveryControllingDelegate.h>
#import <Facebook/FBAuthRecoveryControlling.h>

@protocol FBAccountRecoveryUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthRecoveryControllingDelegate;
@class FBAccountRecoveryFlowData, FBAccountRecoveryCodeEntryFlowController, FBAccountRecoverySearchFlowController, NSString;

@interface FBAccountRecoveryContactPointsFlowController : NSObject <FBAccountRecoveryContactPointsFlowControlling, FBAuthRecoveryControllingDelegate, FBAuthRecoveryControlling> {

	FBAccountRecoveryFlowData* _flowData;
	id<FBAccountRecoveryUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBAccountRecoveryCodeEntryFlowController* _codeEntryFlowController;
	FBAccountRecoverySearchFlowController* _searchFlowController;
	id<FBAuthRecoveryControllingDelegate> _recoveryDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthRecoveryControllingDelegate> recoveryDelegate;              //@synthesize recoveryDelegate=_recoveryDelegate - In the implementation block
-(void)didContinueWithContactPointType:(unsigned long long)arg1 codeType:(long long)arg2 ;
-(void)didChooseNotMyAccount;
-(void)recoveryCompleted:(id)arg1 withUserID:(id)arg2 password:(id)arg3 ;
-(id)initWithFlowData:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)recover;
-(void)setRecoveryDelegate:(id<FBAuthRecoveryControllingDelegate>)arg1 ;
-(id<FBAuthRecoveryControllingDelegate>)recoveryDelegate;
@end

