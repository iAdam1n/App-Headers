/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBStreamLoadDelegate <NSObject>
@optional
-(void)streamLoadDidEnqueueDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 analyticsUUID:(id)arg3;
-(void)streamLoadDidStartDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 retryCount:(unsigned long long)arg3 analyticsUUID:(id)arg4;
-(void)streamLoadDidReceiveSuccessfulResponseForDownloadRequestWithAnalyticsUUID:(id)arg1;
-(void)streamLoadDidCancelDownloadRequestWithAnalyticsUUID:(id)arg1;
-(void)streamLoadDidReceiveFailingResponseForDownloadRequestWithAnalyticsUUID:(id)arg1 error:(id)arg2 status:(id)arg3;
-(void)streamLoadWillRetry:(id)arg1;

@required
-(void)streamLoadDidFinishLoading:(id)arg1;
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 currentResponseChunkIndex:(unsigned long long)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6;

@end
