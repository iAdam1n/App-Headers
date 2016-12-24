/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageLocalNotification, NSNumber;

@interface MNMessageLocalNotificationBuzzHistory : FBValueObject <NSCopying> {

	MNMessageLocalNotification* _messageLocalNotification;
	NSNumber* _buzzTime;

}

@property (nonatomic,copy,readonly) MNMessageLocalNotification * messageLocalNotification;              //@synthesize messageLocalNotification=_messageLocalNotification - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * buzzTime;                                                //@synthesize buzzTime=_buzzTime - In the implementation block
-(id)initWithMessageLocalNotification:(id)arg1 buzzTime:(id)arg2 ;
-(MNMessageLocalNotification *)messageLocalNotification;
-(NSNumber *)buzzTime;
@end
