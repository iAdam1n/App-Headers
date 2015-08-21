/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterCardEventLogger, TFNTwitterStatus, NSDictionary;

@interface TFNTwitterLogEventContext : NSObject {

	TFNTwitterCardEventLogger* _logger;
	long long _logEventType;
	TFNTwitterStatus* _status;
	NSDictionary* _viewEvent;
	double _duration;

}

@property (nonatomic,readonly) TFNTwitterCardEventLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) long long logEventType;                          //@synthesize logEventType=_logEventType - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDictionary * viewEvent;                        //@synthesize viewEvent=_viewEvent - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
-(NSDictionary *)viewEvent;
-(id)initWithLogger:(id)arg1 logEventType:(long long)arg2 status:(id)arg3 viewEvent:(id)arg4 ;
-(id)initWithLogger:(id)arg1 logEventType:(long long)arg2 status:(id)arg3 ;
-(id)initWithLogger:(id)arg1 logEventType:(long long)arg2 status:(id)arg3 duration:(double)arg4 ;
-(id)initWithLogger:(id)arg1 logEventType:(long long)arg2 status:(id)arg3 viewEvent:(id)arg4 duration:(double)arg5 ;
-(long long)logEventType;
-(double)duration;
-(TFNTwitterStatus *)status;
-(TFNTwitterCardEventLogger *)logger;
@end

