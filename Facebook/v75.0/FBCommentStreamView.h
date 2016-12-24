/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBCommentStreamNewCommentPillManagerListener.h>
#import <Facebook/FBFullScreenTransitionBoundsProvider.h>
#import <Facebook/FBComponentScrollEventListener.h>

@protocol FBCommentStreamViewDelegate, FBCommentStreamViewHeaderProtocol;
@class FBUFICommentToolbox, FBCommentStreamPTRManager, FBCommentStreamScrollPositionManager, FBCommentStreamNewCommentPillManager, FBCommentStreamSocialCommentPill, NSString, FBAnimationPerformanceLogger, FBContentInsetTracker, FBKeyboardTracker, FBKeyboardObserver, UITapGestureRecognizer, UISwipeGestureRecognizer, CKComponentHostingView, FBTypingIndicatorView, FBCommentStreamPillView, UIButton, FBSideFeedLayoutManager, FBCommentStreamFunnelInstance, FBCommentStreamCommentIndicatorTheme, UICollectionView, FBCommentComposerContainerView, FBFeedBannerContainerView, UIView;

@interface FBCommentStreamView : UIView <FBKeyboardObserverDelegate, UIGestureRecognizerDelegate, FBCommentStreamNewCommentPillManagerListener, FBFullScreenTransitionBoundsProvider, FBComponentScrollEventListener> {

	FBUFICommentToolbox* _toolbox;
	FBCommentStreamPTRManager* _ptrManager;
	FBCommentStreamScrollPositionManager* _scrollPositionManager;
	long long _presentedIndicator;
	FBCommentStreamNewCommentPillManager* _newCommentPillManager;
	FBCommentStreamSocialCommentPill* _socialCommentsPill;
	NSString* _analyticsModule;
	FBAnimationPerformanceLogger* _animationPerformanceLogger;
	FBContentInsetTracker* _contentInsetTracker;
	FBKeyboardTracker* _keyboardTracker;
	FBKeyboardObserver* _keyboardObserver;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	CKComponentHostingView* _commentsDisabledNoticeView;
	FBTypingIndicatorView* _typingView;
	FBCommentStreamPillView* _typingPillView;
	double _typingIndicatorPillAppearanceTimestamp;
	UITapGestureRecognizer* _typingIndicatorTapGestureRecognizer;
	UIButton* _scrollPromptIndicator;
	BOOL _shouldEnableSideFeedJointScrolling;
	FBSideFeedLayoutManager* _sideFeedLayoutManager;
	FBCommentStreamFunnelInstance* _funnelInstance;
	id<FBCommentStreamViewDelegate> _delegate;
	BOOL _isCollectionViewDimmed;
	BOOL _perfPillDismissalAnimation;
	FBCommentStreamCommentIndicatorTheme* _theme;
	BOOL _includeOffsetForSidefeed;
	BOOL _includeHiddenComposerInLayout;
	BOOL _shouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges;
	UICollectionView* _collectionView;
	FBCommentComposerContainerView* _composerContainerView;
	FBFeedBannerContainerView* _bannerContainer;
	UIView* _overlayView;
	UIView*<FBCommentStreamViewHeaderProtocol> _headerView;
	Class _headerClass;
	double _bottomLayoutGuideLength;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) FBCommentComposerContainerView * composerContainerView;                             //@synthesize composerContainerView=_composerContainerView - In the implementation block
@property (nonatomic,retain) FBFeedBannerContainerView * bannerContainer;                                        //@synthesize bannerContainer=_bannerContainer - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIView * composerView; 
@property (nonatomic,readonly) UIView*<FBCommentStreamViewHeaderProtocol> headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) Class headerClass;                                                                  //@synthesize headerClass=_headerClass - In the implementation block
@property (assign,nonatomic) BOOL includeOffsetForSidefeed;                                                      //@synthesize includeOffsetForSidefeed=_includeOffsetForSidefeed - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                                                     //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenComposerInLayout;                                                 //@synthesize includeHiddenComposerInLayout=_includeHiddenComposerInLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges;              //@synthesize shouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges=_shouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(UIView *)composerView;
-(CGRect)fullScreenTransitionBoundsForView:(id)arg1 ;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(FBFeedBannerContainerView *)bannerContainer;
-(double)bottomLayoutGuideLength;
-(void)setHeaderClass:(Class)arg1 ;
-(void)_dismissScrollPromptIndicator;
-(BOOL)_canPresentIndicator:(long long)arg1 ;
-(void)_prepareForNewCommentsPillPresentation;
-(void)_layoutNewCommentsPill;
-(void)presentTypingIndicatorPill;
-(void)_layoutTypingIndicatorPill;
-(void)_didTapScrollPromptIndicator:(id)arg1 ;
-(void)restartScrollPromptIndicatorAnimationIfNeeded;
-(void)newCommentPillManager:(id)arg1 presentSocialPillWithNewComments:(id)arg2 didTapPillAction:(SEL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)newCommentPillManagerDismissCommentPill:(id)arg1 scrollToBottom:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)presentScrollPromptIndicator;
-(Class)headerClass;
-(void)startKeyboardObservation;
-(void)stopKeyboardObservation;
-(id)initWithAnalyticsModule:(id)arg1 ptrManager:(id)arg2 newCommentPillManager:(id)arg3 toolbox:(id)arg4 headerClass:(Class)arg5 shouldEnableSideFeedJointScrolling:(BOOL)arg6 sideFeedLayoutManager:(id)arg7 funnelInstance:(id)arg8 delegate:(id)arg9 theme:(id)arg10 ;
-(void)setIncludeOffsetForSidefeed:(BOOL)arg1 ;
-(void)setBannerContainer:(FBFeedBannerContainerView *)arg1 ;
-(void)presentReplyComposerPillForComment:(id)arg1 ;
-(void)dismissReplyComposerPillForComment:(id)arg1 ;
-(void)setCommentsDisabledNoticeView:(id)arg1 withNotice:(id)arg2 ;
-(void)setComposerContainerView:(FBCommentComposerContainerView *)arg1 ;
-(FBCommentComposerContainerView *)composerContainerView;
-(void)setShouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges:(BOOL)arg1 ;
-(void)setIncludeHiddenComposerInLayout:(BOOL)arg1 ;
-(void)dismissTypingIndicatorPill;
-(void)_didTapCollectionView:(id)arg1 ;
-(void)_didSwipeView;
-(BOOL)includeOffsetForSidefeed;
-(double)_calculateComposerHeight;
-(void)_pinToBottomIfNeededWithInitialBottomContentInsetForKeyboard:(double)arg1 initialBottomContentInsetForComposer:(double)arg2 isCollectionViewPinnedToBottomInitially:(BOOL)arg3 ;
-(void)_layoutNetworkErrorBanner;
-(void)didTapTypingIndicatorPillView;
-(void)setCollectionViewDimmed:(BOOL)arg1 usingTheme:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)includeHiddenComposerInLayout;
-(BOOL)shouldPinCollectionViewToBottomOnKeyboardOrComposerHeightChanges;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UICollectionView *)collectionView;
-(UIView*<FBCommentStreamViewHeaderProtocol>)headerView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)viewWillDisappear;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end
