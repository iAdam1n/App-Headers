/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGNavigationAnimator.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class UIView, NSString;

@interface IGNavigationPopAnimator : IGNavigationAnimator <UIViewControllerInteractiveTransitioning> {

	BOOL _interactive;
	BOOL _isRevealingTabBar;
	BOOL _isHidingTabBar;
	BOOL _interactiveTransitionDimmedStatusBar;
	UIView* _tabBarSuperview;
	UIView* _navigationBarSuperview;
	double _percentComplete;
	UIView* _fromHeaderSnapshot;
	UIView* _toHeaderSnapshot;

}

@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                  //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic,__weak) UIView * tabBarSuperview;                        //@synthesize tabBarSuperview=_tabBarSuperview - In the implementation block
@property (assign,nonatomic,__weak) UIView * navigationBarSuperview;                 //@synthesize navigationBarSuperview=_navigationBarSuperview - In the implementation block
@property (assign,nonatomic) BOOL isRevealingTabBar;                                 //@synthesize isRevealingTabBar=_isRevealingTabBar - In the implementation block
@property (assign,nonatomic) BOOL isHidingTabBar;                                    //@synthesize isHidingTabBar=_isHidingTabBar - In the implementation block
@property (assign,nonatomic) double percentComplete;                                 //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) BOOL interactiveTransitionDimmedStatusBar;              //@synthesize interactiveTransitionDimmedStatusBar=_interactiveTransitionDimmedStatusBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * fromHeaderSnapshot;                     //@synthesize fromHeaderSnapshot=_fromHeaderSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * toHeaderSnapshot;                       //@synthesize toHeaderSnapshot=_toHeaderSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)standardPopAnimator;
-(void)setNavigationBarSuperview:(UIView *)arg1 ;
-(UIView *)navigationBarSuperview;
-(void)updateWithPercentComplete:(double)arg1 ;
-(void)finishTransitionWithCompleted:(BOOL)arg1 andVelocity:(double)arg2 ;
-(void)setUpViewHierarchy;
-(void)putBackViewHierarchyWithCompleted:(BOOL)arg1 ;
-(void)moveToPercentCompleted:(double)arg1 ;
-(void)setTabBarSuperview:(UIView *)arg1 ;
-(void)setIsHidingTabBar:(BOOL)arg1 ;
-(void)setIsRevealingTabBar:(BOOL)arg1 ;
-(BOOL)isRevealingTabBar;
-(BOOL)isHidingTabBar;
-(UIView *)fromHeaderSnapshot;
-(UIView *)toHeaderSnapshot;
-(UIView *)tabBarSuperview;
-(void)setInteractiveTransitionDimmedStatusBar:(BOOL)arg1 ;
-(BOOL)interactiveTransitionDimmedStatusBar;
-(void)setFromHeaderSnapshot:(UIView *)arg1 ;
-(void)setToHeaderSnapshot:(UIView *)arg1 ;
-(BOOL)isInteractive;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
@end

