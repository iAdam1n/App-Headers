/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>
#import <Messenger/RCTFBSessionModule.h>
#import <Messenger/FBGravityBeaconsListener.h>

@class FBUserSession, FBGravityBeaconsManager, NSString, RCTBridge;

@interface FBGravityNativeModule : RCTEventEmitter <RCTFBSessionModule, FBGravityBeaconsListener> {

	FBGravityBeaconsManager* _gravityManager;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__550;
+(id)__rct_export__601;
+(void)load;
-(id)supportedEvents;
-(void)didNotFindBeacons;
-(void)didFindBeacons:(id)arg1 staleness:(double)arg2 ;
-(void)setBackgroundScanningEnabled:(BOOL)arg1 ;
-(void)getLastBluetoothScanData:(/*^block*/id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)startObserving;
-(FBUserSession *)session;
-(void)stopObserving;
@end
