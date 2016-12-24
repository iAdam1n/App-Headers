/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBExperimentLoggingRateLimiter : NSObject {

	double _rateLimit;
	NSMutableDictionary* _experiments;
	mutex _experimentsLock;

}
-(id)_dateForExperiment:(id)arg1 ;
-(void)_setDate:(id)arg1 forExperiment:(id)arg2 ;
-(id)initWithRateLimit:(double)arg1 ;
-(BOOL)canLogExperimentWithName:(id)arg1 date:(id)arg2 ;
-(void)didLogExperimentWithName:(id)arg1 date:(id)arg2 ;
@end
