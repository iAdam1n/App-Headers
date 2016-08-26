/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/ATMessageReceiver.h>

@class ATActorSystem, ATQueue, NSString;

@interface ATActor : NSObject <ATMessageReceiver> {

	ATActorSystem* _actorSystem;
	ATQueue* _queue;
	NSString* _path;
	int _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)executesOnDedicatedQueue;
-(void)processMessage:(id)arg1 sender:(id)arg2 ;
-(void)onStart;
-(void)onStop;
-(id)actorSystem;
-(void)receiveMessage:(id)arg1 sender:(id)arg2 ;
-(id)initWithActorSystem:(id)arg1 path:(id)arg2 ;
-(void)onTerminate;
-(id)path;
-(BOOL)isRunning;
-(id)queue;
@end
