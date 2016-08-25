/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray, NSLock;

@interface YapMemoryTable : NSObject {

	Class keyClass;
	NSMutableDictionary* dict;
	NSObject*<OS_dispatch_queue> queue;
	void* IsOnQueueKey;
	NSMutableArray* snapshots;
	NSMutableArray* changes;
	NSLock* lock;

}
-(void)asyncCheckpoint:(long long)arg1 ;
-(id)initWithKeyClass:(Class)arg1 ;
-(id)newReadWriteTransactionWithSnapshot:(unsigned long long)arg1 ;
-(id)newReadTransactionWithSnapshot:(unsigned long long)arg1 ;
-(void)asyncRollback:(long long)arg1 withChanges:(id)arg2 ;
@end

