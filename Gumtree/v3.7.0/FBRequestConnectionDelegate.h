/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBRequestConnectionDelegate <NSObject>
@optional
-(void)requestConnectionWillBeginLoading:(id)arg1 fromCache:(BOOL)arg2;
-(void)requestConnectionDidFinishLoading:(id)arg1 fromCache:(BOOL)arg2;
-(void)requestConnection:(id)arg1 didFailWithError:(id)arg2;
-(void)requestConnection:(id)arg1 willRetryWithRequestConnection:(id)arg2;
-(void)requestConnection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;

@end

