/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
+(void)destroy;
+(void)setDelegate:(id)arg1 ;
+(id)version;
+(id)sessionID;
+(BOOL)isConnected;
@end

