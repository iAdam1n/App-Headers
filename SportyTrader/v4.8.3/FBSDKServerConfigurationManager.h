/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKServerConfigurationManager : NSObject
+(void)loadServerConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)cachedServerConfiguration;
+(id)requestToLoadServerConfiguration:(id)arg1 ;
+(void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3 ;
+(id)_defaultServerConfigurationForAppID:(id)arg1 ;
+(BOOL)_serverConfigurationTimestampIsValid:(id)arg1 ;
+(/*^block*/id)_wrapperBlockForLoadBlock:(/*^block*/id)arg1 ;
+(void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3 ;
+(id)_parseDialogConfigurations:(id)arg1 ;
+(void)initialize;
+(void)clearCache;
-(id)init;
@end

