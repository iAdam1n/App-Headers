/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GADStatisticsCore, GADTimingManager;

@interface GADStatistics : NSObject {

	GADStatisticsCore* _statisticsCore;
	GADTimingManager* _timingManager;

}
-(void)startTimingNamed:(id)arg1 withExplicitEnd:(BOOL)arg2 ;
-(void)endTimingNamed:(id)arg1 ;
-(id)timingNamed:(id)arg1 ;
@end
