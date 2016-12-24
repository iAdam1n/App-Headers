/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WATermsOfService : NSObject
+(BOOL)canPresentUIForStage:(unsigned long long)arg1 ;
+(void)updateTOSUILastSeenDate;
+(void)tosAcceptedWithOptoutState:(BOOL)arg1 ;
+(void)tosUIBecameVisibleForStage:(unsigned long long)arg1 ;
+(void)updateServerIfNecessary;
+(id)stageTwoStartDate;
+(void)checkIfCanOptOutOfAccountInfoSharingInSettingsWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)optedOutOfAccountInfoSharing;
+(void)optOutOfAccountInfoSharingWithCompletion:(/*^block*/id)arg1 ;
+(void)reloadServerPropValue;
+(void)setStageOneDuration:(long long)arg1 stageTwoDuration:(long long)arg2 ;
+(id)cutoffDate;
+(id)startDateForTOSStage:(unsigned long long)arg1 ;
+(void)setStartDate:(id)arg1 forTOSStage:(unsigned long long)arg2 ;
+(void)sendAcceptIQIfNecessary;
+(void)sendSetTOSStageIQIfNecessary;
+(unsigned long long)stage;
+(void)turnOff;
@end
