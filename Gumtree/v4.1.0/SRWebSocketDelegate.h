/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SRWebSocketDelegate <NSObject>
@optional
-(void)webSocketDidOpen:(id)arg1;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2;
-(void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;

@required
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;

@end

