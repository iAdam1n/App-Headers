/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBPYMKAnalyticsLogger : NSObject
+(id)_prepareLoggingParametersUsingPymkId:(id)arg1 pymkLocation:(id)arg2 pymkRef:(id)arg3 pymkTrackingSignature:(id)arg4 ;
+(void)impressionLogForNetegoPYMKWithEventName:(id)arg1 trackingId:(id)arg2 userId:(id)arg3 ;
+(void)impressionLogForRegularPYMKWithTimestamp:(id)arg1 pymkId:(id)arg2 pymkLocation:(id)arg3 pymkRef:(id)arg4 pymkTrackingSignature:(id)arg5 ;
+(void)addActionLogForRegularPYMKWithPymkId:(id)arg1 pymkLocation:(id)arg2 pymkRef:(id)arg3 pymkTrackingSignature:(id)arg4 ;
+(void)profileActionLogForRegularPYMKWithPymkId:(id)arg1 pymkLocation:(id)arg2 pymkRef:(id)arg3 pymkTrackingSignature:(id)arg4 ;
+(void)xoutActionLogForRegularPYMKWithPymkId:(id)arg1 pymkLocation:(id)arg2 pymkRef:(id)arg3 pymkTrackingSignature:(id)arg4 ;
@end
