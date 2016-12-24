/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSMutableDictionary, FBGraphRequest, NSString;

@interface FBAddCreditCardRequest : FBNetworkerRequest {

	NSMutableDictionary* _parameters;
	FBGraphRequest* _graphRequest;
	NSString* _userFBID;

}

@property (nonatomic,copy) NSString * userFBID;              //@synthesize userFBID=_userFBID - In the implementation block
-(NSString *)userFBID;
-(id)networkRequest;
-(id)initWithCreditCard:(id)arg1 callbackPerformer:(id)arg2 userFBID:(id)arg3 ;
-(void)setUserFBID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
