/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber;

@interface ECNotification : NSObject {

	NSString* _title;
	NSDictionary* _notificationInfo;
	NSString* _alertMessage;
	NSNumber* _badge;
	NSString* _sound;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDictionary * notificationInfo;              //@synthesize notificationInfo=_notificationInfo - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                          //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSNumber * badge;                               //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) NSString * sound;                               //@synthesize sound=_sound - In the implementation block
+(id)parseReceivedRemoteNotification:(id)arg1 ;
-(long long)remoteNotificationType;
-(void)executeWithApplication:(id)arg1 andOriginalState:(long long)arg2 ;
-(void)playCAFSound:(id)arg1 ;
-(void)playNotificationSound;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithNotification:(id)arg1 ;
-(NSDictionary *)notificationInfo;
-(NSString *)sound;
-(void)setSound:(NSString *)arg1 ;
-(NSNumber *)badge;
-(void)setBadge:(NSNumber *)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
@end

