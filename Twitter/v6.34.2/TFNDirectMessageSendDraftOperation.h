/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNConcurrentOperation.h>

@protocol TFNDirectMessageContext, OS_dispatch_queue;
@class TFNDirectMessageConversationImpl, TFNDirectMessageDraftEntryImpl, TFNDirectMessageModel, NSObject, TFNDirectMessageSendDraftProgress, NSOperation;

@interface TFNDirectMessageSendDraftOperation : TFNConcurrentOperation {

	BOOL _hasAttachment;
	TFNDirectMessageConversationImpl* _conversation;
	TFNDirectMessageDraftEntryImpl* _draftEntry;
	id<TFNDirectMessageContext> _context;
	TFNDirectMessageModel* _directMessageModel;
	NSObject*<OS_dispatch_queue> _backgroundTaskIdentifierLockQueue;
	unsigned long long _backgroundTaskIdentifier;
	TFNDirectMessageSendDraftProgress* _progress;
	NSOperation* _addDraftOperation;
	NSOperation* _uploadAttachmentOperation;
	NSOperation* _sendOperation;
	NSOperation* _applyResponseOperation;
	/*^block*/id _completion;

}

@property (nonatomic,retain) TFNDirectMessageConversationImpl * conversation;                             //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TFNDirectMessageDraftEntryImpl * draftEntry;                                 //@synthesize draftEntry=_draftEntry - In the implementation block
@property (nonatomic,retain) id<TFNDirectMessageContext> context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TFNDirectMessageModel * directMessageModel;                                  //@synthesize directMessageModel=_directMessageModel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskIdentifierLockQueue;              //@synthesize backgroundTaskIdentifierLockQueue=_backgroundTaskIdentifierLockQueue - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                                 //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAttachment;                                                          //@synthesize hasAttachment=_hasAttachment - In the implementation block
@property (nonatomic,retain) TFNDirectMessageSendDraftProgress * progress;                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSOperation * addDraftOperation;                                             //@synthesize addDraftOperation=_addDraftOperation - In the implementation block
@property (nonatomic,retain) NSOperation * uploadAttachmentOperation;                                     //@synthesize uploadAttachmentOperation=_uploadAttachmentOperation - In the implementation block
@property (nonatomic,retain) NSOperation * sendOperation;                                                 //@synthesize sendOperation=_sendOperation - In the implementation block
@property (nonatomic,retain) NSOperation * applyResponseOperation;                                        //@synthesize applyResponseOperation=_applyResponseOperation - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                                        //@synthesize completion=_completion - In the implementation block
+(id)_swapLatestApplyResultsOperation:(id)arg1 forConversation:(id)arg2 ;
-(TFNDirectMessageModel *)directMessageModel;
-(TFNDirectMessageDraftEntryImpl *)draftEntry;
-(void)setDraftEntry:(TFNDirectMessageDraftEntryImpl *)arg1 ;
-(void)setDirectMessageModel:(TFNDirectMessageModel *)arg1 ;
-(NSOperation *)addDraftOperation;
-(NSOperation *)uploadAttachmentOperation;
-(NSOperation *)sendOperation;
-(void)_generateOperations;
-(void)_setupOperationDependencies;
-(void)_scheduleOperations;
-(void)setAddDraftOperation:(NSOperation *)arg1 ;
-(void)setUploadAttachmentOperation:(NSOperation *)arg1 ;
-(void)setSendOperation:(NSOperation *)arg1 ;
-(void)setApplyResponseOperation:(NSOperation *)arg1 ;
-(NSOperation *)applyResponseOperation;
-(void)_endBackgroundTaskIfNeeded;
-(void)_beginBackgroundTaskIfNeeded;
-(NSObject*<OS_dispatch_queue>)backgroundTaskIdentifierLockQueue;
-(id)initWithDirectMessageModel:(id)arg1 conversation:(id)arg2 draftEntry:(id)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setBackgroundTaskIdentifierLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHasAttachment:(BOOL)arg1 ;
-(void)cancel;
-(id<TFNDirectMessageContext>)context;
-(void)setProgress:(TFNDirectMessageSendDraftProgress *)arg1 ;
-(void)setContext:(id<TFNDirectMessageContext>)arg1 ;
-(id)completion;
-(TFNDirectMessageSendDraftProgress *)progress;
-(void)main;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(BOOL)hasAttachment;
-(void)setConversation:(TFNDirectMessageConversationImpl *)arg1 ;
-(TFNDirectMessageConversationImpl *)conversation;
@end
