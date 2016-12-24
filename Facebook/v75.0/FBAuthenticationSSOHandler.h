/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthenticationMethodHandler.h>
#import <Facebook/FBSSOLoginControllerDelegate.h>
#import <Facebook/FBAuthenticationTokenMethodHandling.h>

@protocol FBHttpRequestToken, FBNetworkDispatch;
@class NSString, FBSSOLoginAvailabilityObserver, ACAccount;

@interface FBAuthenticationSSOHandler : FBAuthenticationMethodHandler <FBSSOLoginControllerDelegate, FBAuthenticationTokenMethodHandling> {

	BOOL _canAttemptAuthentication;
	id<FBHttpRequestToken> _token;
	NSString* _authToken;
	FBSSOLoginAvailabilityObserver* _ssoAvailabilityObserver;
	ACAccount* _account;
	id<FBNetworkDispatch> _requesterConfiguration;

}

@property (nonatomic,retain) FBSSOLoginAvailabilityObserver * ssoAvailabilityObserver;              //@synthesize ssoAvailabilityObserver=_ssoAvailabilityObserver - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<FBNetworkDispatch> requesterConfiguration;                          //@synthesize requesterConfiguration=_requesterConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * userFullName; 
@property (nonatomic,readonly) BOOL canAttemptAuthentication;                                       //@synthesize canAttemptAuthentication=_canAttemptAuthentication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authToken;                                           //@synthesize authToken=_authToken - In the implementation block
-(void)setRequesterConfiguration:(id<FBNetworkDispatch>)arg1 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id<FBNetworkDispatch>)requesterConfiguration;
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(id)initWithRequesterConfiguration:(id)arg1 canAttemptAuthentication:(BOOL)arg2 ;
-(void)performAuthentication;
-(BOOL)canAttemptAuthentication;
-(void)submitSSOApproval;
-(void)setSsoAvailabilityObserver:(FBSSOLoginAvailabilityObserver *)arg1 ;
-(void)credentialStoreDidUpdateWithAccount:(id)arg1 ;
-(FBSSOLoginAvailabilityObserver *)ssoAvailabilityObserver;
-(NSString *)userName;
-(NSString *)userFullName;
-(id)init;
-(void)cancel;
-(void)invalidate;
-(NSString *)authToken;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end
