/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNativeCustomEventDelegate;
@class MPImageDownloadQueue;

@interface MPNativeCustomEvent : NSObject {

	id<MPNativeCustomEventDelegate> _delegate;
	MPImageDownloadQueue* _imageDownloadQueue;

}

@property (assign,nonatomic,__weak) id<MPNativeCustomEventDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPImageDownloadQueue * imageDownloadQueue;                    //@synthesize imageDownloadQueue=_imageDownloadQueue - In the implementation block
-(MPImageDownloadQueue *)imageDownloadQueue;
-(void)setImageDownloadQueue:(MPImageDownloadQueue *)arg1 ;
-(void)precacheImagesWithURLs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestAdWithCustomEventInfo:(id)arg1 ;
-(void)setDelegate:(id<MPNativeCustomEventDelegate>)arg1 ;
-(id)init;
-(id<MPNativeCustomEventDelegate>)delegate;
@end

