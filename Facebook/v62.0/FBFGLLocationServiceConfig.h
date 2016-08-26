/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, FBFGLLogger;

@interface FBFGLLocationServiceConfig : NSObject {

	NSSet* _allFetcherIds;
	NSSet* _allFetchers;
	FBFGLLogger* _logger;
	BOOL _fireTriggerUponForeground;
	BOOL _expireOldSignal;
	double _periodicity;
	double _minimumFetchInterval;
	double _maximumSignalAge;
	double _maximumSignalsCollectionTime;

}

@property (nonatomic,readonly) double periodicity;                               //@synthesize periodicity=_periodicity - In the implementation block
@property (nonatomic,readonly) double minimumFetchInterval;                      //@synthesize minimumFetchInterval=_minimumFetchInterval - In the implementation block
@property (nonatomic,readonly) BOOL fireTriggerUponForeground;                   //@synthesize fireTriggerUponForeground=_fireTriggerUponForeground - In the implementation block
@property (nonatomic,readonly) double maximumSignalAge;                          //@synthesize maximumSignalAge=_maximumSignalAge - In the implementation block
@property (nonatomic,readonly) BOOL expireOldSignal;                             //@synthesize expireOldSignal=_expireOldSignal - In the implementation block
@property (nonatomic,readonly) double maximumSignalsCollectionTime;              //@synthesize maximumSignalsCollectionTime=_maximumSignalsCollectionTime - In the implementation block
-(double)minimumFetchInterval;
-(double)maximumSignalsCollectionTime;
-(BOOL)expireOldSignal;
-(double)maximumSignalAge;
-(id)allFetcherIds;
-(void)_generateFetcherIds;
-(id)initWithPeriodicity:(double)arg1 maximumSignalAge:(double)arg2 maximumSignalsCollectionTime:(double)arg3 fetchers:(id)arg4 minimumFetchInterval:(double)arg5 logger:(id)arg6 fireTriggerUponForeground:(BOOL)arg7 expireOldSignal:(BOOL)arg8 ;
-(id)allFetchers;
-(double)periodicity;
-(BOOL)fireTriggerUponForeground;
@end
