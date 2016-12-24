/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MNMessageLocalNotificationOtherDeviceActivityStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _lastWebSelfSendTime;
	unsigned long long _lastNonWebActivityTime;

}

@property (assign,nonatomic) unsigned long long lastWebSelfSendTime; 
@property (assign,nonatomic) unsigned long long lastNonWebActivityTime; 
-(void)_clearAllActivity;
-(void)setLastWebSelfSendTime:(unsigned long long)arg1 ;
-(unsigned long long)lastWebSelfSendTime;
-(void)setLastNonWebActivityTime:(unsigned long long)arg1 ;
-(unsigned long long)lastNonWebActivityTime;
-(void)clearAllActivity;
-(id)initWithQueue:(id)arg1 ;
@end
