/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, FBAnalyticsTimeSpentDelegate;
@class NSObject;

@interface FBAnalyticsTimeSpent : NSObject {

	double _lastActive;
	double _startTime;
	long long _tosArrayLengthInSeconds;
	long long _sequenceID;
	int _tosCumulativeBitsSet;
	NSObject*<OS_dispatch_queue> _queue;
	double _unixTime;
	long long _persistentUptime;
	int _tosArray[2];
	/*^block*/id _timingBlock;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _isActiveTimer;
	id<FBAnalyticsTimeSpentDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<FBAnalyticsTimeSpentDelegate> delegate; 
-(double)_currentSystemTime;
-(void)_shipItWithSystemTime:(double)arg1 ;
-(double)_currentUnixTime;
-(long long)_currentPersistentUptime;
-(void)_doUpdate:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long long)arg3 ;
-(void)_resetArray;
-(id)_packageData;
-(int)_calculateElapsedFromTime:(double)arg1 ;
-(BOOL)_tosArrayEmpty;
-(void)_setArrayStartTime:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long long)arg3 ;
-(void)save;
-(void)dealloc;
-(void)setDelegate:(id<FBAnalyticsTimeSpentDelegate>)arg1 ;
-(id<FBAnalyticsTimeSpentDelegate>)delegate;
-(void)reset;
-(void)_startTimer:(int)arg1 ;
-(void)update:(double)arg1 ;
-(void)_stopTimer;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
@end

