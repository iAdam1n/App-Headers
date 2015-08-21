/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@protocol TFNSubTabBarDelegate;
@class NSMutableArray, TFNSubTabBarItem, UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TFNSubTabBar : UIControl {

	id<TFNSubTabBarDelegate> delegate;
	long long selectedIndex;
	long long numberOfTabs;
	NSMutableArray* tabViews;
	NSMutableArray* tabBarItems;
	TFNSubTabBarItem* headerItem;
	TFNSubTabBarItem* footerItem;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _direction;

}

@property (assign,nonatomic,__weak) id<TFNSubTabBarDelegate> delegate; 
@property (assign,nonatomic) long long selectedIndex; 
@property (nonatomic,readonly) long long direction;                                 //@synthesize direction=_direction - In the implementation block
-(void)didTap:(id)arg1 ;
-(CGRect)rectForIndex:(long long)arg1 ;
-(void)reallySetFrame:(CGRect)arg1 ;
-(void)didSwipe:(id)arg1 ;
-(void)didLongPress:(id)arg1 ;
-(CGRect)footerRect;
-(void)tabViewDidTouchDown:(id)arg1 ;
-(id)accessibilityLabelForIndex:(long long)arg1 ;
-(CGRect)headerRect;
-(id)barItemForPoint:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 direction:(long long)arg2 ;
-(void)updateGlows;
-(void)dealloc;
-(void)setDelegate:(id<TFNSubTabBarDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<TFNSubTabBarDelegate>)delegate;
-(long long)direction;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)update;
@end

