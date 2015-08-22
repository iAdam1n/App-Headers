/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandler.h>
#import <Messenger/FBSSOLoginControllerDelegate.h>
#import <Messenger/FBAuthenticationTokenMethodHandling.h>

@protocol FBHttpRequestToken;
@class NSString, FBSSOLoginAvailabilityObserver, ACAccount, FBRequesterConfiguration;

@interface FBAuthenticationSSOHandler : FBAuthenticationMethodHandler <FBSSOLoginControllerDelegate, FBAuthenticationTokenMethodHandling> {

	id<FBHttpRequestToken> _token;
	BOOL _canAttemptAuthentication;
	NSString* _authToken;
	FBSSOLoginAvailabilityObserver* _ssoAvailabilityObserver;
	ACAccount* _account;
	FBRequesterConfiguration* _requesterConfiguration;

}

@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * userFullName; 
@property (assign,nonatomic) BOOL canAttemptAuthentication;                                         //@synthesize canAttemptAuthentication=_canAttemptAuthentication - In the implementation block
@property (nonatomic,retain) FBSSOLoginAvailabilityObserver * ssoAvailabilityObserver;              //@synthesize ssoAvailabilityObserver=_ssoAvailabilityObserver - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) FBRequesterConfiguration * requesterConfiguration;                     //@synthesize requesterConfiguration=_requesterConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authToken;                                           //@synthesize authToken=_authToken - In the implementation block
-(void)setRequesterConfiguration:(FBRequesterConfiguration *)arg1 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(FBRequesterConfiguration *)requesterConfiguration;
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)performAuthentication;
-(id)initWithRequesterConfiguration:(id)arg1 canAttemptAuthentication:(BOOL)arg2 ;
-(void)setSsoAvailabilityObserver:(FBSSOLoginAvailabilityObserver *)arg1 ;
-(void)credentialStoreDidUpdateWithAccount:(id)arg1 ;
-(void)submitSSOApproval;
-(BOOL)canAttemptAuthentication;
-(void)setCanAttemptAuthentication:(BOOL)arg1 ;
-(FBSSOLoginAvailabilityObserver *)ssoAvailabilityObserver;
-(NSString *)userName;
-(NSString *)userFullName;
-(void)cancel;
-(id)init;
-(void)invalidate;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)authToken;
@end
