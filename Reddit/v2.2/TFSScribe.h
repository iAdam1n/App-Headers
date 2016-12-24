/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TFSScribeErrorDelegate;
@class NSObject, NSURL, NSManagedObjectContext;

@interface TFSScribe : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _storeURL;
	NSURL* _modelURL;
	long long _requestID;
	NSManagedObjectContext* _managedObjectContext;
	unsigned _flags;
	id<TFSScribeErrorDelegate> _errorDelegate;

}

@property (assign,nonatomic,__weak) id<TFSScribeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
+(BOOL)isDebugEnabled;
+(void)setDebugEnabled:(BOOL)arg1 ;
-(void)openWithStartBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)flushUserID:(id)arg1 requestHandler:(id)arg2 ;
-(id)initWithStoreURL:(id)arg1 ;
-(id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 ;
-(void)_resetScribeEvents;
-(void)closeWithStartBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleScribeError:(id)arg1 ;
-(void)_enqueueEvent:(id)arg1 timestamp:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_performInManagedObjectContext:(/*^block*/id)arg1 ;
-(void)_enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 timestamp:(id)arg5 userID:(id)arg6 managedObjectContext:(id)arg7 ;
-(void)flushUserID:(id)arg1 token:(id)arg2 requestHandler:(id)arg3 ;
-(void)_batchImpressionsForUserID:(id)arg1 requestHandler:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)_flushEventsWithRequestID:(long long)arg1 userID:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_didFlushEventsWithRequestID:(long long)arg1 disposition:(unsigned long long)arg2 userID:(id)arg3 managedObjectContext:(id)arg4 ;
-(void)_deleteEventsForUserID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_deleteImpressionsForUserID:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)_modelURL;
-(void)_removePersistentStore;
-(void)enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 userID:(id)arg5 ;
-(void)deleteUserID:(id)arg1 ;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)close;
-(void)setErrorDelegate:(id<TFSScribeErrorDelegate>)arg1 ;
-(id<TFSScribeErrorDelegate>)errorDelegate;
-(void)open;
-(void)_setupManagedObjectContext;
-(void)enqueueEvent:(id)arg1 ;
@end
