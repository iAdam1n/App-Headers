/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@end

