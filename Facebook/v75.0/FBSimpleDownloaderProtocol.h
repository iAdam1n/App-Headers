/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSimpleDownloaderProtocol <NSObject>
@required
-(void)cancelFetchWithHandle:(id)arg1;
-(id)fetchWithRemoteURL:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4;

@end
