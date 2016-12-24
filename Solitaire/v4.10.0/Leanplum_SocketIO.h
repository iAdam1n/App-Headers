/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Leanplum_SocketIODelegate;
@class NSString, Leanplum_WebSocket, NSTimer, NSMutableArray, NSMutableDictionary;

@interface Leanplum_SocketIO : NSObject {

	NSString* _host;
	long long _port;
	NSString* _sid;
	id<Leanplum_SocketIODelegate> _delegate;
	Leanplum_WebSocket* _webSocket;
	BOOL _isConnected;
	BOOL _isConnecting;
	BOOL _useTLS;
	double _heartbeatTimeout;
	NSTimer* _timeout;
	NSMutableArray* _queue;
	NSMutableDictionary* _acks;
	long long _ackCount;

}
+(id)arrayOfCaptureComponentsOfString:(id)arg1 matchedBy:(id)arg2 ;
+(id)arrayOfCaptureComponentsOfString:(id)arg1 matchedByRegex:(id)arg2 ;
-(void)connectWithEngine:(id)arg1 withHost:(id)arg2 onPort:(long long)arg3 secureConnection:(BOOL)arg4 ;
-(void)requestFinished:(id)arg1 ;
-(void)requestFailed:(id)arg1 ;
-(void)sendDisconnect;
-(void)sendMessage:(id)arg1 withAcknowledge:(SEL)arg2 ;
-(id)addAcknowledge:(SEL)arg1 ;
-(void)sendJSON:(id)arg1 withAcknowledge:(SEL)arg2 ;
-(void)sendEvent:(id)arg1 withData:(id)arg2 andAcknowledge:(SEL)arg3 ;
-(void)setTimeout;
-(void)onDisconnect;
-(void)onConnect;
-(void)sendHeartbeat;
-(void)removeAcknowledgeForKey:(id)arg1 ;
-(void)doQueue;
-(void)onTimeout;
-(void)onData:(id)arg1 ;
-(void)connectWithEngine:(id)arg1 withHost:(id)arg2 onPort:(long long)arg3 ;
-(void)sendJSON:(id)arg1 ;
-(void)sendEvent:(id)arg1 withData:(id)arg2 ;
-(void)sendAcknowledgement:(id)arg1 withArgs:(id)arg2 ;
-(void)webSocketDidClose:(id)arg1 ;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)disconnect;
-(void)send:(id)arg1 ;
-(void)log:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)openSocket;
@end
