/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUICollectionView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol EBUInfiniteCollectionViewDelegate;
@class CADisplayLink, CAMediaTimingFunction, NSString;

@interface EBUInfiniteCollectionView : EUICollectionView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	BOOL _enableInfiniteScrolling;
	BOOL _layoutInitialized;
	BOOL _disableInfiniteCallback;
	BOOL _infinitelyScrollByRecentering;
	BOOL _animationStarted;
	id<EBUInfiniteCollectionViewDelegate> _infiniteDelegate;
	id _wrappedDelegate;
	id _wrappedDatasource;
	CADisplayLink* _displayLink;
	CAMediaTimingFunction* _timingFunction;
	double _duration;
	double _beginTime;
	CGPoint _beginContentOffset;
	CGPoint _targetContentOffset;
	CGPoint _deltaContentOffset;

}

@property (assign,nonatomic,__weak) id wrappedDelegate;                                                  //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id wrappedDatasource;                                                //@synthesize wrappedDatasource=_wrappedDatasource - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                                                     //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
@property (assign,nonatomic) BOOL disableInfiniteCallback;                                               //@synthesize disableInfiniteCallback=_disableInfiniteCallback - In the implementation block
@property (assign,nonatomic) BOOL infinitelyScrollByRecentering;                                         //@synthesize infinitelyScrollByRecentering=_infinitelyScrollByRecentering - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                                     //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double duration;                                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL animationStarted;                                                      //@synthesize animationStarted=_animationStarted - In the implementation block
@property (assign,nonatomic) double beginTime;                                                           //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) CGPoint beginContentOffset;                                                 //@synthesize beginContentOffset=_beginContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint deltaContentOffset;                                                 //@synthesize deltaContentOffset=_deltaContentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<EBUInfiniteCollectionViewDelegate> infiniteDelegate;              //@synthesize infiniteDelegate=_infiniteDelegate - In the implementation block
@property (assign,nonatomic) BOOL enableInfiniteScrolling;                                               //@synthesize enableInfiniteScrolling=_enableInfiniteScrolling - In the implementation block
@property (nonatomic,readonly) CGSize contentSegmentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(BOOL)layoutInitialized;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 withInfiniteScrollByRecentering:(BOOL)arg3 ;
-(void)setInfiniteDelegate:(id<EBUInfiniteCollectionViewDelegate>)arg1 ;
-(void)setEnableInfiniteScrolling:(BOOL)arg1 ;
-(long long)normalizedIndexForIndex:(long long)arg1 ;
-(void)setInfinitelyScrollByRecentering:(BOOL)arg1 ;
-(void)setEnableInfiniteScrolling:(BOOL)arg1 recenterCollection:(BOOL)arg2 ;
-(double)normalizedOffsetForOffset:(double)arg1 ;
-(void)recenterInifiteCollectionView;
-(BOOL)infinitelyScrollByRecentering;
-(BOOL)enableInfiniteScrolling;
-(CGSize)contentSegmentSize;
-(id<EBUInfiniteCollectionViewDelegate>)infiniteDelegate;
-(long long)infiniteCollectionViewItemCount;
-(id)wrappedDatasource;
-(BOOL)isAnimatingCustomScrolling;
-(void)setDeltaContentOffset:(CGPoint)arg1 ;
-(void)updateContentOffset:(id)arg1 ;
-(void)setBeginContentOffset:(CGPoint)arg1 ;
-(CGPoint)deltaContentOffset;
-(CGPoint)beginContentOffset;
-(void)scrollToFocusCellAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)focusCell;
-(void)setContentOffset:(CGPoint)arg1 doCallback:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setContentOffset:(CGPoint)arg1 withTimingFunction:(id)arg2 duration:(double)arg3 ;
-(void)setWrappedDatasource:(id)arg1 ;
-(BOOL)disableInfiniteCallback;
-(void)setDisableInfiniteCallback:(BOOL)arg1 ;
-(BOOL)animationStarted;
-(void)setAnimationStarted:(BOOL)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(double)duration;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(double)beginTime;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)stopAnimation;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)updateProgress:(double)arg1 ;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setWrappedDelegate:(id)arg1 ;
-(id)wrappedDelegate;
@end

