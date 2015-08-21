/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ECElapsedTimeLogger : NSObject {

	double _startTime;
	double _lastTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
+(id)sharedLogger;
-(void)logTime:(id)arg1 ;
-(void)setLastTime:(double)arg1 ;
-(double)lastTime;
-(void)logNoTime:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)reset;
-(double)startTime;
@end
