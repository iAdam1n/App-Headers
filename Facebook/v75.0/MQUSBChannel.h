/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MQUSBChannel : NSObject {

	NSObject*<OS_dispatch_io> channel_;
	NSObject*<OS_dispatch_queue> queue_;
	unsigned nextPacketTag_;
	NSMutableDictionary* responseQueue_;
	BOOL autoReadPackets_;
	BOOL isReadingPackets_;

}

@property (readonly) NSObject*<OS_dispatch_io> dispatchChannel; 
@property (readonly) int fileDescriptor; 
+(id)packetDictionaryWithPacketType:(id)arg1 payload:(id)arg2 ;
-(BOOL)openOnQueue:(id)arg1 error:(id*)arg2 onEnd:(/*^block*/id)arg3 ;
-(void)listenWithBroadcastHandler:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)errorFromPlistResponse:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_io>)dispatchChannel;
-(void)sendRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)scheduleReadPacketWithBroadcastHandler:(/*^block*/id)arg1 ;
-(unsigned)nextPacketTag;
-(void)sendPacket:(id)arg1 tag:(unsigned)arg2 callback:(/*^block*/id)arg3 ;
-(void)setNeedsReadingPacket;
-(void)scheduleReadPacketWithCallback:(/*^block*/id)arg1 ;
-(void)sendDispatchData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)sendPacketOfType:(unsigned)arg1 overProtocol:(unsigned)arg2 tag:(unsigned)arg3 payload:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)sendData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)stop;
-(BOOL)valid;
-(int)fileDescriptor;
@end
