/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BITCrashManagerDelegate <NSObject>
@optional
-(id)applicationLogForCrashManager:(id)arg1;
-(id)userNameForCrashManager:(id)arg1;
-(id)userEmailForCrashManager:(id)arg1;
-(void)crashManagerWillShowSubmitCrashReportAlert:(id)arg1;
-(void)crashManagerWillCancelSendingCrashReport:(id)arg1;
-(void)crashManagerWillSendCrashReportsAlways:(id)arg1;
-(void)crashManagerWillSendCrashReport:(id)arg1;
-(void)crashManager:(id)arg1 didFailWithError:(id)arg2;
-(void)crashManagerDidFinishSendingCrashReport:(id)arg1;

@end
