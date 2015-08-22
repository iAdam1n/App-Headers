/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (assign,nonatomic) double springBounciness; 
@property (assign,nonatomic) double springSpeed; 
@property (assign,nonatomic) double dynamicsTension; 
@property (assign,nonatomic) double dynamicsFriction; 
@property (assign,nonatomic) double dynamicsMass; 
+(void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double*)arg3 speed:(double*)arg4 ;
+(void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double*)arg3 friction:(double*)arg4 mass:(double*)arg5 ;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)animation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
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
-(void)setSpringSpeed:(double)arg1 ;
-(double)springBounciness;
-(void)setSpringBounciness:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
@end
