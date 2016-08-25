/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString, NSArray;

@interface ECAPINotificationsRequest : ECAPIRequestBase {

	NSString* _pushServiceCode;
	long long _requestType;
	NSString* _deviceID;
	NSString* _uuid;
	NSString* _username;
	NSArray* _notifications;
	NSString* _environment;

}

@property (assign,nonatomic) long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                   //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSArray * notifications;               //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,retain) NSString * environment;                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * pushServiceCode;              //@synthesize pushServiceCode=_pushServiceCode - In the implementation block
-(void)configureURLRequestBody:(id)arg1 ;
-(id)httpBody;
-(void)setPushServiceCode:(NSString *)arg1 ;
-(NSString *)pushServiceCode;
-(id)initWithType:(long long)arg1 notifications:(id)arg2 deviceID:(id)arg3 uuid:(id)arg4 username:(id)arg5 pushServiceCode:(id)arg6 environment:(id)arg7 ;
-(id)init;
-(NSString *)environment;
-(NSString *)uuid;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSArray *)notifications;
-(void)setNotifications:(NSArray *)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(long long)requestType;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

