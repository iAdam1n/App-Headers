/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <WhatsApp/WALinkLabelDelegate.h>

@protocol WAPhotoMoveAndScaleViewControllerDelegate;
@class WAPhotoMoveAndScaleCropView, UIActivityIndicatorView, UIView, UIImageView, UIImage, NSURL, UIScrollView, UILabel, UIButton, WALinkLabel, NSString;

@interface WAPhotoMoveAndScaleViewController : WAViewController <UIScrollViewDelegate, WALinkLabelDelegate> {

	WAPhotoMoveAndScaleCropView* _cropView;
	UIActivityIndicatorView* _spinner;
	BOOL _statusBarWasHidden;
	UIView* _imageContainerView;
	UIImageView* _imageView;
	UIImage* _blurredImage;
	UIImageView* _blurredImageView;
	double _blurredImageScaleFactor;
	BOOL _adjustsStatusBarAutomatically;
	unsigned long long _mode;
	UIImage* _originalImage;
	double _minimumWidth;
	double _maximumWidth;
	id<WAPhotoMoveAndScaleViewControllerDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSURL* _fullResolutionImageURLToSaveOnCompletion;
	NSURL* _sourceURL;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIView* _bottomView;
	UIImageView* _bottomViewBackgroundView;
	UIImageView* _bottomViewShadowView;
	UIView* _footerContentView;
	UIImageView* _staticImageView;
	WALinkLabel* _copyrightNotice;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                                        //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIImageView * bottomViewBackgroundView;                                     //@synthesize bottomViewBackgroundView=_bottomViewBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * bottomViewShadowView;                                         //@synthesize bottomViewShadowView=_bottomViewShadowView - In the implementation block
@property (nonatomic,retain) UIView * footerContentView;                                                 //@synthesize footerContentView=_footerContentView - In the implementation block
@property (nonatomic,retain) UIImageView * staticImageView;                                              //@synthesize staticImageView=_staticImageView - In the implementation block
@property (nonatomic,retain) WALinkLabel * copyrightNotice;                                              //@synthesize copyrightNotice=_copyrightNotice - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                                                    //@synthesize originalImage=_originalImage - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                        //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                        //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic,__weak) id<WAPhotoMoveAndScaleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL adjustsStatusBarAutomatically;                                         //@synthesize adjustsStatusBarAutomatically=_adjustsStatusBarAutomatically - In the implementation block
@property (nonatomic,copy) NSURL * fullResolutionImageURLToSaveOnCompletion;                             //@synthesize fullResolutionImageURLToSaveOnCompletion=_fullResolutionImageURLToSaveOnCompletion - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                                            //@synthesize sourceURL=_sourceURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2 ;
-(void)relayout;
-(id)imageForCurrentZoomRect;
-(void)configureScrollViewForZooming;
-(void)setAdjustsStatusBarAutomatically:(BOOL)arg1 ;
-(void)setFullResolutionImageURLToSaveOnCompletion:(NSURL *)arg1 ;
-(UIImageView *)staticImageView;
-(void)makeBlurredImage;
-(void)resetImageViewLayout;
-(void)layoutFooter;
-(UIImageView *)bottomViewBackgroundView;
-(UIImageView *)bottomViewShadowView;
-(WALinkLabel *)copyrightNotice;
-(void)updateInterfaceForMode;
-(BOOL)adjustsStatusBarAutomatically;
-(void)layoutCopyrightNotice;
-(UIView *)footerContentView;
-(NSURL *)fullResolutionImageURLToSaveOnCompletion;
-(void)recenterContainerView;
-(void)setBottomViewBackgroundView:(UIImageView *)arg1 ;
-(void)setBottomViewShadowView:(UIImageView *)arg1 ;
-(void)setFooterContentView:(UIView *)arg1 ;
-(void)setStaticImageView:(UIImageView *)arg1 ;
-(void)setCopyrightNotice:(WALinkLabel *)arg1 ;
-(void)setDelegate:(id<WAPhotoMoveAndScaleViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id<WAPhotoMoveAndScaleViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(UIScrollView *)scrollView;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIView *)bottomView;
-(void)done:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(UIImage *)originalImage;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
@end
