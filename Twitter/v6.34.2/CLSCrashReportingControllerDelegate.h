/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CLSCrashReportingControllerDelegate <NSObject>
@required
-(BOOL)reportingControllerMustInformDelegateOfReports:(id)arg1;
-(BOOL)shouldInstallCrashCallback;
-(void)detectedCrash;
-(BOOL)reportingControllerCanUseBackgroundSessions:(id)arg1;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2;
-(BOOL)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
-(id)APIKeyForCrashReportingController:(id)arg1;
-(id)installIDForCrashReportingController:(id)arg1;
-(BOOL)isFirstInstallForCrashReportingController:(id)arg1;
-(id)settingsForCrashReportingController:(id)arg1;

@end
