/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBModalAnimatedTransitioning.h>

@protocol FBModalAnimatedTransitioning <NSObject>
@optional
-(void)animationEnded:(BOOL)arg1;

@required
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(double)animationDuration;

@end


@protocol FBModalAnimation;
@class NSString;

@interface FBModalAnimatedTransitioning : NSObject <FBModalAnimatedTransitioning> {

	id<FBModalAnimation> _animation;
	BOOL _isPresenting;

}

@property (nonatomic,readonly) BOOL isPresenting;                           //@synthesize isPresenting=_isPresenting - In the implementation block
@property (nonatomic,readonly) id<FBModalAnimation> animation;              //@synthesize animation=_animation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initForPresentation:(BOOL)arg1 withAnimation:(id)arg2 ;
-(id<FBModalAnimation>)animation;
-(double)animationDuration;
-(BOOL)isPresenting;
@end

