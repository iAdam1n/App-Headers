/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@protocol OS_dispatch_queue;
@class NSObject, FBWebRTCCallLogDatabase, FBWebRTCCallLogListenerAnnouncer, NSString;

@interface FBWebRTCCallLog : NSObject <FBSessionClassProvidable> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBWebRTCCallLogDatabase* _database;
	FBWebRTCCallLogListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openDatabaseIfNeeded:(id)arg1 ;
+(id)_rebuildDatabaseIfNeeded:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_executeAsyncOpenDatabaseCall:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_executeAsyncDatabaseCall:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDatabasePath:(id)arg1 callbackQueue:(id)arg2 ;
-(void)closeLog:(/*^block*/id)arg1 ;
-(void)addCall:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCallsBeforeTime:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryRecentCallersMaxCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryRecentCallsMaxCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryRecentCallsForUserID:(id)arg1 maxCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
@end
