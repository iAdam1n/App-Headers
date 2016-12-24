/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUpdateHandler.h>

@protocol FBAutoUpdaterHandlerDelegate, FBAutoUpdaterAutomaticRestartBehavior;
@interface FBAutoUpdaterHandler : FBUpdateHandler {

	id<FBAutoUpdaterHandlerDelegate> _installDelegate;
	id<FBAutoUpdaterAutomaticRestartBehavior> _restartBehavior;

}

@property (assign,nonatomic,__weak) id<FBAutoUpdaterHandlerDelegate> installDelegate;                //@synthesize installDelegate=_installDelegate - In the implementation block
@property (nonatomic,retain) id<FBAutoUpdaterAutomaticRestartBehavior> restartBehavior;              //@synthesize restartBehavior=_restartBehavior - In the implementation block
-(void)setInstallDelegate:(id<FBAutoUpdaterHandlerDelegate>)arg1 ;
-(void)setRestartBehavior:(id<FBAutoUpdaterAutomaticRestartBehavior>)arg1 ;
-(id<FBAutoUpdaterHandlerDelegate>)installDelegate;
-(id<FBAutoUpdaterAutomaticRestartBehavior>)restartBehavior;
-(id)deviceStateRequirementsForUpdate:(id)arg1 ;
-(void)processUpdate:(id)arg1 ;
-(void)cancel;
@end
