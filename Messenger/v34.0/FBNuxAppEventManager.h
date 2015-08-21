/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>

@protocol FBNuxAppEventManagerDataSource;
@class FBReachabilityAnnouncer, FBUserSession, NSSet, NSMutableDictionary, NSString;

@interface FBNuxAppEventManager : NSObject <FBReachabilityListener> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBUserSession* _session;
	id<FBNuxAppEventManagerDataSource> _dataSource;
	NSSet* _supportedEvents;
	NSMutableDictionary* _lastEventTime;

}

@property (nonatomic,readonly) id<FBNuxAppEventManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSSet * supportedEvents;                                        //@synthesize supportedEvents=_supportedEvents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastEventTime;                          //@synthesize lastEventTime=_lastEventTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)postAppEvent:(id)arg1 withContext:(id)arg2 ;
+(void)postAppEvent:(id)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)lastOccurrenceTimeForEvent:(id)arg1 ;
-(void)_processNotification:(id)arg1 ;
-(id)_allNuxAppEvents;
-(id)_eventNameForNotification:(id)arg1 ;
-(id)_contextForNotification:(id)arg1 ;
-(void)_handleEvent:(id)arg1 withContext:(id)arg2 ;
-(id)initWithSession:(id)arg1 reachabilityAnnouncer:(id)arg2 dataSource:(id)arg3 ;
-(void)postAppEventForTabBarItemSelectedWithBookmarkID:(id)arg1 ;
-(void)setSupportedEvents:(NSSet *)arg1 ;
-(NSMutableDictionary *)lastEventTime;
-(void)setLastEventTime:(NSMutableDictionary *)arg1 ;
-(void)logAppEvent:(id)arg1 ;
-(NSSet *)supportedEvents;
-(void)dealloc;
-(id<FBNuxAppEventManagerDataSource>)dataSource;
@end

