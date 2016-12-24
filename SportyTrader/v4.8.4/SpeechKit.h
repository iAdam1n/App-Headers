/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SpeechKit : NSObject
+(void)consoleLog:(id)arg1 ;
+(void)setEarcon:(id)arg1 forType:(unsigned long long)arg2 ;
+(void)logToServer:(id)arg1 withValue:(id)arg2 ;
+(void)setupWithID:(id)arg1 appVersion:(id)arg2 host:(id)arg3 port:(long long)arg4 useSSL:(BOOL)arg5 appKey:(const char*)arg6 appKeyLen:(int)arg7 subscriberId:(id)arg8 delegate:(id)arg9 cmdtype:(int)arg10 ;
+(void)setupWithID:(id)arg1 host:(id)arg2 port:(long long)arg3 useSSL:(BOOL)arg4 appKey:(const char*)arg5 appKeyLen:(int)arg6 delegate:(id)arg7 ;
+(int)getCmdSetType;
+(void)setCmdSetType:(int)arg1 ;
+(void)enableConsoleLogs:(BOOL)arg1 ;
+(void)setDelegate:(id)arg1 ;
+(id)version;
+(id)sessionID;
+(BOOL)isConnected;
+(void)destroy;
@end
