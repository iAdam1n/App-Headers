/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/NSCoding.h>

@class IRCQuery, NSString, NSArray, IRCConnection, QueryHeaderView, PLVUserPreferences;

@interface IRCNetwork : NSObject <NSCoding> {

	BOOL _collapsed;
	BOOL _shouldAutomaticallyConnect;
	BOOL _autoConnect;
	BOOL _useTLS;
	BOOL _verifyTLS;
	BOOL _awaitingPassword;
	IRCQuery* _query;
	NSString* _uuid;
	NSString* _name;
	NSArray* _queries;
	NSString* _host;
	unsigned long long _port;
	NSString* _nick;
	IRCConnection* _connection;
	QueryHeaderView* _sectionHeaderView;

}

@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                  //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,retain) IRCQuery * query;                                                   //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyConnect;                                    //@synthesize shouldAutomaticallyConnect=_shouldAutomaticallyConnect - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * queries;                                                //@synthesize queries=_queries - In the implementation block
@property (assign) BOOL autoConnect;                                                             //@synthesize autoConnect=_autoConnect - In the implementation block
@property (retain) NSString * host;                                                              //@synthesize host=_host - In the implementation block
@property (assign) unsigned long long port;                                                      //@synthesize port=_port - In the implementation block
@property (assign) BOOL useTLS;                                                                  //@synthesize useTLS=_useTLS - In the implementation block
@property (assign) BOOL verifyTLS;                                                               //@synthesize verifyTLS=_verifyTLS - In the implementation block
@property (retain) NSString * password; 
@property (nonatomic,copy) id<IRCNetworkAuthenticationScheme> authenticationScheme; 
@property (retain) NSString * nick;                                                              //@synthesize nick=_nick - In the implementation block
@property (retain) IRCConnection * connection;                                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) QueryHeaderView * sectionHeaderView;                         //@synthesize sectionHeaderView=_sectionHeaderView - In the implementation block
@property (assign,getter=isAwaitingPassword,nonatomic) BOOL awaitingPassword;                    //@synthesize awaitingPassword=_awaitingPassword - In the implementation block
@property (nonatomic,readonly) PLVUserPreferences * userPreferences; 
-(void)setUseTLS:(BOOL)arg1 ;
-(void)setVerifyTLS:(BOOL)arg1 ;
-(void)setAutoConnect:(BOOL)arg1 ;
-(NSString *)nick;
-(BOOL)autoConnect;
-(BOOL)useTLS;
-(BOOL)verifyTLS;
-(void)setAuthenticationScheme:(id<IRCNetworkAuthenticationScheme>)arg1 ;
-(void)setNick:(NSString *)arg1 ;
-(void)setShouldAutomaticallyConnect:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyConnect;
-(id)findQuery:(id)arg1 ;
-(void)addQuery:(id)arg1 ;
-(PLVUserPreferences *)userPreferences;
-(void)setAwaitingPassword:(BOOL)arg1 ;
-(id<IRCNetworkAuthenticationScheme>)authenticationScheme;
-(id)passwordIdentifier;
-(id)authenticationSchemeIdentifier;
-(void)automaticallyConnect;
-(id)findOrCreateQuery:(id)arg1 type:(int)arg2 ;
-(id)queryForURL:(id)arg1 ;
-(void)removeQuery:(id)arg1 ;
-(void)moveQuery:(id)arg1 toIndex:(long long)arg2 ;
-(id)nicknameForConnection:(id)arg1 ;
-(id)passwordForConnection:(id)arg1 ;
-(void)passwordNeededForConnection:(id)arg1 reason:(id)arg2 ;
-(void)passwordNeededForZNCConnection:(id)arg1 reason:(id)arg2 ;
-(id)identForConnection:(id)arg1 ;
-(id)nameForConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 inQuery:(id)arg2 fromQueryDetailController:(id)arg3 ;
-(QueryHeaderView *)sectionHeaderView;
-(void)setSectionHeaderView:(QueryHeaderView *)arg1 ;
-(BOOL)isAwaitingPassword;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(IRCQuery *)query;
-(void)setQuery:(IRCQuery *)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSString *)host;
-(void)connect;
-(void)disconnect;
-(NSString *)uuid;
-(IRCConnection *)connection;
-(void)setConnection:(IRCConnection *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)port;
-(NSString *)password;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(unsigned long long)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isConnected;
-(NSArray *)queries;
@end

