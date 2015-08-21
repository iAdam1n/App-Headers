/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface TFXStopWatch : NSObject {

	double _referenceTime;
	double _elapsedTime;
	BOOL _running;
	double _lapTime;

}

@property (nonatomic,readonly) double lapTime;                  //@synthesize lapTime=_lapTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
+(id)stopWatch;
-(double)recordLapTime;
-(void)updateElapsedTime;
-(double)lapTime;
-(void)restart;
-(id)init;
-(void)stop;
-(void)start;
-(double)elapsedTime;
@end

