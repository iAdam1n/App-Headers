/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLiveLocationThreadSummaryListener <NSObject>
@required
-(void)updatedLiveLocationForThreadKey:(id)arg1 updatedLiveLocation:(id)arg2 allLiveLocations:(id)arg3;
-(void)threadSummaryReplacedForThreadKey:(id)arg1 originalSummary:(id)arg2 withThreadSummary:(id)arg3;
-(void)purgedAllThreadSummaries;

@end
