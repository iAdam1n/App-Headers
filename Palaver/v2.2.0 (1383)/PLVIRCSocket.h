/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/GCDAsyncSocketDelegate.h>

@protocol PLVIRCSocketDelegate;
@class NSString, GCDAsyncSocket;

@interface PLVIRCSocket : NSObject <GCDAsyncSocketDelegate> {

	unsigned short _port;
	id<PLVIRCSocketDelegate> _delegate;
	NSString* _hostname;
	unsigned long long _stringEncoding;
	GCDAsyncSocket* _socket;

}

@property (nonatomic,__weak,readonly) id<PLVIRCSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostname;                              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned long long stringEncoding;                     //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,readonly) GCDAsyncSocket * socket;                               //@synthesize socket=_socket - In the implementation block
-(void)startTLS:(BOOL)arg1 ;
-(void)parseLine:(id)arg1 ;
-(id)initWithHostname:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3 ;
-(void)sendLine:(id)arg1 ;
-(void)disconnectImmediately;
-(unsigned long long)stringEncoding;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4 ;
-(void)socketDidSecure:(id)arg1 ;
-(GCDAsyncSocket *)socket;
-(id)description;
-(id<PLVIRCSocketDelegate>)delegate;
-(void)disconnect;
-(unsigned short)port;
-(void)read;
-(void)parseData:(id)arg1 ;
-(NSString *)hostname;
@end

