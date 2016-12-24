/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>
#import <Facebook/FBViewerContextClassProvidable.h>

@class FBUserSession, FBLazyCreator, FBDiodeServiceDelayer, NSString;

@interface FBDiodeService : NSObject <FBAppService, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBLazyCreator* _startupManager;
	FBLazyCreator* _mqttCoordinator;
	FBDiodeServiceDelayer* _diodeServiceDelayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 startupManager:(id)arg2 mqttCoordinator:(id)arg3 ;
@end
