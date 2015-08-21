/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIScrollView, NSArray, UIViewController;

@interface IGScrollingHeaderItem : NSObject {

	BOOL _shouldScrollAwayNavigationBar;
	BOOL _shouldScrollAwayStatusBar;
	BOOL _headerIsScrolledAway;
	UIScrollView* _scrollView;
	NSArray* _additionalScrollingViews;
	double _headerHeight;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) BOOL shouldScrollAwayNavigationBar;                    //@synthesize shouldScrollAwayNavigationBar=_shouldScrollAwayNavigationBar - In the implementation block
@property (nonatomic,readonly) BOOL shouldScrollAwayStatusBar;                        //@synthesize shouldScrollAwayStatusBar=_shouldScrollAwayStatusBar - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSArray * additionalScrollingViews;                    //@synthesize additionalScrollingViews=_additionalScrollingViews - In the implementation block
@property (assign,nonatomic) double headerHeight;                                     //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) BOOL headerIsScrolledAway;                               //@synthesize headerIsScrolledAway=_headerIsScrolledAway - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(double)maximumHeaderOffset;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 ;
-(id)initWithViewController:(id)arg1 shouldScrollAwayNavigationBar:(BOOL)arg2 shouldScrollAwayStatusBar:(BOOL)arg3 ;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 headerHeight:(double)arg3 ;
-(BOOL)shouldScrollAwayStatusBar;
-(BOOL)headerIsScrolledAway;
-(BOOL)shouldScrollAwayNavigationBar;
-(NSArray *)additionalScrollingViews;
-(void)setHeaderIsScrolledAway:(BOOL)arg1 ;
-(id)description;
-(UIViewController *)viewController;
-(UIScrollView *)scrollView;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
@end

