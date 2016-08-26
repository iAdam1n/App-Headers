/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WABackupViewControllerDataProvider.h>

@class WACloudStatus, WABackupErrorManager, WAProgressHUD, WAWeakTimer;

@interface WABackupViewControllerStandardDataProvider : WABackupViewControllerDataProvider {

	WACloudStatus* _cloudStatus;
	id _cloudStatusListener;
	WABackupErrorManager* _errorManager;
	WAProgressHUD* _progressHUD;
	double _hudDisplayedTime;
	WAWeakTimer* _timer;
	BOOL _registered;

}
-(id)initWithBackupViewController:(id)arg1 delegate:(id)arg2 ;
-(void)sendAllUpdates;
-(void)viewDidAppearNotification;
-(void)didUpdateCloudStatus;
-(void)backupErrorUpdated:(id)arg1 ;
-(void)muteBadgeIfNeeded;
-(void)sendErrorUpdate;
-(void)sendStatusUpdate;
-(void)registerForBackupNotifications;
-(void)sendAnimateCloudUpdate:(BOOL)arg1 ;
-(void)sendButtonUpdate:(BOOL)arg1 ;
-(id)buildStatusMessage;
-(BOOL)hasCloudStatusNetworkError;
-(void)startTimerIfNeeded;
-(void)stopTimerIfNeeded;
-(void)startBackupAction;
-(void)showHUD:(id)arg1 ;
-(void)backupPhaseCompleted:(id)arg1 ;
-(void)removeHUD;
-(void)removeHUD:(BOOL)arg1 ;
-(void)unregisterForBackupNotifications;
-(void)dealloc;
-(id)currentError;
@end
