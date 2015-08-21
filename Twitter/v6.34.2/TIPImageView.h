/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIImageView.h>

@protocol TIPImageFetchRequest;
@class TIPImageFetchOperation, TIPImagePipeline;

@interface TIPImageView : UIImageView {

	TIPImageFetchOperation* _fetchOperation;
	id<TIPImageFetchRequest> _imageFetchRequest;
	long long _priorPriority;
	struct {
		unsigned transitioningAppearance : 1;
		unsigned didCancelOnDisapper : 1;
		unsigned didChangePriorityOnDisappear : 1;
		unsigned isLoadedImageFinal : 1;
	}  _flags;
	float _progress;
	TIPImagePipeline* _imagePipeline;
	long long _disappearanceBehavior;
	long long _imageSource;

}

@property (assign,nonatomic) float progress;                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TIPImagePipeline * imagePipeline;                          //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (assign,nonatomic) long long disappearanceBehavior;                           //@synthesize disappearanceBehavior=_disappearanceBehavior - In the implementation block
@property (assign,nonatomic) long long imageSource;                                     //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) id<TIPImageFetchRequest> imageFetchRequest;              //@synthesize imageFetchRequest=_imageFetchRequest - In the implementation block
-(void)imageFetchOperationDidStart:(id)arg1 ;
-(BOOL)imageFetchOperation:(id)arg1 shouldContinueLoadingAfterFetchingPreviewImage:(id)arg2 fromSource:(long long)arg3 originalDimensions:(CGSize)arg4 URL:(id)arg5 identifier:(id)arg6 ;
-(BOOL)imageFetchOperation:(id)arg1 shouldLoadProgressivelyWithIdentifier:(id)arg2 URL:(id)arg3 imageType:(long long)arg4 originalDimensions:(CGSize)arg5 ;
-(void)imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 progress:(float)arg3 ;
-(void)imageFetchOperation:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(long long)arg3 ;
-(void)imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2 ;
-(void)didStartLoading;
-(TIPImagePipeline *)imagePipeline;
-(void)private_setImagePipeline:(id)arg1 ;
-(void)private_prep;
-(void)private_cancelFetch;
-(void)didUpdateProgress:(float)arg1 ;
-(void)setImageSource:(long long)arg1 ;
-(void)private_reset;
-(void)private_refetch;
-(void)willAppear;
-(void)didDisappear;
-(id<TIPImageFetchRequest>)imageFetchRequest;
-(long long)disappearanceBehavior;
-(void)wasReset;
-(void)private_imageDidUpdate:(id)arg1 ;
-(BOOL)shouldReloadAfterDifferentFetchCompletedWithImage:(id)arg1 dimensions:(CGSize)arg2 identifier:(id)arg3 URL:(id)arg4 ;
-(BOOL)shouldUpdateImageWithPreviewImage:(id)arg1 fromSource:(long long)arg2 originalDimensions:(CGSize)arg3 URL:(id)arg4 identifier:(id)arg5 ;
-(BOOL)shouldContinueLoadingAfterFetchingPreviewImage:(id)arg1 fromSource:(long long)arg2 originalDimensions:(CGSize)arg3 URL:(id)arg4 identifier:(id)arg5 ;
-(void)didUpdateDisplayedImage:(id)arg1 isFinal:(BOOL)arg2 ;
-(BOOL)shouldLoadProgressivelyWithIdentifier:(id)arg1 URL:(id)arg2 imageType:(long long)arg3 originalDimensions:(CGSize)arg4 ;
-(void)didLoadFinalImageFromSource:(long long)arg1 ;
-(void)didFailToLoadFinalImage:(id)arg1 ;
-(id)initWithImagePipeline:(id)arg1 ;
-(void)setImageFetchRequest:(id)arg1 usingViewConstraints:(BOOL)arg2 strongReference:(BOOL)arg3 ;
-(void)setImagePipeline:(TIPImagePipeline *)arg1 ;
-(void)setDisappearanceBehavior:(long long)arg1 ;
-(long long)imageSource;
-(void)didAppear;
-(void)willDisappear;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

