/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <AlienBlue/JMCarouselTrackViewDelegate.h>

@protocol JMCarouselViewDelegate, JMCarouselViewDataSource;
@class NSObject, UIView, JMCarouselScrollView, JMCarouselTrackView, NSArray, NSString;

@interface JMCarouselView : UIView <UIScrollViewDelegate, JMCarouselTrackViewDelegate> {

	NSObject*<JMCarouselViewDelegate> _delegate;
	UIView* _wrapperView;
	JMCarouselScrollView* _scrollView;
	JMCarouselTrackView* _trackView;
	UIView* _middleOverlayView;
	NSObject*<JMCarouselViewDataSource> _dataSource;
	long long _trackIndexOffset;
	NSArray* _previouslyVisibleItemIndices;
	unsigned long long _previouslySelectedItemIndex;
	double _previousIntermediateScrollDistance;

}

@property (readonly) unsigned long long selectedItemIndex; 
@property (readonly) BOOL isDragging; 
@property (__weak) NSObject*<JMCarouselViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) UIView * wrapperView;                                        //@synthesize wrapperView=_wrapperView - In the implementation block
@property (retain) JMCarouselScrollView * scrollView;                           //@synthesize scrollView=_scrollView - In the implementation block
@property (retain) JMCarouselTrackView * trackView;                             //@synthesize trackView=_trackView - In the implementation block
@property (retain) UIView * middleOverlayView;                                  //@synthesize middleOverlayView=_middleOverlayView - In the implementation block
@property (__weak) NSObject*<JMCarouselViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) long long trackIndexOffset;                                  //@synthesize trackIndexOffset=_trackIndexOffset - In the implementation block
@property (retain) NSArray * previouslyVisibleItemIndices;                      //@synthesize previouslyVisibleItemIndices=_previouslyVisibleItemIndices - In the implementation block
@property (readonly) CGSize itemSize; 
@property (readonly) unsigned long long numberOfItems; 
@property (readonly) BOOL shouldWrap; 
@property (assign) unsigned long long previouslySelectedItemIndex;              //@synthesize previouslySelectedItemIndex=_previouslySelectedItemIndex - In the implementation block
@property (assign) double previousIntermediateScrollDistance;                   //@synthesize previousIntermediateScrollDistance=_previousIntermediateScrollDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)wrapperView;
-(BOOL)shouldWrap;
-(void)setTrackView:(JMCarouselTrackView *)arg1 ;
-(JMCarouselTrackView *)trackView;
-(void)setWrapperView:(UIView *)arg1 ;
-(id)createTrackView;
-(id)carouselTrackView:(id)arg1 placeholderContentViewForItemAtIndex:(unsigned long long)arg2 replacingExistingContentView:(id)arg3 ;
-(id)carouselTrackView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2 replacingExistingContentView:(id)arg3 ;
-(unsigned long long)carouselTrackViewNumberOfItems:(id)arg1 ;
-(BOOL)carouselTrackViewShouldWrap:(id)arg1 ;
-(CGSize)carouselTrackGridSize:(id)arg1 ;
-(id)createScrollViewWithEmbeddedTrackView:(id)arg1 ;
-(void)setPreviouslySelectedItemIndex:(unsigned long long)arg1 ;
-(void)snapToTheMiddleOfTheTrackView;
-(void)reloadTrackView;
-(double)recommendedTrackWidth;
-(void)didScrollByDistance:(double)arg1 ;
-(void)cancelIntermediateScroll;
-(void)visibleItemsDidChange;
-(void)selectOnscreenItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)selectOffscreenItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setTrackIndexOffset:(long long)arg1 ;
-(long long)trackIndexOffset;
-(void)applyScrollBoundaryRestrictions;
-(void)notifyDelegateOfSelectedItem;
-(void)notifyDelegateOfNewlyVisibleItems:(id)arg1 ;
-(void)notifyDelegateOfNewlyHiddenItems:(id)arg1 ;
-(void)setPreviouslyVisibleItemIndices:(NSArray *)arg1 ;
-(unsigned long long)previouslySelectedItemIndex;
-(NSArray *)previouslyVisibleItemIndices;
-(void)setPreviousIntermediateScrollDistance:(double)arg1 ;
-(double)previousIntermediateScrollDistance;
-(id)initWithFrame:(CGRect)arg1 dataSource:(id)arg2 delegate:(id)arg3 ;
-(void)selectItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)intermediateScrollFromCurrentlySelectedItemByRatio:(double)arg1 ;
-(UIView *)middleOverlayView;
-(void)setMiddleOverlayView:(UIView *)arg1 ;
-(void)setDataSource:(NSObject*<JMCarouselViewDataSource>)arg1 ;
-(void)setDelegate:(NSObject*<JMCarouselViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)layoutSubviews;
-(BOOL)isDragging;
-(NSObject*<JMCarouselViewDataSource>)dataSource;
-(NSObject*<JMCarouselViewDelegate>)delegate;
-(void)setScrollView:(JMCarouselScrollView *)arg1 ;
-(JMCarouselScrollView *)scrollView;
-(unsigned long long)numberOfItems;
-(CGSize)itemSize;
-(unsigned long long)selectedItemIndex;
@end

