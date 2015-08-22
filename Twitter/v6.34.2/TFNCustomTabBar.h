/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNCustomTabBarGestureRecognizerEventObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TFNCustomTabBarDelegate;
@class NSArray, NSMutableArray, TFNCustomTabBarGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface TFNCustomTabBar : UIView <TFNCustomTabBarGestureRecognizerEventObserver, UIGestureRecognizerDelegate> {

	BOOL _tapWasHandled;
	id<TFNCustomTabBarDelegate> _delegate;
	NSArray* _tabViews;
	long long _selectedIndex;
	long long _highlightedTabIndex;
	NSMutableArray* _tabHostViews;
	TFNCustomTabBarGestureRecognizer* _eventObserverGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _tapHeldDownGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<TFNCustomTabBarDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * tabViews;                                                             //@synthesize tabViews=_tabViews - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) long long highlightedTabIndex;                                                //@synthesize highlightedTabIndex=_highlightedTabIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tabHostViews;                                                //@synthesize tabHostViews=_tabHostViews - In the implementation block
@property (nonatomic,retain) TFNCustomTabBarGestureRecognizer * eventObserverGestureRecognizer;              //@synthesize eventObserverGestureRecognizer=_eventObserverGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * tapHeldDownGestureRecognizer;                    //@synthesize tapHeldDownGestureRecognizer=_tapHeldDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                      //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL tapWasHandled;                                                             //@synthesize tapWasHandled=_tapWasHandled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTabViews:(NSArray *)arg1 ;
-(NSArray *)tabViews;
-(long long)highlightedTabIndex;
-(BOOL)isLaidOutVertically;
-(void)observeTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)observeTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)observeTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)observeTouchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)nopGesture:(id)arg1 ;
-(void)tapHeldDown:(id)arg1 ;
-(NSMutableArray *)tabHostViews;
-(void)_updateSelectedIndex:(long long)arg1 ;
-(long long)indexOfTabAtPoint:(CGPoint)arg1 ;
-(void)setHighlightedTabIndex:(long long)arg1 ;
-(BOOL)gestureRecognizerIsCustomTabBarRecognizer:(id)arg1 ;
-(void)updateTouchLocation:(CGPoint)arg1 ;
-(void)setTapWasHandled:(BOOL)arg1 ;
-(BOOL)tapWasHandled;
-(TFNCustomTabBarGestureRecognizer *)eventObserverGestureRecognizer;
-(void)setEventObserverGestureRecognizer:(TFNCustomTabBarGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)tapHeldDownGestureRecognizer;
-(void)setTapHeldDownGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TFNCustomTabBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TFNCustomTabBarDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)longPress:(id)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)tap:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end
