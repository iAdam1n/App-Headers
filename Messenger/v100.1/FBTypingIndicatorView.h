/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FBTypingIndicatorView : UIView {

	NSMutableArray* _dotLayers;
	NSMutableArray* _animations;
	double _typingDotSize;
	double _maxAmplitude;
	unsigned long long _bubbleDotType;

}
+(CGSize)preferredSize;
-(id)initWithTypingDotSize:(double)arg1 typingDotType:(unsigned long long)arg2 maxAmplitude:(double)arg3 animated:(BOOL)arg4 ;
-(void)_initLayers;
-(void)_initAnimations;
-(void)_updateAnimationState;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)_isAnimating;
-(void)_stopAnimation;
-(void)_startAnimation;
-(void)_appWillEnterForeground;
@end
