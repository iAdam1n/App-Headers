/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _FBTabBarContainerView;

@interface FBTabBarContainerView : UIView {

	UIView* _navigationBar;
	UIView* _contentView;
	_FBTabBarContainerView* _tabBarContainerView;
	double _tabBarViewOffsetFraction;
	double _tabBarWidth;
	BOOL _alwaysExpandLeftTabBar;
	unsigned long long _tabBarPosition;
	unsigned long long _tabBarIconSize;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (assign,nonatomic) unsigned long long tabBarPosition;              //@synthesize tabBarPosition=_tabBarPosition - In the implementation block
@property (assign,nonatomic) unsigned long long tabBarIconSize;              //@synthesize tabBarIconSize=_tabBarIconSize - In the implementation block
@property (assign,nonatomic) BOOL alwaysExpandLeftTabBar;                    //@synthesize alwaysExpandLeftTabBar=_alwaysExpandLeftTabBar - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                    //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                 //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
-(unsigned long long)tabBarPosition;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)setTabBarPosition:(unsigned long long)arg1 ;
-(void)setTabBarIconSize:(unsigned long long)arg1 ;
-(unsigned long long)tabBarIconSize;
-(BOOL)alwaysExpandLeftTabBar;
-(void)setAlwaysExpandLeftTabBar:(BOOL)arg1 ;
-(double)tabBarViewOffsetFraction;
-(void)setTabBarViewOffsetFraction:(double)arg1 animated:(BOOL)arg2 ;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)bottomLayoutGuideLength;
-(void)setTabBarView:(id)arg1 ;
-(double)_tabBarViewSize;
-(BOOL)_tabBarStatusChangedFromBarWidth:(double)arg1 toBarWidth:(double)arg2 ;
-(void)setTabBarViewPosition:(unsigned long long)arg1 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(id)arg1 ;
-(void)setNavigationBar:(id)arg1 ;
@end
