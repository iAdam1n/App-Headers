/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ContentDeckOverlayViewDelegate;
@class UIView, NSHashTable, NSString;

@interface ContentDeckOverlayView : UIView <UIGestureRecognizerDelegate> {

	double deckOpenTime;
	BOOL _deckEnabled;
	BOOL _panEnabled;
	BOOL _gestureWasHandled;
	BOOL _deckHidden;
	BOOL _viewIsDisplayed;
	id<ContentDeckOverlayViewDelegate> _delegate;
	UIView* _parentView;
	UIView* _parentOverlayView;
	UIView* _swipeView;
	long long _pointCount;
	unsigned long long _touchType;
	double _gutterWidth;
	NSHashTable* _passthroughViews;
	NSHashTable* _requireToFailGestureRecognizers;
	CGPoint _startPoint;

}

@property (assign,nonatomic,__weak) UIView * parentView;                                      //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,retain) UIView * parentOverlayView;                                      //@synthesize parentOverlayView=_parentOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * swipeView;                                       //@synthesize swipeView=_swipeView - In the implementation block
@property (assign,nonatomic) BOOL gestureWasHandled;                                          //@synthesize gestureWasHandled=_gestureWasHandled - In the implementation block
@property (assign,nonatomic) long long pointCount;                                            //@synthesize pointCount=_pointCount - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                                              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) unsigned long long touchType;                                    //@synthesize touchType=_touchType - In the implementation block
@property (assign,nonatomic) BOOL deckHidden;                                                 //@synthesize deckHidden=_deckHidden - In the implementation block
@property (assign,nonatomic) BOOL viewIsDisplayed;                                            //@synthesize viewIsDisplayed=_viewIsDisplayed - In the implementation block
@property (assign,nonatomic) double gutterWidth;                                              //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (nonatomic,retain) NSHashTable * passthroughViews;                                  //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) NSHashTable * requireToFailGestureRecognizers;                   //@synthesize requireToFailGestureRecognizers=_requireToFailGestureRecognizers - In the implementation block
@property (nonatomic,readonly) BOOL isDeckHidden; 
@property (assign,nonatomic) BOOL deckEnabled;                                                //@synthesize deckEnabled=_deckEnabled - In the implementation block
@property (assign,nonatomic) BOOL panEnabled;                                                 //@synthesize panEnabled=_panEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<ContentDeckOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)defaultFrameWithGutterWidth:(double)arg1 ;
-(void)enableScrollingDuringPan:(BOOL)arg1 ;
-(void)setDeckEnabled:(BOOL)arg1 ;
-(void)tapOverlayAction:(id)arg1 ;
-(void)panOverlayAction:(id)arg1 ;
-(BOOL)shouldHideDeck;
-(void)hideDeck:(BOOL)arg1 complete:(/*^block*/id)arg2 ;
-(BOOL)panEnabled;
-(BOOL)deckEnabled;
-(BOOL)isDeckHidden;
-(UIView *)parentView;
-(void)adjustAnchorPointForGestureRecognizer:(id)arg1 ;
-(UIView *)parentOverlayView;
-(void)trackGestureOpen;
-(void)showDeck:(BOOL)arg1 fromSwipe:(BOOL)arg2 complete:(/*^block*/id)arg3 ;
-(void)hideDeck:(BOOL)arg1 fromSwipe:(BOOL)arg2 complete:(/*^block*/id)arg3 ;
-(void)setDeckHidden:(BOOL)arg1 ;
-(NSHashTable *)requireToFailGestureRecognizers;
-(id)initWithParentView:(id)arg1 swipeView:(id)arg2 wantGutter:(BOOL)arg3 ;
-(void)showDeck:(BOOL)arg1 complete:(/*^block*/id)arg2 ;
-(void)updateDeckOverlayViewHeight;
-(void)addPassthroughView:(id)arg1 ;
-(void)removePassthroughView:(id)arg1 ;
-(void)addRequireGestureRecognizerToFail:(id)arg1 ;
-(void)removeRequireGestureRecognizerToFail:(id)arg1 ;
-(void)setPanEnabled:(BOOL)arg1 ;
-(void)setParentOverlayView:(UIView *)arg1 ;
-(BOOL)gestureWasHandled;
-(void)setGestureWasHandled:(BOOL)arg1 ;
-(unsigned long long)touchType;
-(void)setTouchType:(unsigned long long)arg1 ;
-(BOOL)deckHidden;
-(BOOL)viewIsDisplayed;
-(void)setViewIsDisplayed:(BOOL)arg1 ;
-(void)setRequireToFailGestureRecognizers:(NSHashTable *)arg1 ;
-(void)setSwipeView:(UIView *)arg1 ;
-(UIView *)swipeView;
-(void)setDelegate:(id<ContentDeckOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(id<ContentDeckOverlayViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSHashTable *)passthroughViews;
-(void)setPassthroughViews:(NSHashTable *)arg1 ;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(long long)pointCount;
-(CGRect)defaultFrame;
-(void)setPointCount:(long long)arg1 ;
-(void)setParentView:(UIView *)arg1 ;
@end
