/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <QuartzCore/CAAnimationGroup.h>
#import <BubbleMania/AnimatorEndDelegate.h>

@protocol AnimatorEndDelegate;
@class NSDictionary, NSString, CALayer;

@interface Animator : CAAnimationGroup <AnimatorEndDelegate> {

	NSDictionary* animationMap;
	int animatorFillMode;
	NSString* animatorName;
	id<AnimatorEndDelegate> animatorEndDelegate;
	CALayer* animatingLayer;

}

@property (nonatomic,retain) NSDictionary * animationMap; 
@property (assign,nonatomic) CALayer * animatingLayer; 
@property (assign) int animatorFillMode; 
@property (nonatomic,retain) NSString * animatorName; 
@property (nonatomic,retain) id<AnimatorEndDelegate> animatorEndDelegate; 
+(id)animator;
-(id)delay:(float)arg1 ;
-(id)durate:(float)arg1 ;
-(id)fade:(float)arg1 :(float)arg2 ;
-(id)animateOn:(id)arg1 ;
-(id)translateY:(float)arg1 :(float)arg2 ;
-(id)then:(id)arg1 ;
-(id)fade:(float)arg1 ;
-(id)applyTo:(id)arg1 ;
-(void)animatorEnd:(id)arg1 ;
-(id)rotateX:(float)arg1 ;
-(id)rotateY:(float)arg1 ;
-(id)rotateZ:(float)arg1 ;
-(id)reverse:(BOOL)arg1 ;
-(id)repeat:(float)arg1 ;
-(id)translateX:(float)arg1 ;
-(id)translateY:(float)arg1 ;
-(void)setAnimationMap:(NSDictionary *)arg1 ;
-(void)setAnimatorName:(NSString *)arg1 ;
-(void)setAnimatorFillMode:(int)arg1 ;
-(void)setAnimatingLayer:(CALayer *)arg1 ;
-(void)setAnimatorEndDelegate:(id<AnimatorEndDelegate>)arg1 ;
-(CALayer *)animatingLayer;
-(int)animatorFillMode;
-(NSString *)animatorName;
-(id<AnimatorEndDelegate>)animatorEndDelegate;
-(void)animateFrom:(id)arg1 to:(id)arg2 forKey:(id)arg3 ;
-(void)animateSteps:(id)arg1 forKey:(id)arg2 ;
-(id)animateOnLayer:(id)arg1 ;
-(id)ease:(id)arg1 ;
-(id)fadeWithSteps:(id)arg1 ;
-(id)shift:(id)arg1 :(id)arg2 ;
-(id)shiftWithSteps:(id)arg1 ;
-(id)bounds:(CGRect)arg1 :(CGRect)arg2 ;
-(id)scaleZ:(float)arg1 ;
-(id)scale:(float)arg1 :(float)arg2 ;
-(id)scaleX:(float)arg1 :(float)arg2 ;
-(id)scaleY:(float)arg1 :(float)arg2 ;
-(id)scaleZ:(float)arg1 :(float)arg2 ;
-(id)scaleWithSteps:(id)arg1 ;
-(id)scaleXWithSteps:(id)arg1 ;
-(id)scaleYWithSteps:(id)arg1 ;
-(id)translate:(float)arg1 ;
-(id)translate:(float)arg1 :(float)arg2 ;
-(id)translateX:(float)arg1 :(float)arg2 ;
-(id)translateWithSteps:(id)arg1 ;
-(id)translateXWithSteps:(id)arg1 ;
-(id)translateYWithSteps:(id)arg1 ;
-(id)rotateX:(float)arg1 :(float)arg2 ;
-(id)rotateY:(float)arg1 :(float)arg2 ;
-(id)rotateZ:(float)arg1 :(float)arg2 ;
-(id)rotateXWithSteps:(id)arg1 ;
-(id)rotateYWithSteps:(id)arg1 ;
-(id)rotateZWithSteps:(id)arg1 ;
-(NSDictionary *)animationMap;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)shift:(id)arg1 ;
-(id)initWithDuration:(float)arg1 ;
-(id)scale:(float)arg1 ;
-(id)scaleX:(float)arg1 ;
-(id)scaleY:(float)arg1 ;
-(id)fill:(int)arg1 ;
@end
