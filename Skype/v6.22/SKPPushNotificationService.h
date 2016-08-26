/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPTreeDescribing.h>

@class NSString, NSDate;

@interface SKPPushNotificationService : NSObject <SKPTreeDescribing> {

	unsigned long long _type;
	NSString* _token;
	unsigned long long _timeToLive;
	NSDate* _createdTime;

}

@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * token;                           //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long timeToLive;              //@synthesize timeToLive=_timeToLive - In the implementation block
@property (nonatomic,retain) NSDate * createdTime;                       //@synthesize createdTime=_createdTime - In the implementation block
@property (nonatomic,readonly) int ALEType; 
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSString * tokenDescription; 
@property (nonatomic,readonly) NSString * hashedToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceWithType:(unsigned long long)arg1 token:(id)arg2 timeToLive:(unsigned long long)arg3 ;
-(id)treeNodeChildObjectValueForKey:(id)arg1 ;
-(NSString *)hashedToken;
-(void)setCreatedTime:(NSDate *)arg1 ;
-(NSDate *)createdTime;
-(int)ALEType;
-(NSString *)tokenDescription;
-(id)contextsForCallingTypes:(id)arg1 ;
-(id)expirationDateFromRegistrationDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(unsigned long long)timeToLive;
-(void)setTimeToLive:(unsigned long long)arg1 ;
-(NSString *)typeDescription;
@end
