/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ECAPINotification : NSObject {

	long long _type;
	long long _featureType;
	NSString* _identifier;
	NSString* _userID;

}

@property (assign,nonatomic) long long type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long featureType;              //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * userID;                  //@synthesize userID=_userID - In the implementation block
+(id)notificationWithType:(long long)arg1 featureType:(long long)arg2 ;
-(void)setFeatureType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 featureType:(long long)arg2 ;
-(id)description;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)featureType;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

