/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthCheckpointControlling.h>

@protocol FBNetworkDispatch, FBAuthCheckpointFlowUIProviding, FBAuthCheckpointControllingDelegate;
@interface FBAuthCheckpointLegacyController : NSObject <FBAuthCheckpointControlling> {

	id<FBNetworkDispatch> _requesterConfiguration;
	Class _navigationBarClass;
	id<FBAuthCheckpointFlowUIProviding> _uiProvider;
	id<FBAuthCheckpointControllingDelegate> _authDelegate;

}

@property (assign,nonatomic,__weak) id<FBAuthCheckpointControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthCheckpointControllingDelegate>)arg1 ;
-(id<FBAuthCheckpointControllingDelegate>)authDelegate;
-(id)initWithRequesterConfiguration:(id)arg1 navigationBarClass:(Class)arg2 uiProvider:(id)arg3 ;
-(void)presentCheckpointPresenter:(id)arg1 withCheckpointError:(id)arg2 ;
@end
