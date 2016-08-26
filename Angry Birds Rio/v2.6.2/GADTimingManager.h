/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
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
