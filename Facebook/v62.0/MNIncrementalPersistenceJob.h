/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, FBMSyncedThreadKey, FBMMessage, MNIncrementalPersistenceMessageDeleteJobData;

@interface MNIncrementalPersistenceJob : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMThreadSummary* _updateThread_summary;
	FBMSyncedThreadKey* _deleteThread_threadKey;
	FBMMessage* _insertMessage_message;
	FBMMessage* _updateMessage_message;
	MNIncrementalPersistenceMessageDeleteJobData* _deleteMessage_jobData;
	MNIncrementalPersistenceMessageDeleteJobData* _replaceMessage_messageDeleteData;
	FBMMessage* _replaceMessage_newMessage;
	unsigned long long _updateThreadListContinuity_oldestContinuousThreadTimestamp;
	long long _updateThreadListContinuity_folderType;

}
+(id)deleteThreadWithThreadKey:(id)arg1 ;
+(id)updateThreadWithSummary:(id)arg1 ;
+(id)insertMessageWithMessage:(id)arg1 ;
+(id)updateThreadListContinuityWithOldestContinuousThreadTimestamp:(unsigned long long)arg1 folderType:(long long)arg2 ;
+(id)updateMessageWithMessage:(id)arg1 ;
+(id)deleteMessageWithJobData:(id)arg1 ;
+(id)replaceMessageWithMessageDeleteData:(id)arg1 newMessage:(id)arg2 ;
-(void)matchUpdateThread:(/*^block*/id)arg1 deleteThread:(/*^block*/id)arg2 insertMessage:(/*^block*/id)arg3 updateMessage:(/*^block*/id)arg4 deleteMessage:(/*^block*/id)arg5 replaceMessage:(/*^block*/id)arg6 updateThreadListContinuity:(/*^block*/id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
