/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	double _currentTime;
	double _elapsedTime;
	/*^block*/id _animate;

}

@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(id)_init;
-(double)beginTime;
-(id)animate;
-(double)currentTime;
-(double)elapsedTime;
-(void)setAnimate:(id)arg1 ;
@end
