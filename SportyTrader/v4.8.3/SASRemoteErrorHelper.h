/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SASRemoteErrorHelper : NSObject
+(id)URLEncode:(id)arg1 ;
+(void)callCountPixelURL:(id)arg1 ;
+(id)encodeMessageForStatsLogs:(id)arg1 ;
+(void)logMessage:(id)arg1 insertionID:(id)arg2 adRequestURL:(id)arg3 className:(id)arg4 samplingWeight:(int)arg5 ;
+(id)buildURLForMessage:(id)arg1 remoteURL:(id)arg2 className:(id)arg3 samplingWeight:(int)arg4 insertionID:(id)arg5 ;
+(id)buildErrorAPIKey;
+(id)buildMessage:(id)arg1 ;
+(void)logError:(id)arg1 insertionID:(id)arg2 adRequestURL:(id)arg3 className:(id)arg4 ;
@end
