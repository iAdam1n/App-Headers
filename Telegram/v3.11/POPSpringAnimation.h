/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (assign,nonatomic) double springBounciness; 
@property (assign,nonatomic) double springSpeed; 
@property (assign,nonatomic) double dynamicsTension; 
@property (assign,nonatomic) double dynamicsFriction; 
@property (assign,nonatomic) double dynamicsMass; 
+(void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double*)arg3 friction:(double*)arg4 mass:(double*)arg5 ;
+(void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double*)arg3 speed:(double*)arg4 ;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)animation;
-(void)setSpringSpeed:(double)arg1 ;
-(void)setSpringBounciness:(double)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(void)_updatedDynamicsTension;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsMass;
-(double)dynamicsTension;
-(void)setDynamicsTension:(double)arg1 ;
-(double)dynamicsFriction;
-(void)setDynamicsFriction:(double)arg1 ;
-(double)dynamicsMass;
-(void)setDynamicsMass:(double)arg1 ;
-(double)springSpeed;
-(double)springBounciness;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
@end
