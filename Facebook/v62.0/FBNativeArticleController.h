/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnalyticsTrackingCodesDataSource.h>
#import <Facebook/FBDescribable.h>
#import <Facebook/FBModalPresentationSource.h>
#import <Facebook/FBNativeArticleOrientationSwitch.h>
#import <Facebook/FBNativeArticlePopoverHostingViewProvider.h>
#import <Facebook/FBNativeArticlePreloadHandlerDelegate.h>
#import <Facebook/FBNativeArticleScrollHandlerDelegate.h>
#import <Facebook/FBNativeArticleScrollViewDelegate.h>
#import <Facebook/FBNativeArticleTransitionDriverDelegate.h>
#import <Facebook/_FBNativeArticleScrollNodeDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBRichStoryRendererControllerDelegate.h>
#import <Facebook/FBCardVisibility.h>
#import <Facebook/FBIntentHandler.h>

@protocol FBNativeArticleControllerDelegate;
@class FBUserSession, FBNativeArticleDisplayConfiguration, FBNativeArticlePreloadCoordinator, FBRichStoryViewModel, FBRichStoryBlockControllerRegistry, FBNativeArticleInteractionRegistry, UITapGestureRecognizer, FBNativeArticleResourceBundle, FBNativeArticleTransitionDriver, FBNativeArticleTransitionCache, NSMutableDictionary, FBNativeArticlePreloadHandler, FBReusePoolController, FBNativeArticleScrollHandler, FBAnimationPerformanceLogger, FBNativeArticleBlockVPVLogger, FBNativeArticleRendererController, ASDisplayNode, NSArray, FBNativeArticleScrollView, FBRichStoryRendererController, NSDictionary, NSString;

@interface FBNativeArticleController : NSObject <FBAnalyticsTrackingCodesDataSource, FBDescribable, FBModalPresentationSource, FBNativeArticleOrientationSwitch, FBNativeArticlePopoverHostingViewProvider, FBNativeArticlePreloadHandlerDelegate, FBNativeArticleScrollHandlerDelegate, FBNativeArticleScrollViewDelegate, FBNativeArticleTransitionDriverDelegate, _FBNativeArticleScrollNodeDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, FBRichStoryRendererControllerDelegate, FBCardVisibility, FBIntentHandler> {

	FBUserSession* _session;
	FBNativeArticleDisplayConfiguration* _displayConfiguration;
	FBNativeArticlePreloadCoordinator* _preloadCoordinator;
	FBRichStoryViewModel* _storyModel;
	FBRichStoryBlockControllerRegistry* _blockControllerRegistry;
	FBNativeArticleInteractionRegistry* _interactionRegistry;
	UITapGestureRecognizer* _interactionTapGestureRecognizer;
	FBNativeArticleResourceBundle* _resourceBundle;
	FBNativeArticleTransitionDriver* _transitionDriver;
	FBNativeArticleTransitionCache* _transitionCache;
	NSMutableDictionary* _transitioningControllerDelegateFlags;
	FBNativeArticlePreloadHandler* _preloadHandler;
	FBReusePoolController* _reusePoolController;
	FBNativeArticleScrollHandler* _scrollHandler;
	BOOL _dispatchedViewportUpdate;
	NSMutableDictionary* _analyticsInfo;
	FBAnimationPerformanceLogger* _apTracker;
	FBNativeArticleBlockVPVLogger* _blockVPVLogger;
	struct {
		unsigned willBeginTransition : 1;
		unsigned didBeginTransition : 1;
		unsigned didUpdateTransition : 1;
		unsigned willFinishTransition : 1;
		unsigned didFinishTransition : 1;
		unsigned scrollViewWillBeginDragging : 1;
		unsigned scrollViewDidScroll : 1;
		unsigned scrollViewWillEndDragging : 1;
		unsigned scrollViewDidEndDecelarating : 1;
		unsigned scrollViewDidEndDragging : 1;
		unsigned willEnterFullscreenStoryBlock : 1;
		unsigned didExitFullscreenStoryBlock : 1;
	}  _delegateFlags;
	BOOL _tapToTopWasVisibleBeforeTransition;
	FBNativeArticleRendererController* _rendererController;
	BOOL _allowsRotation;
	ASDisplayNode* _scrollViewNode;
	NSArray* _thirdPartyTrackers;
	id<FBNativeArticleControllerDelegate> _delegate;
	double _maxPercentScrolled;

}

