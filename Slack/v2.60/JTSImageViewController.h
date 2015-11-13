/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKFileDocumentViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol JTSImageViewControllerDismissalDelegate, JTSImageViewControllerOptionsDelegate, JTSImageViewControllerInteractionsDelegate, JTSImageViewControllerAccessibilityDelegate, JTSImageViewControllerAnimationDelegate;
@class JTSImageInfo, UIImage, SLKImage, UIView, UIImageView, FLAnimatedImageView, UIScrollView, UITextView, UIProgressView, UIActivityIndicatorView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIDynamicAnimator, UIAttachmentBehavior, NSURLSessionDataTask, NSTimer, NSString;

@interface JTSImageViewController : SLKFileDocumentViewController <UIScrollViewDelegate, UITextViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {

	BOOL _animatingOut;
	JTSImageInfo* _imageInfo;
	UIImage* _image;
	long long _mode;
	long long _backgroundOptions;
	id<JTSImageViewControllerDismissalDelegate> _dismissalDelegate;
	id<JTSImageViewControllerOptionsDelegate> _optionsDelegate;
	id<JTSImageViewControllerInteractionsDelegate> _interactionsDelegate;
	id<JTSImageViewControllerAccessibilityDelegate> _accessibilityDelegate;
	id<JTSImageViewControllerAnimationDelegate> _animationDelegate;
	SLKImage* _displayImage;
	long long _transition;
	long long _lastUsedOrientation;
	UIView* _progressContainer;
	UIView* _outerContainerForScrollView;
	UIView* _snapshotView;
	UIView* _blurredSnapshotView;
	UIView* _blackBackdrop;
	UIView* _containerView;
	UIImageView* _imageView;
	UIImageView* _highResFileImageView;
	FLAnimatedImageView* _animatedImageView;
	UIScrollView* _scrollView;
	UITextView* _textView;
	UIProgressView* _progressView;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _singleTapperPhoto;
	UITapGestureRecognizer* _doubleTapperPhoto;
	UITapGestureRecognizer* _singleTapperText;
	UILongPressGestureRecognizer* _longPresserPhoto;
	UIPanGestureRecognizer* _panRecognizer;
	UIDynamicAnimator* _animator;
	UIAttachmentBehavior* _attachmentBehavior;
	NSURLSessionDataTask* _imageDownloadDataTask;
	NSTimer* _downloadProgressTimer;
	struct {
		BOOL isAnimatingAPresentationOrDismissal;
		BOOL isDismissing;
		BOOL isTransitioningFromInitialModalToInteractiveState;
		BOOL viewHasAppeared;
		BOOL isRotating;
		BOOL isPresented;
		BOOL rotationTransformIsDirty;
		BOOL imageIsFlickingAwayForDismissal;
		BOOL isDraggingImage;
		BOOL scrollViewIsAnimatingAZoom;
		BOOL imageIsBeingReadFromDisk;
		BOOL isManuallyResizingTheScrollViewFrame;
		BOOL imageDownloadFailed;
	}  _flags;
	CGPoint _imageDragStartingPoint;
	UIOffset _imageDragOffsetFromActualTranslation;
	UIOffset _imageDragOffsetFromImageCenter;
	CGAffineTransform _currentSnapshotRotationTransform;
	SCD_Struct_JT15 _startingInfo;

}

