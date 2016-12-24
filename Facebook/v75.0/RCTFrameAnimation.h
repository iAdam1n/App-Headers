/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTAnimationDriver.h>

@class NSNumber, RCTValueAnimatedNode, NSArray, NSString;

@interface RCTFrameAnimation : NSObject <RCTAnimationDriver> {

	NSArray* _frames;
	double _toValue;
	double _fromValue;
	double _delay;
	double _animationStartTime;
	double _animationCurrentTime;
	/*^block*/id _callback;
	BOOL _animationHasBegun;
	BOOL _animationHasFinished;
	NSNumber* _animationId;
	RCTValueAnimatedNode* _valueNode;

}

@property (nonatomic,retain) NSNumber * animationId;                        //@synthesize animationId=_animationId - In the implementation block
@property (nonatomic,retain) RCTValueAnimatedNode * valueNode;              //@synthesize valueNode=_valueNode - In the implementation block
@property (assign,nonatomic) BOOL animationHasBegun;                        //@synthesize animationHasBegun=_animationHasBegun - In the implementation block
@property (assign,nonatomic) BOOL animationHasFinished;                     //@synthesize animationHasFinished=_animationHasFinished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateOutputWithFrameOutput:(double)arg1 ;
-(id)initWithId:(id)arg1 config:(id)arg2 forNode:(id)arg3 callBack:(/*^block*/id)arg4 ;
-(void)stepAnimation;
-(void)removeAnimation;
-(NSNumber *)animationId;
-(RCTValueAnimatedNode *)valueNode;
-(BOOL)animationHasBegun;
-(BOOL)animationHasFinished;
-(void)setAnimationId:(NSNumber *)arg1 ;
-(void)setValueNode:(RCTValueAnimatedNode *)arg1 ;
-(void)setAnimationHasBegun:(BOOL)arg1 ;
-(void)setAnimationHasFinished:(BOOL)arg1 ;
-(id)init;
-(void)stopAnimation;
-(void)startAnimation;
@end
