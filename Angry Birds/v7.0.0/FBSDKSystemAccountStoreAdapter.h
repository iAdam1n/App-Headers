/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	BOOL _forceBlockingRenew;

}

@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
@property (assign,nonatomic) BOOL forceBlockingRenew;                             //@synthesize forceBlockingRenew=_forceBlockingRenew - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType; 
+(id)sharedInstance;
+(void)initialize;
+(void)setSharedInstance:(id)arg1 ;
-(BOOL)forceBlockingRenew;
-(void)setForceBlockingRenew:(BOOL)arg1 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(id)accessTokenString;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)init;
-(ACAccountStore *)accountStore;
-(ACAccountType *)accountType;
@end
