/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GCDAsyncSocketDelegate
@optional
-(id)newSocketQueueForConnectionFromAddress:(id)arg1 onSocket:(id)arg2;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
-(void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
-(void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(void)socketDidCloseReadStream:(id)arg1;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)socketDidSecure:(id)arg1;

@end
