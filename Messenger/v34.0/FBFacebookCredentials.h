/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBFacebookCredentials : NSObject {

	NSString* _userID;
	NSString* _machineID;
	NSString* _accessToken;

}

@property (nonatomic,copy) NSString * userID;                   //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * machineID;                //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
+(id)credentialsWithUserID:(id)arg1 machineID:(id)arg2 accessToken:(id)arg3 ;
+(id)credentialsWithUserID:(id)arg1 accessToken:(id)arg2 ;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)userID;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end
