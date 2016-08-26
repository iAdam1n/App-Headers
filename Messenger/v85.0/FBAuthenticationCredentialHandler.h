/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandler.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBAuthenticationCredentialRequestCreator.h>

@protocol FBNetworkDispatch, FBHttpRequestToken;
@class NSString;

@interface FBAuthenticationCredentialHandler : FBAuthenticationMethodHandler <FBNetworkerRequestDelegate, FBAuthenticationCredentialRequestCreator> {

	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBHttpRequestToken> _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)performSubmitUsername:(id)arg1 credential:(id)arg2 credentialType:(long long)arg3 extraAuthLoginFields:(id)arg4 ;
-(id)authenticationRequestCreateWithUsername:(id)arg1 credential:(id)arg2 credentialType:(long long)arg3 extraAuthLoginFields:(id)arg4 ;
-(void)cancel;
@end
