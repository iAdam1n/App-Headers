/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Bugsnag : NSObject
+(void)addAttribute:(id)arg1 withValue:(id)arg2 toTabWithName:(id)arg3 ;
+(void)startBugsnagWithConfiguration:(id)arg1 ;
+(BOOL)bugsnagStarted;
+(void)startBugsnagWithApiKey:(id)arg1 ;
+(void)notify:(id)arg1 withData:(id)arg2 ;
+(void)notify:(id)arg1 withData:(id)arg2 atSeverity:(id)arg3 ;
+(void)clearTabWithName:(id)arg1 ;
+(id)notifier;
+(id)configuration;
+(void)notify:(id)arg1 ;
+(id)instance;
@end

