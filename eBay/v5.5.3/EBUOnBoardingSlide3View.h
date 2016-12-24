/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUOnBoardingSlideView.h>

@class UIImageView, EBUOnBoardingSlideTabBarView;

@interface EBUOnBoardingSlide3View : EBUOnBoardingSlideView {

	UIImageView* _blueTabContentView;
	UIImageView* _blueTabElementsContentView;
	EBUOnBoardingSlideTabBarView* _tabBarView;

}

@property (nonatomic,retain) UIImageView * blueTabContentView;                       //@synthesize blueTabContentView=_blueTabContentView - In the implementation block
@property (nonatomic,retain) UIImageView * blueTabElementsContentView;               //@synthesize blueTabElementsContentView=_blueTabElementsContentView - In the implementation block
@property (nonatomic,retain) EBUOnBoardingSlideTabBarView * tabBarView;              //@synthesize tabBarView=_tabBarView - In the implementation block
-(id)initWithLayoutSizeClass:(long long)arg1 ;
-(void)slideDidDisappear;
-(void)slideDidAppear;
-(void)setTabBarView:(EBUOnBoardingSlideTabBarView *)arg1 ;
-(UIImageView *)blueTabContentView;
-(void)setBlueTabContentView:(UIImageView *)arg1 ;
-(UIImageView *)blueTabElementsContentView;
-(void)setBlueTabElementsContentView:(UIImageView *)arg1 ;
-(EBUOnBoardingSlideTabBarView *)tabBarView;
@end
