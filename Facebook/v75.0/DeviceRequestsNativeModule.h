/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDeviceRequestScannerDelegate.h>
#import <Facebook/RCTFBSessionModule.h>

@class FBDeviceRequestScanner, NSMutableDictionary, FBUserSession, RCTBridge, NSString;

@interface DeviceRequestsNativeModule : NSObject <FBDeviceRequestScannerDelegate, RCTFBSessionModule> {

	FBDeviceRequestScanner* _deviceRequestScanner;
	NSMutableDictionary* _deviceRequests;
	FBUserSession* _session;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__450;
+(id)__rct_export__541;
+(id)__rct_export__612;
+(id)__rct_export__723;
+(void)load;
-(void)ignoreDeviceRequest:(id)arg1 ;
-(void)_updateDeviceRequests:(id)arg1 ;
-(void)scanner:(id)arg1 didFindUserCode:(id)arg2 deviceRequestDictionary:(id)arg3 moreComing:(BOOL)arg4 ;
-(void)scanner:(id)arg1 didRemoveUserCode:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)scanner:(id)arg1 didError:(id)arg2 eventName:(id)arg3 ;
-(void)beginDeviceRequestDiscovery;
-(void)endDeviceRequestDiscovery;
-(void)logIn:(id)arg1 deviceRequest:(id)arg2 resolver:(/*^block*/id)arg3 rejector:(/*^block*/id)arg4 ;
-(id)init;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(RCTBridge *)bridge;
@end
