/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTEventEmitter : NSObject <RCTBridgeModule> {

	long long _listenerCount;
	RCTBridge* _bridge;

}

@property (assign,nonatomic,__weak) RCTBridge * bridge;                               //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__750;
+(id)__rct_export__871;
+(void)initialize;
-(void)removeListeners:(long long)arg1 ;
-(id)supportedEvents;
-(void)sendEventWithName:(id)arg1 body:(id)arg2 ;
-(void)dealloc;
-(void)startObserving;
-(void)addListener:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)stopObserving;
@end
