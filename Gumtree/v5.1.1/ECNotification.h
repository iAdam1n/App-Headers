/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
+(long long)remoteNotificationTypeFromString:(id)arg1 ;
-(long long)remoteNotificationType;
-(void)executeWithApplication:(id)arg1 andOriginalState:(long long)arg2 ;
-(void)playCAFSound:(id)arg1 ;
-(void)playNotificationSound;
-(id)initWithNotificationInfo:(id)arg1 ;
-(id)initWithNotificationInfo:(id)arg1 isOldFormat:(BOOL)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDictionary *)notificationInfo;
-(NSNumber *)badge;
-(void)setBadge:(NSNumber *)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(NSString *)sound;
-(void)setSound:(NSString *)arg1 ;
@end
