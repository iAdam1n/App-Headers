/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UINavigationBar, UIImage, NSArray;

@interface FBOfferFadingNavigationBarAnimator : NSObject {

	UIView* _expandingView;
	UINavigationBar* _navigationBar;
	UIImage* _clearImage;
	NSArray* _shadowedBarButtonImageViews;
	double _headerHeight;

}

@property (assign,nonatomic,__weak) UIView * expandingView;                       //@synthesize expandingView=_expandingView - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIImage * clearImage;                                //@synthesize clearImage=_clearImage - In the implementation block
@property (nonatomic,copy) NSArray * shadowedBarButtonImageViews;                 //@synthesize shadowedBarButtonImageViews=_shadowedBarButtonImageViews - In the implementation block
@property (assign,nonatomic) double headerHeight;                                 //@synthesize headerHeight=_headerHeight - In the implementation block
-(void)updateWithScrollOffset:(double)arg1 ;
-(double)_animationProgressForScrollOffset:(double)arg1 ;
-(id)_backgroundColorForAnimationProgress:(double)arg1 ;
-(UIImage *)clearImage;
-(UIView *)expandingView;
-(id)initWithExpandingView:(id)arg1 navigationBar:(id)arg2 headerHeight:(double)arg3 shadowedBarButtonImageViews:(id)arg4 ;
-(void)restoreNavigationBarDefaultTheme;
-(void)setExpandingView:(UIView *)arg1 ;
-(void)setClearImage:(UIImage *)arg1 ;
-(NSArray *)shadowedBarButtonImageViews;
-(void)setShadowedBarButtonImageViews:(NSArray *)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(double)_topBarHeight;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
@end
