/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, FBDialogsData, FBAppLinkData, FBAccessTokenData;

@interface FBAppCall : NSObject {

	NSString* _ID;
	NSError* _error;
	FBDialogsData* _dialogData;
	FBAppLinkData* _appLinkData;
	FBAccessTokenData* _accessTokenData;

}

@property (nonatomic,copy) NSString * ID;                                      //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FBDialogsData * dialogData;                       //@synthesize dialogData=_dialogData - In the implementation block
@property (nonatomic,retain) FBAppLinkData * appLinkData;                      //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) FBAccessTokenData * accessTokenData;              //@synthesize accessTokenData=_accessTokenData - In the implementation block
+(id)appCallFromURL:(id)arg1 ;
+(void)handleDidBecomeActive;
+(id)appCallFromApplinkData:(id)arg1 applinkData:(id)arg2 originalQueryParameters:(id)arg3 ;
+(id)appCallFromApplinkArgs_v2:(id)arg1 applinkArgs:(id)arg2 createTimeUTC:(id)arg3 originalQueryParameters:(id)arg4 ;
+(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withSession:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
+(BOOL)tryOpenSession:(id)arg1 withAccessToken:(id)arg2 ;
+(BOOL)invokeHandler:(/*^block*/id)arg1 withAccessToken:(id)arg2 appLinkData:(id)arg3 ;
+(void)invokeHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
+(void)handleDidBecomeActiveWithSession:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
+(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
+(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withSession:(id)arg3 ;
+(void)openDeferredAppLink:(/*^block*/id)arg1 ;
-(FBAccessTokenData *)accessTokenData;
-(FBDialogsData *)dialogData;
-(id)initWithID:(id)arg1 enforceScheme:(BOOL)arg2 appID:(id)arg3 urlSchemeSuffix:(id)arg4 ;
-(void)setDialogData:(FBDialogsData *)arg1 ;
-(void)setAppLinkData:(FBAppLinkData *)arg1 ;
-(void)logInboundAppLinkEvent;
-(FBAppLinkData *)appLinkData;
-(BOOL)isEqualToAppCall:(id)arg1 ;
-(void)setAccessTokenData:(FBAccessTokenData *)arg1 ;
-(id)init:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
@end
