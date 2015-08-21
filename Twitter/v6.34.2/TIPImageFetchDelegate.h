/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TIPImageFetchDelegate <NSObject>
@optional
-(void)imageFetchOperationDidStart:(id)arg1;
-(BOOL)imageFetchOperation:(id)arg1 shouldContinueLoadingAfterFetchingPreviewImage:(id)arg2 fromSource:(long long)arg3 originalDimensions:(CGSize)arg4 URL:(id)arg5 identifier:(id)arg6;
-(BOOL)imageFetchOperation:(id)arg1 shouldLoadProgressivelyWithIdentifier:(id)arg2 URL:(id)arg3 imageType:(long long)arg4 originalDimensions:(CGSize)arg5;
-(void)imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 progress:(float)arg3;
-(void)imageFetchOperation:(id)arg1 didLoadFirstAnimatedImageFrame:(id)arg2 progress:(float)arg3;
-(void)imageFetchOperation:(id)arg1 didUpdateProgress:(float)arg2;
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(long long)arg3;
-(void)imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;

@end

