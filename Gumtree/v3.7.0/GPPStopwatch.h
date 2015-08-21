/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface GPPStopwatch : NSObject {

	long long _elapsedTime;
	BOOL _isRunning;
	unsigned long long _startTime;

}

@property (nonatomic,readonly) long long elapsedTime; 
@property (nonatomic,readonly) BOOL isRunning;                     //@synthesize isRunning=_isRunning - In the implementation block
+(id)watch;
-(void)reset;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(long long)elapsedTime;
@end
