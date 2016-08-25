/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIViewController;

@interface ToolButton : UIView {

	UIImageView* image;
	UILabel* label;
	UIViewController* obj;
	SEL selector;
	int origSize;
	int animSizeInc;
	int animCount;
	int animDuration;
	unsigned char animating;
	UIImageView* overlayImage;
	unsigned char boundsCheck;

}

@property (assign) unsigned char boundsCheck; 
-(void)animateImage;
-(id)initWithFrame:(CGRect)arg1 imageName:(id)arg2 text:(id)arg3 size:(int)arg4 ;
-(void)setAnimationImage:(id)arg1 ;
-(void)animationOn;
-(void)animationOff;
-(unsigned char)boundsCheck;
-(void)setBoundsCheck:(unsigned char)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

