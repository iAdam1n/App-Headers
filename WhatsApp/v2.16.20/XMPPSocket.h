/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/GCDAsyncSocketDelegate.h>

@protocol XMPPSocketDelegate;
@class GCDAsyncSocket, WATimer, NSArray, NSMutableArray, XMPPEndpoint, NSString, NSMutableData, WADNSResolver, WAInetAddress, NSNumber;

@interface XMPPSocket : NSObject <GCDAsyncSocketDelegate> {

	GCDAsyncSocket* _socket;
	double _timeout;
	WATimer* _disconnectionTimer;
	NSArray* _hosts;
	int _currentState;
	NSMutableArray* _endpoints;
	NSMutableArray* _nonOverrideFallbacks;
	XMPPEndpoint* _currentEndpoint;
	int _primaryPort;
	int _secondaryPort;
	NSString* _interface;
	BOOL _didConnectSuccessfully;
	int _httpChunkRemainingLength;
	NSMutableData* _httpRemainingChunk;
	WADNSResolver* _dnsResolver;
	NSArray* _fallbackAddresses;
	BOOL _bindsToCellularNetwork;
	BOOL _useDefaultPortFirst;
	NSString* _hostnameOverride;
	WAInetAddress* _hintIP;
	id<XMPPSocketDelegate> _delegate;

}

@property (copy) NSString * hostnameOverride;                                     //@synthesize hostnameOverride=_hostnameOverride - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) WAInetAddress * currentAddress; 
@property (nonatomic,copy,readonly) NSString * currentHost; 
@property (nonatomic,readonly) NSNumber * currentPort; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (assign,nonatomic) BOOL bindsToCellularNetwork;                         //@synthesize bindsToCellularNetwork=_bindsToCellularNetwork - In the implementation block
@property (retain) WAInetAddress * hintIP;                                        //@synthesize hintIP=_hintIP - In the implementation block
@property (copy) NSArray * fallbackAddresses; 
@property (assign,nonatomic) BOOL useDefaultPortFirst;                            //@synthesize useDefaultPortFirst=_useDefaultPortFirst - In the implementation block
@property (assign,nonatomic,__weak) id<XMPPSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlive,nonatomic,readonly) BOOL alive; 
-(void)setUseDefaultPortFirst:(BOOL)arg1 ;
-(NSNumber *)currentPort;
-(void)disconnectImmediately;
-(BOOL)bindsToCellularNetwork;
-(void)setHostnameOverride:(NSString *)arg1 ;
-(void)setBindsToCellularNetwork:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 timeout:(double)arg2 ;
-(void)shutDownSocket;
-(void)disconnectAfterWriting;
-(WAInetAddress *)currentAddress;
-(void)setHintIP:(WAInetAddress *)arg1 ;
-(WAInetAddress *)hintIP;
-(BOOL)isAlive;
-(NSString *)hostnameOverride;
-(BOOL)useDefaultPortFirst;
-(void)writeData:(id)arg1 withTimeout:(double)arg2 ;
-(void)readDataWithTimeout:(double)arg1 ;
-(void)setFallbackAddresses:(NSArray *)arg1 ;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2 ;
-(void)socket:(id)arg1 didReceiveTrust:(SecTrustRef)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 timeout:(double)arg2 dnsResolver:(id)arg3 socketClass:(Class)arg4 hosts:(id)arg5 ;
-(void)updateAndPerformNextState;
-(id)portForCurrentState;
-(BOOL)connectToEndpoint:(id)arg1 onInterface:(id)arg2 error:(id*)arg3 ;
-(void)connectToHost;
-(void)xmppSocketDidDisconnect;
-(void)resetInternalState;
-(void)processHttpChunkData:(id)arg1 ;
-(NSArray *)fallbackAddresses;
-(id)validFallbackAddressesWithFamily:(unsigned char)arg1 override:(BOOL)arg2 ;
-(id)randomFallbackAddressFromArray:(id)arg1 ;
-(id)cellularInterface;
-(id)interleavedFallbackAddressEndpointsWithOverride:(BOOL)arg1 limit:(unsigned long long)arg2 ;
-(void)cork:(BOOL)arg1 ;
-(NSString *)currentHost;
-(void)setDelegate:(id<XMPPSocketDelegate>)arg1 ;
-(id<XMPPSocketDelegate>)delegate;
-(int)currentState;
-(void)connect;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isConnected;
-(id)now;
@end
