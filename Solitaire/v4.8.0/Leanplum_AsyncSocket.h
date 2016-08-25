/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSArray, NSTimer, NSMutableArray, Leanplum_AsyncReadPacket, NSMutableData, Leanplum_AsyncWritePacket;

@interface Leanplum_AsyncSocket : NSObject {

	CFSocketRef theSocket4;
	CFSocketRef theSocket6;
	CFReadStreamRef theReadStream;
	CFWriteStreamRef theWriteStream;
	CFRunLoopSourceRef theSource4;
	CFRunLoopSourceRef theSource6;
	CFRunLoopRef theRunLoop;
	SCD_Struct_Le44* theContext;
	NSArray* theRunLoopModes;
	NSTimer* theConnectTimer;
	NSMutableArray* theReadQueue;
	Leanplum_AsyncReadPacket* theCurrentRead;
	NSTimer* theReadTimer;
	NSMutableData* partialReadBuffer;
	NSMutableArray* theWriteQueue;
	Leanplum_AsyncWritePacket* theCurrentWrite;
	NSTimer* theWriteTimer;
	id theDelegate;
	unsigned short theFlags;
	long long theUserData;

}
+(id)CRLFData;
+(id)CRData;
+(id)LFData;
+(id)ZeroData;
-(id)initWithDelegate:(id)arg1 userData:(long long)arg2 ;
-(void)runLoopUnscheduleReadStream;
-(void)runLoopUnscheduleWriteStream;
-(void)runLoopRemoveSource:(CFRunLoopSourceRef)arg1 ;
-(void)runLoopRemoveTimer:(id)arg1 ;
-(void)runLoopAddTimer:(id)arg1 ;
-(void)runLoopAddSource:(CFRunLoopSourceRef)arg1 ;
-(BOOL)attachStreamsToRunLoop:(id)arg1 error:(id*)arg2 ;
-(void)maybeDequeueRead;
-(void)maybeDequeueWrite;
-(void)maybeScheduleDisconnect;
-(BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id*)arg3 ;
-(CFSocketRef)newAcceptSocketForAddress:(id)arg1 error:(id*)arg2 ;
-(BOOL)attachSocketsToRunLoop:(id)arg1 error:(id*)arg2 ;
-(unsigned short)localPort:(CFSocketRef)arg1 ;
-(id)getSocketError;
-(BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)configureStreamsAndReturnError:(id*)arg1 ;
-(BOOL)openStreamsAndReturnError:(id*)arg1 ;
-(void)startConnectTimeout:(double)arg1 ;
-(BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(BOOL)createSocketForAddress:(id)arg1 error:(id*)arg2 ;
-(BOOL)configureSocketAndReturnError:(id*)arg1 ;
-(BOOL)connectSocketToAddress:(id)arg1 error:(id*)arg2 ;
-(void)doConnectTimeout:(id)arg1 ;
-(void)endConnectTimeout;
-(id)getConnectTimeoutError;
-(id)getAbortError;
-(BOOL)createStreamsFromNative:(int)arg1 error:(id*)arg2 ;
-(id)getStreamError;
-(BOOL)setSocketFromStreamsAndReturnError:(id*)arg1 ;
-(id)connectedHost;
-(unsigned short)connectedPort;
-(void)recoverUnreadData;
-(void)emptyQueues;
-(void)endCurrentRead;
-(void)endCurrentWrite;
-(id)errorFromCFStreamError:(SCD_Struct_Le45)arg1 ;
-(BOOL)isSocketConnected;
-(BOOL)areStreamsConnected;
-(id)connectedHost:(CFSocketRef)arg1 ;
-(unsigned short)connectedPort:(CFSocketRef)arg1 ;
-(id)localHost:(CFSocketRef)arg1 ;
-(id)addressHost:(CFDataRef)arg1 ;
-(unsigned short)addressPort:(CFDataRef)arg1 ;
-(void)scheduleDequeueRead;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(long long)arg3 tag:(long long)arg4 ;
-(void)maybeStartTLS;
-(void)doReadTimeout:(id)arg1 ;
-(void)doBytesAvailable;
-(long long)readIntoBuffer:(char*)arg1 maxLength:(long long)arg2 ;
-(void)completeCurrentRead;
-(id)getReadMaxedOutError;
-(id)getReadTimeoutError;
-(void)scheduleDequeueWrite;
-(void)doWriteTimeout:(id)arg1 ;
-(void)doSendBytes;
-(BOOL)canAcceptBytes;
-(void)completeCurrentWrite;
-(id)getWriteTimeoutError;
-(void)doSocketOpen:(CFSocketRef)arg1 withCFSocketError:(long long)arg2 ;
-(void)doAcceptWithSocket:(int)arg1 ;
-(void)doStreamOpen;
-(void)onTLSHandshakeSuccessful;
-(BOOL)canSafelySetDelegate;
-(CFSocketRef)getCFSocket;
-(CFReadStreamRef)getCFReadStream;
-(CFWriteStreamRef)getCFWriteStream;
-(float)progressOfReadReturningTag:(long long*)arg1 bytesDone:(long long*)arg2 total:(long long*)arg3 ;
-(float)progressOfWriteReturningTag:(long long*)arg1 bytesDone:(long long*)arg2 total:(long long*)arg3 ;
-(void)enablePreBuffering;
-(BOOL)moveToRunLoop:(id)arg1 ;
-(BOOL)acceptOnPort:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)connectToAddress:(id)arg1 error:(id*)arg2 ;
-(void)disconnectAfterReading;
-(void)disconnectAfterWriting;
-(void)disconnectAfterReadingAndWriting;
-(id)unreadData;
-(id)getErrnoError;
-(id)localHost;
-(id)connectedAddress;
-(BOOL)isIPv4;
-(void)readDataToLength:(long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(void)readDataWithTimeout:(double)arg1 tag:(long long)arg2 ;
-(void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(void)startTLS:(id)arg1 ;
-(void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(CFSocketRef)arg2 withAddress:(id)arg3 withData:(const void*)arg4 ;
-(void)doCFReadStreamCallback:(unsigned long long)arg1 forStream:(CFReadStreamRef)arg2 ;
-(void)doCFWriteStreamCallback:(unsigned long long)arg1 forStream:(CFWriteStreamRef)arg2 ;
-(id)runLoopModes;
-(BOOL)setRunLoopModes:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)close;
-(long long)userData;
-(void)setUserData:(long long)arg1 ;
-(void)disconnect;
-(unsigned short)localPort;
-(BOOL)isIPv6;
-(id)localAddress;
-(BOOL)isConnected;
-(void)closeWithError:(id)arg1 ;
-(BOOL)hasBytesAvailable;
@end

