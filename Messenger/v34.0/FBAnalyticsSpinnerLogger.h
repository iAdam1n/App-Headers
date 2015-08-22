/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBAnalytics, FBAnalyticsPerfLogger;

@interface FBAnalyticsSpinnerLogger : NSObject {

	double _spinnerStartTime;
	BOOL _active;
	NSString* _spinnerName;
	NSString* _moduleName;
	NSString* _analyticsUUID;
	FBAnalytics* _analytics;
	FBAnalyticsPerfLogger* _perfLogger;
	unsigned long long _currentSpinnerID;
	double _timeElapsed;

}

@property (nonatomic,readonly) BOOL active;                                      //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long currentSpinnerID;              //@synthesize currentSpinnerID=_currentSpinnerID - In the implementation block
@property (assign,nonatomic) double timeElapsed;                                 //@synthesize timeElapsed=_timeElapsed - In the implementation block
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3 ;
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3 analytics:(id)arg4 perfLogger:(id)arg5 ;
-(id)spinnerNameSpace;
-(void)setTimeElapsed:(double)arg1 ;
-(/*^block*/id)_perfLoggerBlockForResult:(unsigned long long)arg1 extraBlock:(/*^block*/id)arg2 ;
-(id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 ;
-(void)logSpinnerEvent:(/*^block*/id)arg1 withResult:(unsigned long long)arg2 ;
-(void)logSpinnerEvent:(/*^block*/id)arg1 withResult:(unsigned long long)arg2 timeInterval:(double)arg3 ;
-(void)markNetworkTimeout;
-(void)markAsStartupLoad;
-(unsigned long long)currentSpinnerID;
-(double)timeElapsed;
-(void)dealloc;
-(id)description;
-(void)reset;
-(BOOL)active;
-(void)start;
@end
