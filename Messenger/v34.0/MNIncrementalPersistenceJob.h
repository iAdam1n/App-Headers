/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@class MNIncrementalPersistenceThreadUpdateJobData, NSString, FBMMessage, MNIncrementalPersistenceMessageDeleteJobData;

@interface MNIncrementalPersistenceJob : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNIncrementalPersistenceThreadUpdateJobData* _updateThread_jobData;
	NSString* _deleteThread_threadFbId;
	FBMMessage* _insertMessage_message;
	MNIncrementalPersistenceMessageDeleteJobData* _deleteMessage_jobData;
	unsigned long long _updateInboxContinuousTimestamp_oldestInboxThreadTimestamp;

}
+(id)deleteMessageWithJobData:(id)arg1 ;
+(id)deleteThreadWithThreadFbId:(id)arg1 ;
+(id)insertMessageWithMessage:(id)arg1 ;
+(id)updateInboxContinuousTimestampWithOldestInboxThreadTimestamp:(unsigned long long)arg1 ;
+(id)updateThreadWithJobData:(id)arg1 ;
-(void)matchUpdateThread:(/*^block*/id)arg1 deleteThread:(/*^block*/id)arg2 insertMessage:(/*^block*/id)arg3 deleteMessage:(/*^block*/id)arg4 updateInboxContinuousTimestamp:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

