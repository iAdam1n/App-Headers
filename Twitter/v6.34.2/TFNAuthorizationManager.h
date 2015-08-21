/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNAuthorizedServiceRequestPolicy;
@class NSArray, NSMutableDictionary;

@interface TFNAuthorizationManager : NSObject {

	NSArray* _requestLogs;
	NSMutableDictionary* _requestCounts;
	id<TFNAuthorizedServiceRequestPolicy> _requestPolicy;
	NSMutableDictionary* _requestPolicies;
	/*^block*/id _openURLBlock;

}

@property (nonatomic,retain) id<TFNAuthorizedServiceRequestPolicy> requestPolicy; 
@property (nonatomic,copy) id openURLBlock;                                                    //@synthesize openURLBlock=_openURLBlock - In the implementation block
+(id)sharedAuthorizationManager;
+(BOOL)registerAuthorizedService:(id)arg1 ;
+(void)unregisterAuthorizedService:(id)arg1 ;
+(void)initialize;
-(void)promptAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryAuthorizationStatusForServiceType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentRegrantPermissionStepsForServiceType:(long long)arg1 ;
-(void)setOpenURLBlock:(id)arg1 ;
-(void)saveRequestLogs;
-(void)requestAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 usageDescription:(id)arg3 requestDelegate:(id)arg4 presentation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(long long)authorizationStatusForServiceType:(long long)arg1 ;
-(id)openURLBlock;
-(void)restoreRequestLogs;
-(void)_presentRegrantPermissionStepsForService:(id)arg1 ;
-(void)promptAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 requestDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 usageDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 usageDescription:(id)arg3 requestDelegate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)requestPolicyforServiceType:(long long)arg1 ;
-(long long)_requestCountForServiceType:(long long)arg1 ;
-(id)_requestLogs;
-(void)_setRequestLogs:(id)arg1 ;
-(void)_incrementCountForServiceType:(long long)arg1 ;
-(void)_setRequestCounts:(id)arg1 ;
-(id)_requestCounts;
-(void)setRequestPolicy:(id<TFNAuthorizedServiceRequestPolicy>)arg1 ;
-(id<TFNAuthorizedServiceRequestPolicy>)requestPolicy;
-(void)setRequestPolicy:(id)arg1 forServiceType:(long long)arg2 ;
-(id)defaultUsageDescriptionForServiceType:(long long)arg1 ;
-(void)requestAuthorizationForServiceType:(long long)arg1 source:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)serviceForServiceType:(long long)arg1 ;
@end

