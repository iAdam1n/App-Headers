/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
-(void)sessionDidBecomeInactive:(id)arg1;
-(void)sessionDidDeactivate:(id)arg1;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2;
-(void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
-(void)session:(id)arg1 didReceiveFile:(id)arg2;
-(void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
-(void)sessionReachabilityDidChange:(id)arg1;
-(void)sessionWatchStateDidChange:(id)arg1;

@end
