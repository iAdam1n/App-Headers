/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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

