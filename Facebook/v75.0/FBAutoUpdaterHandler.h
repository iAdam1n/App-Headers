/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUpdateHandler.h>

@protocol FBAutoUpdaterHandlerDelegate, FBAutoUpdaterAutomaticRestartBehavior;
@interface FBAutoUpdaterHandler : FBUpdateHandler {

	id<FBAutoUpdaterHandlerDelegate> _installDelegate;
	id<FBAutoUpdaterAutomaticRestartBehavior> _restartBehavior;

}

@property (assign,nonatomic,__weak) id<FBAutoUpdaterHandlerDelegate> installDelegate;                //@synthesize installDelegate=_installDelegate - In the implementation block
@property (nonatomic,retain) id<FBAutoUpdaterAutomaticRestartBehavior> restartBehavior;              //@synthesize restartBehavior=_restartBehavior - In the implementation block
-(id<FBAutoUpdaterHandlerDelegate>)installDelegate;
-(void)setInstallDelegate:(id<FBAutoUpdaterHandlerDelegate>)arg1 ;
-(id<FBAutoUpdaterAutomaticRestartBehavior>)restartBehavior;
-(void)setRestartBehavior:(id<FBAutoUpdaterAutomaticRestartBehavior>)arg1 ;
-(id)deviceStateRequirementsForUpdate:(id)arg1 ;
-(void)processUpdate:(id)arg1 ;
-(void)cancel;
@end
