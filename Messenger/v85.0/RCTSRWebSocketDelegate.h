/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTSRWebSocketDelegate <NSObject>
@optional
-(void)webSocketDidOpen:(id)arg1;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2;
-(void)webSocket:(id)arg1 didReceivePong:(id)arg2;
-(void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;

@required
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;

@end
