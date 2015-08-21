/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class FBMThreadMarkService, FBMMessageAttachments, FBMThreadSharedMediaModelCache, NSObject, NSString;

@interface MNPushMessageThreadMutationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	FBMThreadMarkService* _threadMarkService;
	FBMMessageAttachments* _attachmentUtils;
	FBMThreadSharedMediaModelCache* _sharedMediaModelCache;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_markThreadUnread:(id)arg1 ;
-(void)_markThreadRead:(id)arg1 forMessageWithThreadKey:(id)arg2 senderId:(id)arg3 timestamp:(unsigned long long)arg4 type:(unsigned long long)arg5 logMessage:(id)arg6 supportsPreview:(BOOL)arg7 ;
-(void)_prepareThreadPhotoViewModelsForMessage:(id)arg1 ;
-(void)_markThreadRead:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_markThreadReadIfAlreadyRead:(id)arg1 threadKey:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initWithThreadMarkService:(id)arg1 attachmentUtils:(id)arg2 sharedMediaModelCache:(id)arg3 authManager:(id)arg4 queue:(id)arg5 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 threadSummary:(id)arg2 ;
@end

