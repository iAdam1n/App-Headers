/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTimer, NSDictionary, NSString;

@interface TFNPerformanceTest : NSObject {

	TFNTimer* _timeoutTimer;
	BOOL _timedOut;
	BOOL _cancelled;
	BOOL _restarting;
	BOOL _running;
	BOOL _sendResults;
	BOOL _exitOnCompletion;
	NSDictionary* _parameters;
	NSString* _name;
	double _timeoutDuration;

}

@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timeoutDuration;                   //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (nonatomic,readonly) BOOL timedOut;                          //@synthesize timedOut=_timedOut - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) BOOL sendResults;                       //@synthesize sendResults=_sendResults - In the implementation block
@property (nonatomic,readonly) BOOL exitOnCompletion;                  //@synthesize exitOnCompletion=_exitOnCompletion - In the implementation block
-(void)restartWithParameters:(id)arg1 ;
-(void)_exit;
-(void)finishWithResults:(id)arg1 error:(id)arg2 ;
-(void)_timeout;
-(void)_applicationDidCompleteBackgroundFetch:(id)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(void)_reportResults:(id)arg1 error:(id)arg2 ;
-(BOOL)sendResults;
-(void)_didCompleteWithReport:(id)arg1 ;
-(void)_sendReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)exitOnCompletion;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)stop;
-(BOOL)cancelled;
-(void)run;
-(void)start;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)_applicationDidResignActive:(id)arg1 ;
-(double)timeoutDuration;
-(NSDictionary *)parameters;
-(BOOL)running;
-(BOOL)timedOut;
@end
