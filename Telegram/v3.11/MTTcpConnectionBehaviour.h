/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTTcpConnectionBehaviourDelegate;
@class MTTimer, MTQueue;

@interface MTTcpConnectionBehaviour : NSObject {

	MTTimer* _backoffTimer;
	long long _backoffCount;
	BOOL _needsReconnection;
	id<MTTcpConnectionBehaviourDelegate> _delegate;
	MTQueue* _queue;

}

@property (assign,nonatomic,__weak) id<MTTcpConnectionBehaviourDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MTQueue * queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL needsReconnection;                                            //@synthesize needsReconnection=_needsReconnection - In the implementation block
-(void)timerEvent;
-(void)setNeedsReconnection:(BOOL)arg1 ;
-(void)requestConnection;
-(void)connectionOpened;
-(void)connectionClosed;
-(void)connectionValidDataReceived;
-(void)clearBackoff;
-(BOOL)needsReconnection;
-(void)setDelegate:(id<MTTcpConnectionBehaviourDelegate>)arg1 ;
-(void)dealloc;
-(id<MTTcpConnectionBehaviourDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)invalidateTimer;
-(MTQueue *)queue;
-(void)startTimer:(double)arg1 ;
@end
