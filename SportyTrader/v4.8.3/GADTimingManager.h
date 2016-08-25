/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSArray;

@interface GADTimingManager : NSObject {

	NSString* _identifier;
	NSString* _userDefaultsKey;
	NSMutableDictionary* _timings;
	NSObject*<OS_dispatch_queue> _savingQueue;

}

@property (nonatomic,copy,readonly) NSArray * timings; 
@property (nonatomic,copy,readonly) NSArray * categories; 
-(void)loadPersistentTimings;
-(void)savePersistentTimings;
-(void)addTiming:(id)arg1 ;
-(void)removeTimingForCategory:(id)arg1 ;
-(id)addTimingWithCategory:(id)arg1 ;
-(id)timingForCategory:(id)arg1 ;
-(void)removeTiming:(id)arg1 ;
-(void)removeTimingsForCategories:(id)arg1 ;
-(void)removeAllTimings;
-(void)dealloc;
-(id)init;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(NSArray *)categories;
-(NSArray *)timings;
@end

