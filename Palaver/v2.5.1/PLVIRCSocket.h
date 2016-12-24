/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:32:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F45DA058-3924-4296-8466-9187DEE2ADBC/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
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

@property (nonatomic,readonly) GCDAsyncSocket * socket;                               //@synthesize socket=_socket - In the implementation block
@property (nonatomic,__weak,readonly) id<PLVIRCSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostname;                              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned long long stringEncoding;                     //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startTLS:(BOOL)arg1 ;
-(void)parseLine:(id)arg1 ;
-(id)initWithHostname:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3 ;
-(void)sendLine:(id)arg1 ;
-(void)disconnectImmediately;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4 ;
-(void)socketDidSecure:(id)arg1 ;
-(void)socket:(id)arg1 didReceiveTrust:(SecTrustRef)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)parseData:(id)arg1 ;
-(NSString *)description;
-(id<PLVIRCSocketDelegate>)delegate;
-(void)disconnect;
-(unsigned short)port;
-(unsigned long long)stringEncoding;
-(NSString *)hostname;
-(GCDAsyncSocket *)socket;
-(void)read;
@end
