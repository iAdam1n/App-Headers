/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SASRemoteErrorHelper : NSObject
+(id)encodeMessageForStatsLogs:(id)arg1 ;
+(void)logMessage:(id)arg1 insertionID:(id)arg2 adRequestURL:(id)arg3 className:(id)arg4 samplingWeight:(int)arg5 ;
+(id)buildURLForMessage:(id)arg1 remoteURL:(id)arg2 className:(id)arg3 samplingWeight:(int)arg4 insertionID:(id)arg5 ;
+(void)callCountPixelURL:(id)arg1 ;
+(id)URLEncode:(id)arg1 ;
+(id)buildErrorAPIKey;
+(id)buildMessage:(id)arg1 ;
+(void)logError:(id)arg1 insertionID:(id)arg2 adRequestURL:(id)arg3 className:(id)arg4 ;
@end

