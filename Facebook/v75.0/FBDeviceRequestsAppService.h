/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDeviceRequestScannerDelegate.h>
#import <Facebook/FBInAppBasicBeeperContentViewDelegate.h>
#import <Facebook/FBAppService.h>

@class FBDeviceRequestScanner, FBUserSession, NSString;

@interface FBDeviceRequestsAppService : NSObject <FBDeviceRequestScannerDelegate, FBInAppBasicBeeperContentViewDelegate, FBAppService> {

	FBDeviceRequestScanner* _deviceScanner;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)didSelectContentView;
-(void)scanner:(id)arg1 didFindUserCode:(id)arg2 deviceRequestDictionary:(id)arg3 moreComing:(BOOL)arg4 ;
-(void)scanner:(id)arg1 didRemoveUserCode:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)scanner:(id)arg1 didError:(id)arg2 eventName:(id)arg3 ;
-(void)_performScan;
-(void)_cleanUpScan;
-(void)_showBeeperForDeviceRequestDictionary:(id)arg1 ;
-(void)_tryDisplayBeeperWithView:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
