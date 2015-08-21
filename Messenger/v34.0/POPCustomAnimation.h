/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	double _currentTime;
	double _elapsedTime;
	/*^block*/id _animate;

}

@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(id)_init;
-(double)beginTime;
-(id)animate;
-(double)elapsedTime;
-(double)currentTime;
-(void)setAnimate:(id)arg1 ;
@end

