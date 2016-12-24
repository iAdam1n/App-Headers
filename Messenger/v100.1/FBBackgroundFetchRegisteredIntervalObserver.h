/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundFetchRegisteredObserver.h>

@protocol FBBackgroundFetchObserver;
@class FBBackgroundFetchThrottler, NSString;

@interface FBBackgroundFetchRegisteredIntervalObserver : NSObject <FBBackgroundFetchRegisteredObserver> {

	id<FBBackgroundFetchObserver> _observer;
	FBBackgroundFetchThrottler* _throttler;

}

@property (nonatomic,__weak,readonly) id<FBBackgroundFetchObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) FBBackgroundFetchThrottler * throttler;                     //@synthesize throttler=_throttler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleBackgroundFetchRequest:(id)arg1 ;
-(BOOL)shouldBeCalledAtDate:(id)arg1 notification:(BOOL)arg2 reachability:(unsigned long long)arg3 ;
-(id)initWithObserver:(id)arg1 withMinimumInterval:(FBBackgroundFetchMinimumInterval)arg2 ;
-(double)minimumInterval;
-(id<FBBackgroundFetchObserver>)observer;
-(FBBackgroundFetchThrottler *)throttler;
@end
