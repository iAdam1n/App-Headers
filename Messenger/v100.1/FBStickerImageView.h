/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface FBStickerImageView : UIImageView <CAAnimationDelegate> {

	unsigned long long _finiteAnimationState;
	BOOL _hasFiniteAnimation;
	unsigned long long _finiteAnimationLastFrameIndex;

}

@property (assign,nonatomic) BOOL hasFiniteAnimation;                                       //@synthesize hasFiniteAnimation=_hasFiniteAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long finiteAnimationLastFrameIndex;              //@synthesize finiteAnimationLastFrameIndex=_finiteAnimationLastFrameIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHasFiniteAnimation:(BOOL)arg1 ;
-(void)setFiniteAnimationLastFrameIndex:(unsigned long long)arg1 ;
-(void)_startFiniteAnimatePhaseOne;
-(id)_animationWithImages:(id)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 ;
-(void)_startFiniteAnimatePhaseTwo;
-(BOOL)hasFiniteAnimation;
-(unsigned long long)finiteAnimationLastFrameIndex;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
@end
