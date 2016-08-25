/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SolitaireFree/FBAdUpdatableView.h>

@protocol FBAdScrollViewDelegate;
@class NSArray, UIViewController, UIScrollView, FBAdScrollContainerView, NSPointerArray, NSMapTable, FBGradientView, NSString;

@interface FBAdScrollView : UIView <UIScrollViewDelegate, FBAdUpdatableView> {

	BOOL _animationEnabled;
	BOOL _debugMode;
	BOOL _loading;
	NSArray* _data;
	unsigned long long _maximumNativeAdCount;
	double _xInset;
	double _yInset;
	UIViewController* _viewController;
	/*^block*/id _childViewProvider;
	id<FBAdScrollViewDelegate> _delegate;
	UIScrollView* _scrollView;
	FBAdScrollContainerView* _hitTestView;
	NSPointerArray* _cellViews;
	NSMapTable* _cellMapping;
	FBGradientView* _leftGradientView;
	FBGradientView* _rightGradientView;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) FBAdScrollContainerView * hitTestView;                 //@synthesize hitTestView=_hitTestView - In the implementation block
@property (nonatomic,retain) NSPointerArray * cellViews;                                   //@synthesize cellViews=_cellViews - In the implementation block
@property (nonatomic,retain) NSMapTable * cellMapping;                                     //@synthesize cellMapping=_cellMapping - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * leftGradientView;                     //@synthesize leftGradientView=_leftGradientView - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * rightGradientView;                    //@synthesize rightGradientView=_rightGradientView - In the implementation block
@property (nonatomic,copy) NSArray * data;                                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNativeAdCount;                    //@synthesize maximumNativeAdCount=_maximumNativeAdCount - In the implementation block
@property (assign,getter=isAnimationEnabled,nonatomic) BOOL animationEnabled;              //@synthesize animationEnabled=_animationEnabled - In the implementation block
@property (assign,nonatomic) double xInset;                                                //@synthesize xInset=_xInset - In the implementation block
@property (assign,nonatomic) double yInset;                                                //@synthesize yInset=_yInset - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                     //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id childViewProvider;                                           //@synthesize childViewProvider=_childViewProvider - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                                               //@synthesize debugMode=_debugMode - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdScrollViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDebugMode:(BOOL)arg1 ;
-(id)nativeAds;
-(BOOL)debugMode;
-(void)updateView:(BOOL)arg1 ;
-(void)setAnimationEnabled:(BOOL)arg1 ;
-(void)setChildViewProvider:(id)arg1 ;
-(void)commonInitialization;
-(NSPointerArray *)cellViews;
-(void)removeAllCells;
-(void)addAllCells;
-(CGRect)scrollFrame;
-(void)setupScrollViewSize;
-(void)positionGradient;
-(void)setupContentSize;
-(void)loadPages;
-(FBAdScrollContainerView *)hitTestView;
-(void)repositionScrollView;
-(double)paddingTotal;
-(FBGradientView *)leftGradientView;
-(FBGradientView *)rightGradientView;
-(void)animateWithFade:(BOOL)arg1 view:(id)arg2 animations:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(double)paddingforPage:(unsigned long long)arg1 ;
-(void)loadPage:(unsigned long long)arg1 ;
-(id)childViewProvider;
-(unsigned long long)addCellForData:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(id)childViewForData:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(void)mapData:(id)arg1 toView:(id)arg2 ;
-(void)populate:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)nativeAdForView:(id)arg1 ;
-(NSMapTable *)cellMapping;
-(void)removeAllCells:(id)arg1 ;
-(void)detachAllNativeAds:(id)arg1 ;
-(void)setCellMapping:(NSMapTable *)arg1 ;
-(void)setCellViews:(NSPointerArray *)arg1 ;
-(id)initWithCellData:(id)arg1 withViewProvider:(/*^block*/id)arg2 ;
-(unsigned long long)indexForData:(id)arg1 ;
-(id)viewForData:(id)arg1 ;
-(unsigned long long)maximumNativeAdCount;
-(void)setYInset:(double)arg1 ;
-(void)setHitTestView:(FBAdScrollContainerView *)arg1 ;
-(void)setLeftGradientView:(FBGradientView *)arg1 ;
-(void)setRightGradientView:(FBGradientView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBAdScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
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
-(id<FBAdScrollViewDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isAnimationEnabled;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)isLoading;
-(double)yInset;
-(void)setLoading:(BOOL)arg1 ;
-(double)xInset;
-(void)setXInset:(double)arg1 ;
-(double)ratio;
-(void)loadCells;
@end

