/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class IRCConnection, NSMutableArray, NSString, PLVIRCSupport;

@interface IRCNick : NSObject {

	IRCConnection* _connection;
	NSMutableArray* _modes;
	NSString* _nickname;
	NSString* _ident;
	NSString* _host;

}

@property (nonatomic,readonly) BOOL hasOp; 
@property (__weak) IRCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * modes;                           //@synthesize modes=_modes - In the implementation block
@property (nonatomic,retain) NSString * nickname;                    //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSString * ident;                       //@synthesize ident=_ident - In the implementation block
@property (nonatomic,retain) NSString * host;                        //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) PLVIRCSupport * support; 
+(id)parse:(id)arg1 ;
-(id)initWithNickname:(id)arg1 ident:(id)arg2 host:(id)arg3 ;
-(PLVIRCSupport *)support;
-(void)setModes:(NSMutableArray *)arg1 ;
-(BOOL)isEqualToNickname:(id)arg1 ;
-(void)addMode:(id)arg1 ;
-(void)removeMode:(id)arg1 ;
-(BOOL)hasOp;
-(BOOL)hasMode:(id)arg1 ;
-(void)setIdent:(NSString *)arg1 ;
-(unsigned long long)weightForMode:(id)arg1 ;
-(id)topMode;
-(unsigned long long)topModeWeight;
-(BOOL)isNicknameEqualToString:(id)arg1 ;
-(NSString *)ident;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)host;
-(void)update:(id)arg1 ;
-(IRCConnection *)connection;
-(void)setConnection:(IRCConnection *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSMutableArray *)modes;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
@end

