/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequestDelegate <NSObject>
@optional
-(void)requestLoading:(id)arg1;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(void)request:(id)arg1 didSendTotalBytes:(unsigned long long)arg2 forExpectedNumBytes:(unsigned long long)arg3;
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(id)logRequestWithType;
-(void)request:(id)arg1 didFailWithError:(id)arg2;

@end

