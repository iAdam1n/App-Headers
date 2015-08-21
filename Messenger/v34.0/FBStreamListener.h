/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBStreamListener <NSObject>
@optional
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 currentResponseChunkIndex:(unsigned long long)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(unsigned long long)arg3 requestAnalyticsUUID:(id)arg4;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3;
-(void)stream:(id)arg1 willRetryRequestWithLoadType:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3;

@required
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;

@end

