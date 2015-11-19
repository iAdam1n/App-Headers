/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ApptentiveMetrics : NSObject {

	BOOL metricsEnabled;

}
+(void)registerDefaults;
+(id)sharedMetrics;
-(void)updateWithCurrentPreferences;
-(void)feedbackDidShowWindow:(id)arg1 ;
-(void)feedbackDidHideWindow:(id)arg1 ;
-(void)surveyDidHide:(id)arg1 ;
-(void)surveyDidAnswerQuestion:(id)arg1 ;
-(void)appWillTerminate:(id)arg1 ;
-(void)messageCenterDidLaunch:(id)arg1 ;
-(void)addLaunchMetric;
-(void)messageCenterDidClose:(id)arg1 ;
-(void)messageCenterDidAttach:(id)arg1 ;
-(void)messageCenterDidRead:(id)arg1 ;
-(void)messageCenterDidSend:(id)arg1 ;
-(void)messageCenterIntroDidLaunch:(id)arg1 ;
-(void)messageCenterIntroDidSend:(id)arg1 ;
-(void)messageCenterIntroDidCancel:(id)arg1 ;
-(void)messageCenterIntroThankYouDidLaunch:(id)arg1 ;
-(void)messageCenterIntroThankYouHitMessages:(id)arg1 ;
-(void)messageCenterIntroThankYouDidClose:(id)arg1 ;
-(int)windowTypeFromNotification:(id)arg1 ;
-(int)surveyEventTypeFromNotification:(id)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)preferencesChanged:(id)arg1 ;
-(void)addMetricWithName:(id)arg1 fromInteraction:(id)arg2 info:(id)arg3 customData:(id)arg4 extendedData:(id)arg5 ;
-(BOOL)upgradeLegacyMetric:(id)arg1 ;
-(void)addMetricWithName:(id)arg1 info:(id)arg2 customData:(id)arg3 extendedData:(id)arg4 ;
-(void)backendBecameAvailable:(id)arg1 ;
-(void)addMetricWithName:(id)arg1 info:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

