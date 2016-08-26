/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLocalStatsEventData : NSObject {

	NSString* _marauderEvent;
	long long _type;
	unsigned long long _metricsNeeded;

}

@property (nonatomic,copy,readonly) NSString * marauderEvent;                 //@synthesize marauderEvent=_marauderEvent - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long metricsNeeded;              //@synthesize metricsNeeded=_metricsNeeded - In the implementation block
-(NSString *)marauderEvent;
-(id)initWithEvent:(id)arg1 type:(long long)arg2 metrics:(unsigned long long)arg3 ;
-(unsigned long long)metricsNeeded;
-(id)init;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
@end
