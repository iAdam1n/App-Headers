/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/PLVIRCSocketDelegate.h>

@class IRCNetwork, IRCNick, PLVIRCSupport, NSDate, PLVUserPreferences, NSString, NSMutableDictionary, NSMutableArray, PLVIRCSocket, NSArray;

@interface IRCConnection : NSObject <PLVIRCSocketDelegate> {

	BOOL _registered;
	BOOL _authenticated;
	BOOL _away;
	BOOL _isServerTimeTimestamp;
	IRCNetwork* _network;
	IRCNick* _nick;
	PLVIRCSupport* _support;
	NSDate* _registeredAt;
	PLVUserPreferences* _userPreferences;
	NSString* _server;
	NSMutableDictionary* _whoisInfo;
	unsigned long long _stringEncoding;
	long long _capPaused;
	NSMutableArray* _pendingCaps;
	NSMutableArray* _acceptedCaps;
	PLVIRCSocket* _socket;
	NSMutableArray* __channels;
	NSMutableArray* _batches;

}

@property (nonatomic,retain) NSMutableDictionary * whoisInfo;                          //@synthesize whoisInfo=_whoisInfo - In the implementation block
@property (assign,nonatomic) BOOL isServerTimeTimestamp;                               //@synthesize isServerTimeTimestamp=_isServerTimeTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long stringEncoding;                      //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (assign) long long capPaused;                                                //@synthesize capPaused=_capPaused - In the implementation block
@property (retain) NSMutableArray * pendingCaps;                                       //@synthesize pendingCaps=_pendingCaps - In the implementation block
@property (retain) NSMutableArray * acceptedCaps;                                      //@synthesize acceptedCaps=_acceptedCaps - In the implementation block
@property (nonatomic,readonly) PLVIRCSocket * socket;                                  //@synthesize socket=_socket - In the implementation block
@property (nonatomic,retain) IRCNick * nick;                                           //@synthesize nick=_nick - In the implementation block
@property (nonatomic,retain) NSMutableArray * _channels;                               //@synthesize _channels=__channels - In the implementation block
@property (nonatomic,retain) NSMutableArray * batches;                                 //@synthesize batches=_batches - In the implementation block
@property (nonatomic,retain) PLVIRCSupport * support;                                  //@synthesize support=_support - In the implementation block
@property (nonatomic,retain) NSDate * registeredAt;                                    //@synthesize registeredAt=_registeredAt - In the implementation block
@property (nonatomic,readonly) IRCNetwork * network;                                   //@synthesize network=_network - In the implementation block
@property (getter=isRegistered,nonatomic,readonly) BOOL registered;                    //@synthesize registered=_registered - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAway,nonatomic,readonly) BOOL away;                                //@synthesize away=_away - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,retain) PLVUserPreferences * userPreferences;                     //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) NSString * server;                                        //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)socket:(id)arg1 didDisconnect:(id)arg2 ;
-(void)parseLine:(id)arg1 ;
-(void)socket:(id)arg1 didReadLine:(id)arg2 ;
-(BOOL)shouldSocketExtendTimeout:(id)arg1 ;
-(void)sendLine:(id)arg1 ;
-(IRCNick *)nick;
-(void)setNick:(IRCNick *)arg1 ;
-(void)sendPrivateMessage:(id)arg1 target:(id)arg2 ;
-(BOOL)isChannel:(id)arg1 ;
-(void)sendPart:(id)arg1 reason:(id)arg2 ;
-(void)sendDetach:(id)arg1 ;
-(void)sendJoin:(id)arg1 key:(id)arg2 ;
-(void)sendTopic:(id)arg1 channel:(id)arg2 ;
-(void)sendBan:(id)arg1 nick:(id)arg2 ;
-(void)sendKick:(id)arg1 nick:(id)arg2 reason:(id)arg3 ;
-(void)sendKill:(id)arg1 comment:(id)arg2 ;
-(void)sendOper:(id)arg1 password:(id)arg2 ;
-(void)sendInvite:(id)arg1 nick:(id)arg2 ;
-(void)set_channels:(NSMutableArray *)arg1 ;
-(void)setBatches:(NSMutableArray *)arg1 ;
-(void)setIsServerTimeTimestamp:(BOOL)arg1 ;
-(void)setCapPaused:(long long)arg1 ;
-(void)setPendingCaps:(NSMutableArray *)arg1 ;
-(void)setAcceptedCaps:(NSMutableArray *)arg1 ;
-(void)setSupport:(PLVIRCSupport *)arg1 ;
-(BOOL)isPalaverCapabilityEnabled;
-(void)addEvent:(id)arg1 date:(id)arg2 ;
-(PLVIRCSupport *)support;
-(id)removeChannelUserPrefixes:(id)arg1 modes:(id*)arg2 ;
-(NSMutableArray *)_channels;
-(void)setRegisteredAt:(NSDate *)arg1 ;
-(void)sendISONs;
-(void)joinChannels;
-(NSMutableArray *)acceptedCaps;
-(void)joinChannels:(id)arg1 keys:(id)arg2 ;
-(void)registerDevice;
-(BOOL)isServerTimeTimestamp;
-(void)setConnected:(id)arg1 nick:(id)arg2 ;
-(void)parseSupport:(id)arg1 ;
-(void)parseWhoisCommand:(unsigned long long)arg1 forNick:(id)arg2 data:(id)arg3 ;
-(id)findChannel:(id)arg1 ;
-(id)parseNick:(id)arg1 ;
-(BOOL)isCapPaused;
-(void)resumeCap;
-(id)findBatch:(id)arg1 ;
-(void)addChannel:(id)arg1 ;
-(void)removeChannel:(id)arg1 ;
-(void)sendNotice:(id)arg1 target:(id)arg2 ;
-(BOOL)messageIncludesHighlight:(id)arg1 ;
-(BOOL)isCapSupported:(id)arg1 ;
-(NSMutableArray *)pendingCaps;
-(void)cap:(id)arg1 withResult:(BOOL)arg2 ;
-(void)sendNextCap;
-(void)registerPreferences;
-(id)parseMessageTags:(id)arg1 ;
-(void)parseNumeric:(unsigned long long)arg1 parameters:(id)arg2 sender:(id)arg3 messageTags:(id)arg4 ;
-(void)parseCommand:(id)arg1 parameters:(id)arg2 sender:(id)arg3 messageTags:(id)arg4 ;
-(NSMutableDictionary *)whoisInfo;
-(void)setWhoisInfo:(NSMutableDictionary *)arg1 ;
-(long long)capPaused;
-(void)pauseCap;
-(void)tokenDidChange:(id)arg1 ;
-(void)resetChannels;
-(void)sendPing:(id)arg1 ;
-(void)sendWhois:(id)arg1 ;
-(void)sendISON:(id)arg1 ;
-(void)sendAway:(id)arg1 ;
-(void)sendUnaway;
-(void)sendList;
-(NSDate *)registeredAt;
-(BOOL)isAway;
-(void)socketDidSecure:(id)arg1 ;
-(NSArray *)channels;
-(BOOL)isRegistered;
-(void)dealloc;
-(NSString *)server;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)connect;
-(void)disconnect;
-(void)perform;
-(unsigned long long)stringEncoding;
-(NSMutableArray *)batches;
-(BOOL)isAuthenticated;
-(PLVIRCSocket *)socket;
-(IRCNetwork *)network;
-(void)socketDidConnect:(id)arg1 ;
-(PLVUserPreferences *)userPreferences;
-(void)setUserPreferences:(PLVUserPreferences *)arg1 ;
-(void)send:(id)arg1 ;
-(void)setServer:(NSString *)arg1 ;
-(void)quit;
-(id)initWithNetwork:(id)arg1 ;
@end
