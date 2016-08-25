/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableArray, JMFNPagingScrollView, JMFNWrapperView, UIImageView, UIViewController, NSString;

@interface JMFNNavigationController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate> {

	BOOL _supressInnerShadow;
	BOOL _isDismissingVideoPlayer;
	NSMutableArray* _viewControllers;
	JMFNPagingScrollView* _pagingView;
	JMFNWrapperView* _wrapperView;
	UIImageView* _shadow;
	UIImageView* _innerShadow;
	UIImageView* _rightShadow;
	NSMutableArray* _pivotPoints;
	UIViewController* _activeController;
	UIViewController* _rootViewController;

}

@property (__weak) id<UINavigationControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableArray * viewControllers;                         //@synthesize viewControllers=_viewControllers - In the implementation block
@property (retain) JMFNPagingScrollView * pagingView;                        //@synthesize pagingView=_pagingView - In the implementation block
@property (retain) JMFNWrapperView * wrapperView;                            //@synthesize wrapperView=_wrapperView - In the implementation block
@property (retain) UIImageView * shadow;                                     //@synthesize shadow=_shadow - In the implementation block
@property (retain) UIImageView * innerShadow;                                //@synthesize innerShadow=_innerShadow - In the implementation block
@property (retain) UIImageView * rightShadow;                                //@synthesize rightShadow=_rightShadow - In the implementation block
@property (assign) BOOL supressInnerShadow;                                  //@synthesize supressInnerShadow=_supressInnerShadow - In the implementation block
@property (retain) NSMutableArray * pivotPoints;                             //@synthesize pivotPoints=_pivotPoints - In the implementation block
@property (retain) UIViewController * activeController;                      //@synthesize activeController=_activeController - In the implementation block
@property (assign) BOOL isDismissingVideoPlayer;                             //@synthesize isDismissingVideoPlayer=_isDismissingVideoPlayer - In the implementation block
@property (retain) UIViewController * rootViewController;                    //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) UIViewController * topViewController; 
-(void)setDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(id<UINavigationControllerDelegate>)delegate;
-(void)scrollToActiveController;
-(void)didReleaseDragLeftBeyondBoundsOffset:(double)arg1 ;
-(void)didDragLeftBeyondBoundsByOffset:(double)arg1 ;
-(void)scrollToController:(id)arg1 pagingDirection:(int)arg2 animated:(BOOL)arg3 ;
-(CGPoint)scrollOffsetForController:(id)arg1 pagingDirection:(int)arg2 ;
-(void)scrollToController:(id)arg1 ;
-(void)didReleaseDragRightBeyondBounds;
-(id)controllerAtOffset:(double)arg1 pagingDirection:(int)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(JMFNWrapperView *)wrapperView;
-(void)layoutControllersNow;
-(UIImageView *)innerShadow;
-(void)setSupressInnerShadow:(BOOL)arg1 ;
-(void)didBeginPinchClose;
-(void)didEndPinchClose;
-(id)secondLastController;
-(UIImageView *)rightShadow;
-(id)popSingleViewController:(id)arg1 animated:(BOOL)arg2 lastOperation:(BOOL)arg3 ;
-(void)pushViewController:(id)arg1 afterPoppingToController:(id)arg2 ;
-(void)activateController:(id)arg1 scrolling:(BOOL)arg2 pagingDirection:(int)arg3 ;
-(void)layoutControllers;
-(id)controllerBeforeController:(id)arg1 ;
-(UIViewController *)activeController;
-(void)setPivotPoints:(NSMutableArray *)arg1 ;
-(void)setWrapperView:(JMFNWrapperView *)arg1 ;
-(void)setInnerShadow:(UIImageView *)arg1 ;
-(void)setRightShadow:(UIImageView *)arg1 ;
-(void)i_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(NSMutableArray *)pivotPoints;
-(void)setActiveController:(UIViewController *)arg1 ;
-(void)activateTopController;
-(void)activateController:(id)arg1 scrolling:(BOOL)arg2 ;
-(void)fillToScreenBoundaries;
-(void)i_layoutControllers;
-(void)logControllerStack;
-(void)statusBarDidChangeVisibility;
-(id)popToActiveViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)supressInnerShadow;
-(BOOL)isDismissingVideoPlayer;
-(void)setIsDismissingVideoPlayer:(BOOL)arg1 ;
-(UIViewController *)topViewController;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopAnimation;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)visibleViewController;
-(NSMutableArray *)viewControllers;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(UIImageView *)shadow;
-(void)setShadow:(UIImageView *)arg1 ;
-(JMFNPagingScrollView *)pagingView;
-(void)setPagingView:(JMFNPagingScrollView *)arg1 ;
@end

