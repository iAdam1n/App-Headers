/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNInboxImpressionStore, MNInboxImpressionAnalyticsLogger;

@interface MNInboxImpressionTracker : NSObject {

	MNInboxImpressionStore* _inboxImpressionStore;
	MNInboxImpressionAnalyticsLogger* _inboxAnalyticsLogger;

}
-(void)startTrackingImpresions;
-(void)inboxUnitsDidAppear:(id)arg1 ;
-(void)inboxUnitsDidDisappear:(id)arg1 ;
-(void)endTrackingImpressions;
-(void)inboxUnitDidClick:(id)arg1 withClickTarget:(id)arg2 ;
-(void)inboxUnitDidAppear:(id)arg1 ;
-(void)inboxUnitDidDisappear:(id)arg1 ;
-(void)inboxUnitDidHideItem:(id)arg1 ;
-(void)_updateOrAddAppearingImpressionWithLoggingData:(id)arg1 ;
-(void)_updateDisappearingImpressionWithLoggingData:(id)arg1 ;
-(void)_updateStoredEvent:(id)arg1 timeObjectLastAppeared:(double)arg2 ;
-(void)_addViewportEventDataWithLoggingData:(id)arg1 ;
-(id)init;
@end

