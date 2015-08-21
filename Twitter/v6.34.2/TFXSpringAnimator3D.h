/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFXAnimator.h>

@class TFXSpringSolver;

@interface TFXSpringAnimator3D : TFXAnimator {

	TFXSpringSolver* _springX;
	TFXSpringSolver* _springY;
	TFXSpringSolver* _springZ;

}

@property (nonatomic,readonly) TFXSpringSolver * springX;                                   //@synthesize springX=_springX - In the implementation block
@property (nonatomic,readonly) TFXSpringSolver * springY;                                   //@synthesize springY=_springY - In the implementation block
@property (nonatomic,readonly) TFXSpringSolver * springZ;                                   //@synthesize springZ=_springZ - In the implementation block
@property (assign,nonatomic) TFXPoint3D position; 
@property (assign,nonatomic) TFXPoint3D velocity; 
@property (assign,nonatomic) TFXPoint3D springPosition; 
@property (assign,nonatomic,__weak) id<TFXSpringAnimation3DObserver> delegate; 
-(TFXSpringSolver *)springX;
-(TFXSpringSolver *)springY;
-(void)setSpringPosition:(TFXPoint3D)arg1 ;
-(TFXPoint3D)springPosition;
-(BOOL)animationShouldComplete;
-(void)notifySpringXStabilized;
-(void)notifySpringYStabilized;
-(TFXSpringSolver *)springZ;
-(void)notifySpringZStabilized;
-(id)init;
-(void)setVelocity:(TFXPoint3D)arg1 ;
-(void)setPosition:(TFXPoint3D)arg1 ;
-(TFXPoint3D)position;
-(TFXPoint3D)velocity;
-(void)updateAnimation;
@end

