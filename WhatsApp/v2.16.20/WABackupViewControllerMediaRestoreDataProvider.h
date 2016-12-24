/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WABackupViewControllerDataProvider.h>

@class WACloudStatus, WAWeakTimer;

@interface WABackupViewControllerMediaRestoreDataProvider : WABackupViewControllerDataProvider {

	WACloudStatus* _cloudStatus;
	id _cloudStatusListener;
	WAWeakTimer* _timer;

}
+(id)errorForMediaRestoreStatus:(unsigned long long)arg1 ;
+(int)resultForStatus:(unsigned long long)arg1 ;
-(id)initWithBackupViewController:(id)arg1 delegate:(id)arg2 ;
-(void)sendAllUpdates;
-(void)requestAllUpdates;
-(void)sendErrorUpdate;
-(BOOL)hasCloudStatusNetworkError;
-(void)startTimerIfNeeded;
-(void)stopTimerIfNeeded;
-(void)mediaRestoreStatusDidChange:(id)arg1 ;
-(void)updateCurrentRestore;
-(void)sendAnimateCloudUpdate;
-(void)sendButtonTextUpdate;
-(void)sendStatusTextUpdate;
-(void)mediaRestorePhaseDidChange:(id)arg1 ;
-(void)cloudStatusDidChange:(id)arg1 ;
-(void)dealloc;
-(void)updateCloudStatus;
@end
