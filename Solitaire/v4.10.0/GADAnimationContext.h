/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class UIViewController, UIView;

@interface GADAnimationContext : NSObject {

	UIViewController* _animatedViewController;
	UIView* _draggableViewSnapshot;
	CGRect _animatedViewStartFrame;
	CGRect _animatedViewEndFrame;
	CGRect _draggableViewStartFrame;
	CGRect _draggableViewEndFrame;

}

@property (nonatomic,retain) UIViewController * animatedViewController;              //@synthesize animatedViewController=_animatedViewController - In the implementation block
@property (assign,nonatomic) CGRect animatedViewStartFrame;                          //@synthesize animatedViewStartFrame=_animatedViewStartFrame - In the implementation block
@property (assign,nonatomic) CGRect animatedViewEndFrame;                            //@synthesize animatedViewEndFrame=_animatedViewEndFrame - In the implementation block
@property (assign,nonatomic) CGRect draggableViewStartFrame;                         //@synthesize draggableViewStartFrame=_draggableViewStartFrame - In the implementation block
@property (assign,nonatomic) CGRect draggableViewEndFrame;                           //@synthesize draggableViewEndFrame=_draggableViewEndFrame - In the implementation block
@property (nonatomic,retain) UIView * draggableViewSnapshot;                         //@synthesize draggableViewSnapshot=_draggableViewSnapshot - In the implementation block
-(UIViewController *)animatedViewController;
-(void)setAnimatedViewController:(UIViewController *)arg1 ;
-(CGRect)animatedViewStartFrame;
-(void)setAnimatedViewStartFrame:(CGRect)arg1 ;
-(CGRect)animatedViewEndFrame;
-(void)setAnimatedViewEndFrame:(CGRect)arg1 ;
-(CGRect)draggableViewStartFrame;
-(void)setDraggableViewStartFrame:(CGRect)arg1 ;
-(CGRect)draggableViewEndFrame;
-(void)setDraggableViewEndFrame:(CGRect)arg1 ;
-(UIView *)draggableViewSnapshot;
-(void)setDraggableViewSnapshot:(UIView *)arg1 ;
@end
