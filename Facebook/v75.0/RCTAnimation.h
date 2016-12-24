/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTAnimation : NSObject {

	double _duration;
	double _delay;
	NSString* _property;
	double _springDamping;
	double _initialVelocity;
	long long _animationType;

}

@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) double springDamping;                  //@synthesize springDamping=_springDamping - In the implementation block
@property (nonatomic,readonly) double initialVelocity;                //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) long long animationType;               //@synthesize animationType=_animationType - In the implementation block
+(void)keyboardWillChangeFrame:(id)arg1 ;
+(void)initializeStatics;
-(id)initWithDuration:(double)arg1 dictionary:(id)arg2 ;
-(void)performAnimations:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(double)duration;
-(double)delay;
-(double)initialVelocity;
-(long long)animationType;
-(double)springDamping;
-(NSString *)property;
@end
