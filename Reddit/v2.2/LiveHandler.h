/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/SRWebSocketDelegate.h>

@protocol LiveHandlerDelegate;
@class LiveEvent, SRWebSocket, NSURL, NSString;

@interface LiveHandler : NSObject <SRWebSocketDelegate> {

	BOOL _shouldReconnect;
	id<LiveHandlerDelegate> _delegate;
	LiveEvent* _liveEvent;
	SRWebSocket* _socket;
	double _reconnectTime;
	NSURL* _websocketUrl;

}

@property (nonatomic,retain) LiveEvent * liveEvent;                                //@synthesize liveEvent=_liveEvent - In the implementation block
@property (nonatomic,retain) SRWebSocket * socket;                                 //@synthesize socket=_socket - In the implementation block
@property (assign,nonatomic) double reconnectTime;                                 //@synthesize reconnectTime=_reconnectTime - In the implementation block
@property (nonatomic,retain) NSURL * websocketUrl;                                 //@synthesize websocketUrl=_websocketUrl - In the implementation block
@property (assign,nonatomic,__weak) id<LiveHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldReconnect;                                 //@synthesize shouldReconnect=_shouldReconnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLiveEvent:(LiveEvent *)arg1 ;
-(void)configureWithLiveEvent:(id)arg1 ;
-(LiveEvent *)liveEvent;
-(void)configureWithWebsocketUrl:(id)arg1 ;
-(void)setWebsocketUrl:(NSURL *)arg1 ;
-(NSURL *)websocketUrl;
-(void)setShouldReconnect:(BOOL)arg1 ;
-(void)setReconnectTime:(double)arg1 ;
-(BOOL)shouldReconnect;
-(void)attemptToReconnect;
-(double)reconnectTime;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4 ;
-(void)setDelegate:(id<LiveHandlerDelegate>)arg1 ;
-(id<LiveHandlerDelegate>)delegate;
-(void)setSocket:(SRWebSocket *)arg1 ;
-(SRWebSocket *)socket;
@end
