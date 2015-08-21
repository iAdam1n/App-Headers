/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FLAnimatedImageView.h>

@protocol FBMPhotoViewDelegate, FBMPhotoViewImageRequestingCancelable;
@class MNPhotoViewModel, UIActivityIndicatorView, UITapGestureRecognizer;

@interface FBMPhotoView : FLAnimatedImageView {

	BOOL _showSpinnerWhileLoading;
	BOOL _isShowingPlaceholder;
	MNPhotoViewModel* _photoViewModel;
	long long _originalContentMode;
	id<FBMPhotoViewDelegate> _delegate;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _singleTap;
	id<FBMPhotoViewImageRequestingCancelable> _photoViewImageRequest;

}

@property (nonatomic,copy) MNPhotoViewModel * photoViewModel;                                    //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (assign,nonatomic) BOOL showSpinnerWhileLoading;                                       //@synthesize showSpinnerWhileLoading=_showSpinnerWhileLoading - In the implementation block
@property (assign,nonatomic) long long originalContentMode;                                      //@synthesize originalContentMode=_originalContentMode - In the implementation block
@property (assign,nonatomic,__weak) id<FBMPhotoViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isShowingPlaceholder;                                        //@synthesize isShowingPlaceholder=_isShowingPlaceholder - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                  //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTap;                                 //@synthesize singleTap=_singleTap - In the implementation block
@property (retain) id<FBMPhotoViewImageRequestingCancelable> photoViewImageRequest;              //@synthesize photoViewImageRequest=_photoViewImageRequest - In the implementation block
-(UITapGestureRecognizer *)singleTap;
-(void)setSingleTap:(UITapGestureRecognizer *)arg1 ;
-(MNPhotoViewModel *)photoViewModel;
-(void)setPhotoViewModel:(MNPhotoViewModel *)arg1 ;
-(void)updateForPlaceholder:(BOOL)arg1 ;
-(void)setDisplayPhotoImage:(id)arg1 ;
-(BOOL)showSpinnerWhileLoading;
-(long long)originalContentMode;
-(id)initWithFrame:(CGRect)arg1 useNodeGestures:(BOOL)arg2 ;
-(void)setOriginalContentMode:(long long)arg1 ;
-(void)setShowSpinnerWhileLoading:(BOOL)arg1 ;
-(id<FBMPhotoViewImageRequestingCancelable>)photoViewImageRequest;
-(void)setDisplayPhotoImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPhotoViewImageRequest:(id<FBMPhotoViewImageRequestingCancelable>)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMPhotoViewDelegate>)arg1 ;
-(id<FBMPhotoViewDelegate>)delegate;
-(BOOL)isShowingPlaceholder;
-(void)handleSingleTap:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

