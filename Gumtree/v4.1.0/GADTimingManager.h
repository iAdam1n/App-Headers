/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
