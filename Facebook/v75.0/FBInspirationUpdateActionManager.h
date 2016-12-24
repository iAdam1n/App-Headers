/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBInspirationSaveAssetActionHandler, FBInspirationCancelActionHandler, FBInspirationPermissionRequestActionHandler, FBInspirationLocationPermissionRequestActionHandler;

@interface FBInspirationUpdateActionManager : NSObject {

	FBUserSession* _session;
	FBInspirationSaveAssetActionHandler* _saveAssetActionHandler;
	FBInspirationCancelActionHandler* _cancelActionHandler;
	FBInspirationPermissionRequestActionHandler* _permissionRequestActionHandler;
	FBInspirationLocationPermissionRequestActionHandler* _locationPermissionRequestActionHandler;

}
-(void)registerHandlersAsListeners:(id)arg1 ;
-(void)setCancelActionHandler:(id)arg1 withUpdateHandler:(id)arg2 ;
-(void)handleAction:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
