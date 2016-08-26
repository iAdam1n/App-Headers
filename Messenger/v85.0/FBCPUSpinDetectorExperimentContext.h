/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBCPUSpinDetectorExperimentContext : FBExperimentContext {

	BOOL _detectorEnabled;
	long long _processPctTrigger;
	long long _threadPctTrigger;
	long long _periodSeconds;

}

@property (nonatomic,readonly) BOOL detectorEnabled;                     //@synthesize detectorEnabled=_detectorEnabled - In the implementation block
@property (nonatomic,readonly) long long processPctTrigger;              //@synthesize processPctTrigger=_processPctTrigger - In the implementation block
@property (nonatomic,readonly) long long threadPctTrigger;               //@synthesize threadPctTrigger=_threadPctTrigger - In the implementation block
@property (nonatomic,readonly) long long periodSeconds;                  //@synthesize periodSeconds=_periodSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)detectorEnabled;
-(long long)processPctTrigger;
-(long long)threadPctTrigger;
-(long long)periodSeconds;
@end
