/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WAWebClientSession, NSData;

@interface _WAWebClientPersistentLoginRequest : NSObject {

	NSString* _webRef;
	NSString* _browserID;
	NSString* _clientToken;
	NSString* _syncType;
	WAWebClientSession* _session;
	NSData* _serverChallenge;

}

@property (nonatomic,copy,readonly) NSString * webRef;                    //@synthesize webRef=_webRef - In the implementation block
@property (nonatomic,copy,readonly) NSString * browserID;                 //@synthesize browserID=_browserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientToken;               //@synthesize clientToken=_clientToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncType;                  //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,readonly) WAWebClientSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSData * serverChallenge;                      //@synthesize serverChallenge=_serverChallenge - In the implementation block
-(id)initWithStanzaElement:(id)arg1 ;
-(NSString *)webRef;
-(NSData *)serverChallenge;
-(void)setServerChallenge:(NSData *)arg1 ;
-(id)description;
-(NSString *)syncType;
-(NSString *)clientToken;
-(WAWebClientSession *)session;
-(NSString *)browserID;
@end
