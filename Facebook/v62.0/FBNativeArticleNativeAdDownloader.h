/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNativeArticleNativeAdDownloaderDelegate;
#import <Facebook/Facebook-Structs.h>
@class FBGraphQLQuery, FBUserSession, NSObject;

@interface FBNativeArticleNativeAdDownloader : NSObject {

	FBGraphQLQuery* _query;
	/*^block*/id _extractor;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _downloadFired;
	mutex _asyncMutex;
	id<FBNativeArticleNativeAdDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeArticleNativeAdDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithQuery:(id)arg1 responseParser:(/*^block*/id)arg2 callbackQueue:(id)arg3 session:(id)arg4 ;
+(id)nativeAdElementDownloaderWithGraphQLID:(id)arg1 imageSize:(CGSize)arg2 iconSize:(CGSize)arg3 adChoicesIconSize:(CGSize)arg4 scale:(double)arg5 adDownloadSessionID:(id)arg6 callbackQueue:(id)arg7 session:(id)arg8 ;
+(id)htmlNativeAdElementDownloaderWithGraphQLID:(id)arg1 placementID:(id)arg2 imageSize:(CGSize)arg3 iconSize:(CGSize)arg4 adChoicesIconSize:(CGSize)arg5 scale:(double)arg6 adDownloadSessionID:(id)arg7 callbackQueue:(id)arg8 session:(id)arg9 ;
-(BOOL)isDownloadFired;
-(void)setDownloadFired:(BOOL)arg1 ;
-(void)downloadWithNetworkRequestThresholdInSeconds:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBNativeArticleNativeAdDownloaderDelegate>)arg1 ;
-(id<FBNativeArticleNativeAdDownloaderDelegate>)delegate;
@end
