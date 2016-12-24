/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet, MNSecureThreadSummaryUpdate;

@interface MNThreadClientUpdateOptimisticMappingInfo : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSArray* _syncedSummaryUpdates;
	NSSet* _deleteSyncedThreads_threadKeys;
	unsigned long long _deleteAllPendingThreadRequests_watermarkTimestamp;
	unsigned long long _deleteAllThreadsInOtherFolder_watermarkTimestamp;
	MNSecureThreadSummaryUpdate* _secureThreadSummaryUpdate;
	NSArray* _messageUpdates;

}
+(id)deleteAllPendingThreadRequestsWithWatermarkTimestamp:(unsigned long long)arg1 ;
+(id)deleteAllThreadsInOtherFolderWithWatermarkTimestamp:(unsigned long long)arg1 ;
+(id)deleteSyncedThreadsWithThreadKeys:(id)arg1 ;
+(id)messageUpdates:(id)arg1 ;
+(id)secureThreadSummaryUpdate:(id)arg1 ;
+(id)syncedSummaryUpdates:(id)arg1 ;
-(void)matchSyncedSummaryUpdates:(/*^block*/id)arg1 deleteSyncedThreads:(/*^block*/id)arg2 deleteAllPendingThreadRequests:(/*^block*/id)arg3 deleteAllThreadsInOtherFolder:(/*^block*/id)arg4 secureThreadSummaryUpdate:(/*^block*/id)arg5 messageUpdates:(/*^block*/id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