@property (nonatomic,readonly) double maxPercentScrolled;                                        //@synthesize maxPercentScrolled=_maxPercentScrolled - In the implementation block
@property (nonatomic,readonly) FBNativeArticleScrollView * scrollView; 
@property (nonatomic,readonly) FBRichStoryRendererController * rendererController;               //@synthesize rendererController=_rendererController - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                                                //@synthesize allowsRotation=_allowsRotation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsInfo; 
@property (nonatomic,copy,readonly) NSArray * thirdPartyTrackers;                                //@synthesize thirdPartyTrackers=_thirdPartyTrackers - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeArticleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ASDisplayNode * scrollViewNode;                                   //@synthesize scrollViewNode=_scrollViewNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * analyticsTrackingCodes; 
+(id)viewModelFromViewModel:(id)arg1 supportedByBlockControllerRegistry:(id)arg2 inPresentationState:(id)arg3 ;
+(id)articleControllerForViewModel:(id)arg1 shareable:(id)arg2 blockControllerRegistry:(id)arg3 annotationRegistry:(id)arg4 presentationState:(id)arg5 resourceBundle:(id)arg6 interfaceGuide:(id)arg7 viewportSize:(CGSize)arg8 session:(id)arg9 thirdPartyTrackers:(id)arg10 analyticsInfo:(id)arg11 ;
-(void)handleIntent:(id)arg1 ;
-(NSDictionary *)analyticsInfo;
-(NSArray *)thirdPartyTrackers;
-(void)requireGestureRecognizerToFailBeforePanning:(id)arg1 ;
-(id)modalPresentationStackManager;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(NSArray *)analyticsTrackingCodes;
-(id)popoverHostingView;
-(void)rendererController:(id)arg1 didGenerateBlockController:(id)arg2 forStoryBlock:(id)arg3 ;
-(void)rendererController:(id)arg1 didFinishLayoutWithSize:(CGSize)arg2 ;
-(ASDisplayNode *)scrollViewNode;
-(FBRichStoryRendererController *)rendererController;
-(id)initWithRichStoryViewModel:(id)arg1 presentationState:(id)arg2 displayConfiguration:(id)arg3 interactionRegistry:(id)arg4 blockControllerRegistry:(id)arg5 resourceBundle:(id)arg6 session:(id)arg7 thirdPartyTrackers:(id)arg8 ;
-(void)cardDidEnterWorkingRange;
-(void)cardMaySettleWithFullscreenFocus;
-(void)cardMaySettleWithoutFullscreenFocus;
-(void)cardDidSettleWithoutFullscreenFocus:(int)arg1 ;
-(void)didDisappear;
-(double)maxPercentScrolled;
-(void)cardDidSettleWithFullscreenFocus;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(void)blockNodeDidFinishDisplay:(id)arg1 ;
-(void)scrollNodeDidLoad:(id)arg1 ;
-(void)_updateRageShakeLastArticle;
-(void)setMaxPercentScrolled:(double)arg1 ;
-(void)_handleStoryInteractionTap:(id)arg1 ;
-(id)_createScrollView;
-(BOOL)_storyBlocksCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(BOOL)_interactionHandlerCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)_storyBlockAtPoint:(CGPoint)arg1 ;
-(id)_compositeAttributesFromAttributes:(id)arg1 forBlock:(id)arg2 ;
-(id)_destinationLayoutForPresentationAttributes:(id)arg1 appliedToStoryBlock:(id)arg2 ;
-(id)_presentationStateByApplyingPresentationAttributes:(id)arg1 toBlock:(id)arg2 ;
-(id)_newPresentationAttributesForBlock:(id)arg1 withTransitionAttributes:(id)arg2 ;
-(FBProfileScrollingBehavior)_transitionFlagsForBlock:(id)arg1 ;
-(void)_updateTransitionFlagsForBlock:(id)arg1 andController:(id)arg2 ;
-(BOOL)_shouldTrackTouchesForTransitionToPresentationState:(id)arg1 onBlock:(id)arg2 ;
-(void)_stopScrollViewTracking;
-(void)_updateTapToTopVisibilityWithPresentationAttributes:(id)arg1 ;
-(BOOL)_shouldUpdateViewports;
-(CGRect)_preloadableViewportFromScrollView:(id)arg1 ;
-(CGRect)_scrollingWorkingViewportFromScrollView:(id)arg1 ;
-(CGRect)_interactiveViewportFromScrollView:(id)arg1 ;
-(void)_didScrollScrollView:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)setMaxPercentScrolledWithOffset:(double)arg1 contentHeight:(double)arg2 ;
-(BOOL)storyScrollHandler:(id)arg1 storyBlockWantsCentermostFocus:(id)arg2 ;
-(void)_cacheTransitionLayoutsForBlock:(id)arg1 ;
-(id)f_bugDescription;
-(void)scrollToBlockWithID:(id)arg1 withScrollPosition:(unsigned long long)arg2 showingTapToTopButton:(BOOL)arg3 animated:(BOOL)arg4 ;
-(id)preloadHandler:(id)arg1 blockControllersForPreloadViewport:(CGRect)arg2 ;
-(void)storyScrollHandler:(id)arg1 didFinishScrollingToBlock:(id)arg2 ;
-(id)storyScrollHandler:(id)arg1 currentBlocksWithinFrame:(CGRect)arg2 ;
-(CGRect)storyScrollHandler:(id)arg1 contentFrameForElementWithID:(id)arg2 ;
-(id)storyScrollHandler:(id)arg1 blockAfterBlock:(id)arg2 ;
-(id)storyScrollHandler:(id)arg1 blockBeforeBlock:(id)arg2 ;
-(unsigned long long)storyScrollHandler:(id)arg1 fullscreenPresentationStyleForStoryBlock:(id)arg2 ;
-(void)storyScrollHandler:(id)arg1 blockDidGainCentermostFocus:(id)arg2 ;
-(void)storyScrollHandler:(id)arg1 blockDidLoseCentermostFocus:(id)arg2 ;
-(void)storyScrollHandler:(id)arg1 willEnterFullscreenStoryBlock:(id)arg2 withAnimation:(SCD_Struct_FB92)arg3 ;
-(void)storyScrollHandler:(id)arg1 didEnterFullscreenStoryBlock:(id)arg2 ;
-(void)storyScrollHandler:(id)arg1 didExitFullscreenStoryBlock:(id)arg2 ;
-(BOOL)nativeArticleScrollView:(id)arg1 storyCanRespondToGestureInDirection:(long long)arg2 withTouches:(id)arg3 ;
-(BOOL)nativeArticleScrollView:(id)arg1 shouldRecognizePanSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)rendererController:(id)arg1 addRenderableToRoot:(id)arg2 forStoryBlock:(id)arg3 ;
-(void)rendererController:(id)arg1 removeRenderableFromRoot:(id)arg2 forStoryBlock:(id)arg3 ;
-(void)rendererController:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(void)rendererController:(id)arg1 didCullBlockController:(id)arg2 forStoryBlock:(id)arg3 ;
-(void)rendererController:(id)arg1 storyBlockEnteredVisibleViewport:(id)arg2 ;
-(void)rendererController:(id)arg1 storyBlockExitedVisibleViewport:(id)arg2 ;
-(void)rendererController:(id)arg1 storyBlockEnteredInteractiveViewport:(id)arg2 ;
-(void)rendererController:(id)arg1 storyBlockExitedInteractiveViewport:(id)arg2 ;
-(void)cardWasCulledFromWorkingRange;
-(void)cardDidBeginMoving:(int)arg1 ;
-(BOOL)transitionDriver:(id)arg1 canRespondToGestureInDirection:(long long)arg2 withTouches:(id)arg3 ;
-(id)transitionDriver:(id)arg1 storyBlockAtPoint:(CGPoint)arg2 ;
-(id)transitionDriver:(id)arg1 eligibleTransitionAttributesFromPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 ;
-(void)transitionDriver:(id)arg1 didUpdateTrackingPoint:(CGPoint)arg2 forStoryBlock:(id)arg3 ;
-(id)transitionDriver:(id)arg1 currentPresentationAttributesForBlock:(id)arg2 ;
-(void)transitionDriver:(id)arg1 willBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(CGPoint)arg4 touchDirection:(long long)arg5 shouldTrackTouches:(BOOL*)arg6 ;
-(id)transitionDriver:(id)arg1 transitionLayoutForStoryBlock:(id)arg2 withPresentationAttributes:(id)arg3 ;
-(CGRect)transitionDriver:(id)arg1 currentContentFrameForBlock:(id)arg2 ;
-(void)transitionDriver:(id)arg1 didBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(CGPoint)arg4 transitionLayout:(id)arg5 ;
-(CGPoint)transitionDriver:(id)arg1 destinationTrackingPointForStoryBlock:(id)arg2 transitioningToPresentationAttributes:(id)arg3 withLayout:(id)arg4 progress:(double)arg5 originContentFrame:(CGRect*)arg6 destinationContentFrame:(CGRect*)arg7 ;
-(void)transitionDriver:(id)arg1 willFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 animationConfiguration:(SCD_Struct_FB92)arg4 ;
-(CGPoint)transitionDriver:(id)arg1 currentTrackingPointForStoryBlock:(id)arg2 ;
-(void)transitionDriver:(id)arg1 transitionToPresentationAttributes:(id)arg2 didBeginSettlingForStoryBlock:(id)arg3 ;
-(void)transitionDriver:(id)arg1 didFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withResultantLayout:(id)arg4 ;
-(void)transitionDriver:(id)arg1 didUpdateTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withProgress:(double)arg4 ;
-(BOOL)transitionDriver:(id)arg1 shouldRecognizePanSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDelegate:(id<FBNativeArticleControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBNativeArticleControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(FBNativeArticleScrollView *)scrollView;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(void)willAppear;
-(void)_didReceiveMemoryWarning;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)didAppear;
@end