@property (nonatomic,retain) JTSImageInfo * imageInfo;                                                                  //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long mode;                                                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long backgroundOptions;                                                               //@synthesize backgroundOptions=_backgroundOptions - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerDismissalDelegate> dismissalDelegate;                      //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerOptionsDelegate> optionsDelegate;                          //@synthesize optionsDelegate=_optionsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerInteractionsDelegate> interactionsDelegate;                //@synthesize interactionsDelegate=_interactionsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerAnimationDelegate> animationDelegate;                      //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (nonatomic,retain) SLKImage * displayImage;                                                                   //@synthesize displayImage=_displayImage - In the implementation block
@property (assign,getter=isAnimatingOut,nonatomic) BOOL animatingOut;                                                   //@synthesize animatingOut=_animatingOut - In the implementation block
@property (assign,nonatomic) long long transition;                                                                      //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT16 startingInfo;                                                              //@synthesize startingInfo=_startingInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT17 flags;                                                                     //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long lastUsedOrientation;                                                             //@synthesize lastUsedOrientation=_lastUsedOrientation - In the implementation block
@property (assign,nonatomic) CGAffineTransform currentSnapshotRotationTransform;                                        //@synthesize currentSnapshotRotationTransform=_currentSnapshotRotationTransform - In the implementation block
@property (nonatomic,retain) UIView * progressContainer;                                                                //@synthesize progressContainer=_progressContainer - In the implementation block
@property (nonatomic,retain) UIView * outerContainerForScrollView;                                                      //@synthesize outerContainerForScrollView=_outerContainerForScrollView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * blurredSnapshotView;                                                              //@synthesize blurredSnapshotView=_blurredSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * blackBackdrop;                                                                    //@synthesize blackBackdrop=_blackBackdrop - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highResFileImageView;                                                        //@synthesize highResFileImageView=_highResFileImageView - In the implementation block
@property (nonatomic,retain) FLAnimatedImageView * animatedImageView;                                                   //@synthesize animatedImageView=_animatedImageView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                             //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                         //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapperPhoto;                                                //@synthesize singleTapperPhoto=_singleTapperPhoto - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapperPhoto;                                                //@synthesize doubleTapperPhoto=_doubleTapperPhoto - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapperText;                                                 //@synthesize singleTapperText=_singleTapperText - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPresserPhoto;                                           //@synthesize longPresserPhoto=_longPresserPhoto - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                                                    //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                                                              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * attachmentBehavior;                                                 //@synthesize attachmentBehavior=_attachmentBehavior - In the implementation block
@property (assign,nonatomic) CGPoint imageDragStartingPoint;                                                            //@synthesize imageDragStartingPoint=_imageDragStartingPoint - In the implementation block
@property (assign,nonatomic) UIOffset imageDragOffsetFromActualTranslation;                                             //@synthesize imageDragOffsetFromActualTranslation=_imageDragOffsetFromActualTranslation - In the implementation block
@property (assign,nonatomic) UIOffset imageDragOffsetFromImageCenter;                                                   //@synthesize imageDragOffsetFromImageCenter=_imageDragOffsetFromImageCenter - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * imageDownloadDataTask;                                              //@synthesize imageDownloadDataTask=_imageDownloadDataTask - In the implementation block
@property (nonatomic,retain) NSTimer * downloadProgressTimer;                                                           //@synthesize downloadProgressTimer=_downloadProgressTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAnimatingOut;
-(id)initWithImageInfo:(id)arg1 mode:(long long)arg2 backgroundStyle:(long long)arg3 ;
-(void)setOptionsDelegate:(id<JTSImageViewControllerOptionsDelegate>)arg1 ;
-(void)setInteractionsDelegate:(id<JTSImageViewControllerInteractionsDelegate>)arg1 ;
-(void)showFromViewController:(id)arg1 transition:(long long)arg2 ;
-(FLAnimatedImageView *)animatedImageView;
-(void)setAnimatedImageView:(FLAnimatedImageView *)arg1 ;
-(UIImageView *)highResFileImageView;
-(void)setHighResFileImageView:(UIImageView *)arg1 ;
-(void)downloadImage;
-(void)downloadHighResImage;
-(void)setupImageAndDownloadIfNecessary:(id)arg1 ;
-(void)showImageViewerByScalingDownFromOffscreenPositionWithViewController:(id)arg1 ;
-(void)showImageViewerByExpandingFromOriginalPositionFromViewController:(id)arg1 ;
-(void)showAltTextFromViewController:(id)arg1 ;
-(void)dismissByExpandingAltTextToOffscreenPosition;
-(void)dismissByCleaningUpAfterImageWasFlickedOffscreen;
-(void)dismissByExpandingImageToOffscreenPosition;
-(void)dismissByCollapsingImageBackToOriginalPosition;
-(void)cancelProgressTimer;
-(void)viewDidLoadForImageMode;
-(void)viewDidLoadForAltTextMode;
-(void)updateLayoutsForCurrentOrientation;
-(long long)lastUsedOrientation;
-(void)setLastUsedOrientation:(long long)arg1 ;
-(void)cancelCurrentImageDrag:(BOOL)arg1 ;
-(void)updateDimmingViewForCurrentZoomScale:(BOOL)arg1 ;
-(void)setDisplayImage:(SLKImage *)arg1 ;
-(void)updateInterfaceWithImage:(id)arg1 ;
-(void)updateInterfaceWithHighResImage:(id)arg1 ;
-(void)setBlackBackdrop:(UIView *)arg1 ;
-(UIView *)blackBackdrop;
-(id)accessibilityHintZoomedOut;
-(void)setupImageModeGestureRecognizers;
-(void)setupTextViewTapGestureRecognizer;
-(void)imageDoubleTapped:(id)arg1 ;
-(void)setDoubleTapperPhoto:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTapperPhoto;
-(void)setLongPresserPhoto:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPresserPhoto;
-(void)imageLongPressed:(id)arg1 ;
-(void)imageSingleTapped:(id)arg1 ;
-(void)setSingleTapperPhoto:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)singleTapperPhoto;
-(void)dismissingPanGestureRecognizerPanned:(id)arg1 ;
-(void)textViewSingleTapped:(id)arg1 ;
-(void)setSingleTapperText:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)singleTapperText;
-(id)snapshotFromParentmostViewController:(id)arg1 ;
-(long long)backgroundOptions;
-(id)blurredSnapshotFromParentmostViewController:(id)arg1 ;
-(void)setBlurredSnapshotView:(UIView *)arg1 ;
-(UIView *)blurredSnapshotView;
-(void)updateScrollViewAndImageViewForCurrentMetrics;
-(void)addMotionEffectsToSnapshotView;
-(double)alphaForBackgroundDimmingOverlay;
-(CGRect)resizedFrameForAutorotatingImageView:(CGSize)arg1 ;
-(UIView *)progressContainer;
-(void)verticallyCenterTextInTextView;
-(CGAffineTransform)currentSnapshotRotationTransform;
-(void)removeMotionEffectsFromSnapshotView;
-(double)backgroundBlurRadius;
-(id)backgroundColorForImageView;
-(void)setCurrentSnapshotRotationTransform:(CGAffineTransform)arg1 ;
-(UIEdgeInsets)contentInsetForScrollView:(double)arg1 ;
-(id)accessibilityHintZoomedIn;
-(id<JTSImageViewControllerInteractionsDelegate>)interactionsDelegate;
-(void)startImageDragging:(CGPoint)arg1 translationOffset:(UIOffset)arg2 ;
-(CGPoint)imageDragStartingPoint;
-(UIOffset)imageDragOffsetFromActualTranslation;
-(UIAttachmentBehavior *)attachmentBehavior;
-(void)dismissImageWithFlick:(CGPoint)arg1 ;
-(void)setImageDragStartingPoint:(CGPoint)arg1 ;
-(void)setImageDragOffsetFromActualTranslation:(UIOffset)arg1 ;
-(void)setImageDragOffsetFromImageCenter:(UIOffset)arg1 ;
-(void)setAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(double)appropriateAngularResistanceForView:(id)arg1 ;
-(double)appropriateDensityForView:(id)arg1 ;
-(UIOffset)imageDragOffsetFromImageCenter;
-(BOOL)imageViewIsOffscreen;
-(void)progressTimerFired:(id)arg1 ;
-(void)setDownloadProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)downloadProgressTimer;
-(NSURLSessionDataTask *)imageDownloadDataTask;
-(id)defaultAccessibilityHintForScrollView:(BOOL)arg1 ;
-(CGPoint)targetDismissalPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(id)defaultAccessibilityLabelForScrollView;
-(void)setImageInfo:(JTSImageInfo *)arg1 ;
-(void)setBackgroundOptions:(long long)arg1 ;
-(void)setAnimatingOut:(BOOL)arg1 ;
-(SCD_Struct_JT16)startingInfo;
-(void)setStartingInfo:(SCD_Struct_JT16)arg1 ;
-(void)setProgressContainer:(UIView *)arg1 ;
-(UIView *)outerContainerForScrollView;
-(void)setOuterContainerForScrollView:(UIView *)arg1 ;
-(void)setImageDownloadDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setAccessibilityDelegate:(id<JTSImageViewControllerAccessibilityDelegate>)arg1 ;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(id<JTSImageViewControllerOptionsDelegate>)optionsDelegate;
-(void)startProgressTimer;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(UIView *)containerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIView *)snapshotView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIImage *)image;
-(void)setAnimationDelegate:(id<JTSImageViewControllerAnimationDelegate>)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTransition:(long long)arg1 ;
-(long long)transition;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)modalTransitionStyle;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(UIImageView *)imageView;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)copy:(id)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)dismiss:(BOOL)arg1 ;
-(UITextView *)textView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(SLKImage *)displayImage;
-(UIDynamicAnimator *)animator;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(JTSImageInfo *)imageInfo;
-(void)setDismissalDelegate:(id<JTSImageViewControllerDismissalDelegate>)arg1 ;
-(id<JTSImageViewControllerDismissalDelegate>)dismissalDelegate;
-(void)setFile:(id)arg1 ;
-(void)setFlags:(SCD_Struct_JT17)arg1 ;
-(SCD_Struct_JT17)flags;
-(id<JTSImageViewControllerAnimationDelegate>)animationDelegate;
-(id<JTSImageViewControllerAccessibilityDelegate>)accessibilityDelegate;
@end

