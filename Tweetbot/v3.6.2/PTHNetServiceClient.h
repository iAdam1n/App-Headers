/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHStreamHandlerDelegate.h>
#import <Tweetbot/NSNetServiceBrowserDelegate.h>
#import <Tweetbot/NSNetServiceDelegate.h>

@protocol PTHNetServiceClientDelegate;
@class NSString, NSNetServiceBrowser, NSMutableArray, NSMutableDictionary, NSTimer;

@interface PTHNetServiceClient : NSObject <PTHStreamHandlerDelegate, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSString* _type;
	NSString* _name;
	BOOL _running;
	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableArray* _services;
	NSMutableDictionary* _servicesInfo;
	unsigned long long _outputFormat;
	id<PTHNetServiceClientDelegate> _delegate;
	NSTimer* _reconnectTimer;

}

@property (assign,nonatomic,__weak) id<PTHNetServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long outputFormat;                              //@synthesize outputFormat=_outputFormat - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceInfoForNetService:(id)arg1 ;
-(id)streamHandlerForNetService:(id)arg1 ;
-(id)outputObjectsForNetService:(id)arg1 ;
-(BOOL)outputObject:(id)arg1 ;
-(id)netServiceForStreamHandler:(id)arg1 ;
-(BOOL)outputObject:(id)arg1 forNetService:(id)arg2 ;
-(void)streamHandlerDidClose:(id)arg1 ;
-(void)streamHandler:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)streamHandler:(id)arg1 didOutputObject:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)reconnect;
-(unsigned long long)outputFormat;
-(void)setOutputFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PTHNetServiceClientDelegate>)arg1 ;
-(id<PTHNetServiceClientDelegate>)delegate;
-(void)stop;
-(id)initWithType:(id)arg1 ;
-(void)start;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(BOOL)isConnected;
-(id)services;
@end

