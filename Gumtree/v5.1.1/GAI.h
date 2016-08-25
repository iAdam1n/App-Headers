/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAITracker, GAILogger;
#import <Gumtree/Gumtree-Structs.h>
@class GAIBatchingDispatcher, NSMutableDictionary;

@interface GAI : NSObject {

	BOOL trackUncaughtExceptions_;
	BOOL _dryRun;
	BOOL _optOut;
	GAIBatchingDispatcher* dispatcher_;
	NSMutableDictionary* trackers_;
	id<GAITracker> defaultTracker_;
	Class trackerImplClass_;
	id<GAILogger> logger_;
	Class _urlConnectionClass;

}

@property (assign,nonatomic) id<GAITracker> defaultTracker; 
@property (nonatomic,retain) id<GAILogger> logger; 
@property (assign,nonatomic) BOOL optOut;                                     //@synthesize optOut=_optOut - In the implementation block
@property (assign,nonatomic) double dispatchInterval; 
@property (assign,nonatomic) BOOL trackUncaughtExceptions; 
@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,retain) GAIBatchingDispatcher * dispatcher; 
@property (nonatomic,retain) NSMutableDictionary * trackers; 
@property (assign,nonatomic) Class trackerImplClass; 
@property (assign,nonatomic) Class urlConnectionClass;                        //@synthesize urlConnectionClass=_urlConnectionClass - In the implementation block
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)thread;
+(oneway void)threadMain:(id)arg1 ;
+(id)sharedLogger;
-(id<GAITracker>)defaultTracker;
-(void)setDefaultTracker:(id<GAITracker>)arg1 ;
-(double)dispatchInterval;
-(void)setDispatchInterval:(double)arg1 ;
-(void)setUrlConnectionClass:(Class)arg1 ;
-(NSMutableDictionary *)trackers;
-(Class)trackerImplClass;
-(id)trackerWithName:(id)arg1 trackingId:(id)arg2 ;
-(void)dispatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)createDispatcher:(id*)arg1 ;
-(Class)urlConnectionClass;
-(BOOL)trackUncaughtExceptions;
-(void)setTrackUncaughtExceptions:(BOOL)arg1 ;
-(id)trackerWithTrackingId:(id)arg1 ;
-(void)removeTrackerByName:(id)arg1 ;
-(BOOL)optOut;
-(void)setOptOut:(BOOL)arg1 ;
-(void)setTrackers:(NSMutableDictionary *)arg1 ;
-(void)setTrackerImplClass:(Class)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(id<GAILogger>)logger;
-(void)setLogger:(id<GAILogger>)arg1 ;
-(id)clientId;
-(void)dispatch;
-(GAIBatchingDispatcher *)dispatcher;
-(void)setDispatcher:(GAIBatchingDispatcher *)arg1 ;
@end

