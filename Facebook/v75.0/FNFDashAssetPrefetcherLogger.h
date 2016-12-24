/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDashAssetPrefetcherLogger <NSObject>
@required
-(void)logPrefetchStartedForVideoID:(id)arg1;
-(void)logPrefetchAvailableForVideoID:(id)arg1 isPrefetched:(BOOL)arg2 bytesRequested:(unsigned long long)arg3 bytesPrefetched:(unsigned long long)arg4 prefetchLeadTimeInMS:(unsigned long long)arg5 isKnownURL:(BOOL)arg6;
-(void)logPrefetchDiscardedForVideoID:(id)arg1 bytesRequested:(unsigned long long)arg2 bytesPrefetched:(unsigned long long)arg3 prefetchLeadTimeInMS:(unsigned long long)arg4;

@end
