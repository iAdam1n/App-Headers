/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSTwitterModel.h>

@class NSString;

@interface TFNTwitterDeviceRegistration : NSObject <TFSTwitterModel> {

	long long _userID;
	long long _deviceID;
	NSString* _phoneNumber;
	unsigned long long _state;

}

@property (assign,nonatomic) long long userID;                      //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long deviceID;                    //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceRegisterWithJSONData:(id)arg1 error:(id*)arg2 ;
-(void)setUserID:(long long)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)phoneNumber;
-(long long)deviceID;
-(void)setDeviceID:(long long)arg1 ;
-(long long)userID;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
