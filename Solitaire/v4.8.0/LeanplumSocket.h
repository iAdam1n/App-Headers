/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/Leanplum_SocketIODelegate.h>

@class Leanplum_SocketIO, NSString, NSTimer;

@interface LeanplumSocket : NSObject <Leanplum_SocketIODelegate> {

	Leanplum_SocketIO* _socketIO;
	NSString* _appId;
	NSString* _deviceId;
	BOOL _authSent;
	NSTimer* _reconnectTimer;
	BOOL _connected;

}

@property (readonly) BOOL connected;                                //@synthesize connected=_connected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSocket;
+(id)engine;
-(void)connectToAppId:(id)arg1 deviceId:(id)arg2 ;
-(void)socketIO:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)socketIODidConnect:(id)arg1 ;
-(void)socketIODidDisconnect:(id)arg1 ;
-(void)sendEvent:(id)arg1 withData:(id)arg2 ;
-(id)init;
-(void)connect;
-(BOOL)connected;
-(void)reconnect;
@end
