/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSObject, NSDictionary;

@interface GADStatisticsCore : NSObject {

	NSMutableDictionary* _statistics;
	NSString* _userDefaultsKey;
	NSObject*<OS_dispatch_queue> _lockQueue;

}

@property (nonatomic,copy,readonly) NSDictionary * statistics; 
-(void)savePersistentStatistics;
-(void)appendString:(id)arg1 toArrayForKey:(id)arg2 ;
-(void)appendDictionary:(id)arg1 toArrayForKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(NSDictionary *)statistics;
@end
