/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADAdViewActiveViewMonitoring;
@interface GADAdViewActiveViewReporter : NSObject {

	BOOL _reporting;
	id<GADAdViewActiveViewMonitoring> _observer;

}

@property (assign,nonatomic,__weak) id<GADAdViewActiveViewMonitoring> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) BOOL reporting;                                               //@synthesize reporting=_reporting - In the implementation block
-(BOOL)reporting;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<GADAdViewActiveViewMonitoring>)observer;
-(void)setObserver:(id<GADAdViewActiveViewMonitoring>)arg1 ;
@end

