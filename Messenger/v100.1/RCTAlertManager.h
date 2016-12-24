/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>
#import <Messenger/RCTInvalidating.h>

@class NSHashTable, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <RCTBridgeModule, RCTInvalidating> {

	NSHashTable* _alertControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__660;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)alertWithArgs:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)invalidate;
@end
