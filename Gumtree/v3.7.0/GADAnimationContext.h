/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
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
@property (assign,nonatomic) UIView * draggableViewSnapshot;                         //@synthesize draggableViewSnapshot=_draggableViewSnapshot - In the implementation block
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

