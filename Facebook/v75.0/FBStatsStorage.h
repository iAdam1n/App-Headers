/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBStatsStorage : NSObject {

	NSMutableDictionary* _counters;

}
-(void)reportInt:(long long)arg1 forEvent:(int)arg2 action:(short)arg3 ;
-(void)reportString:(id)arg1 forEvent:(int)arg2 action:(short)arg3 ;
-(id)toDictionaryWithEventData:(id)arg1 ;
-(id)_statsObjectForTestingWithEvent:(int)arg1 action:(short)arg2 ;
-(id)init;
@end
