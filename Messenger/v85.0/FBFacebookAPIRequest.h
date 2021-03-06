/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkRequest.h>
#import <Messenger/FBDuplicatedFacebookAPIProperties.h>

@class NSString, FBGraphRequest;

@interface FBFacebookAPIRequest : FBNetworkRequest <FBDuplicatedFacebookAPIProperties> {

	BOOL _useZeroRatedHost;
	NSString* _actorFBID;
	NSString* _accessTokenOverride_DEPRECATED;

}

@property (assign,nonatomic) BOOL useZeroRatedHost;                                //@synthesize useZeroRatedHost=_useZeroRatedHost - In the implementation block
@property (nonatomic,readonly) FBGraphRequest * requestForUDPPriming; 
@property (nonatomic,copy) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
+(void)configureWithAppSecret:(id)arg1 appVersion:(id)arg2 ;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(void)setUseZeroRatedHost:(BOOL)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(NSString *)actorFBID;
-(id)generateRequest;
-(FBGraphRequest *)requestForUDPPriming;
-(BOOL)useZeroRatedHost;
-(BOOL)useMultipartForm;
-(id)methodForSignature;
-(void)setRequestUUID:(id)arg1 ;
-(unsigned long long)compressionMethod;
-(id)init;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
@end

