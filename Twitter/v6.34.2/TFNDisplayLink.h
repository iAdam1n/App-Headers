/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CADisplayLink;

@interface TFNDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) long long frameInterval; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)init;
-(double)timestamp;
-(double)duration;
-(void)invalidate;
-(void)setFrameInterval:(long long)arg1 ;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)frameInterval;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isPaused;
@end

