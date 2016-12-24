/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBDBLChangeNonceRequest : FBNetworkerRequest {

	NSString* _accountID;
	NSString* _nonceValue;
	NSString* _providedPin;
	NSString* _oldPin;

}

@property (nonatomic,copy) NSString * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * nonceValue;               //@synthesize nonceValue=_nonceValue - In the implementation block
@property (nonatomic,copy) NSString * providedPin;              //@synthesize providedPin=_providedPin - In the implementation block
@property (nonatomic,copy) NSString * oldPin;                   //@synthesize oldPin=_oldPin - In the implementation block
+(double)networkTimeoutInSec;
-(id)networkRequest;
-(BOOL)allowRetry;
-(id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 providedPin:(id)arg3 oldPin:(id)arg4 callbackPerformer:(id)arg5 ;
-(void)setOldPin:(NSString *)arg1 ;
-(NSString *)oldPin;
-(void)setNonceValue:(NSString *)arg1 ;
-(NSString *)nonceValue;
-(void)setProvidedPin:(NSString *)arg1 ;
-(NSString *)providedPin;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)accountID;
@end
