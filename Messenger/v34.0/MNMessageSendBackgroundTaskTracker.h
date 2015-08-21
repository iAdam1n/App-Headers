/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMessageSendQueueMutationListening.h>

@class FBBackgroundTaskHandler, MNMessageSendQueueStore, FBAnalytics, NSString;

@interface MNMessageSendBackgroundTaskTracker : NSObject <MNMessageSendQueueMutationListening> {

	FBBackgroundTaskHandler* _backgroundTaskHandler;
	MNMessageSendQueueStore* _sendQueueStore;
	FBAnalytics* _analytics;
	unsigned long long _backgroundTaskId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddMessageToSendQueue:(id)arg1 sendStateInfo:(id)arg2 ;
-(void)didRemoveMessageFromSendQueue:(id)arg1 ;
-(void)_beginBackgroundTaskIfNecessary;
-(void)_backgroundTaskExpired;
-(id)initWithBackgroundTaskHandler:(id)arg1 sendQueueStore:(id)arg2 analytics:(id)arg3 ;
-(void)_endBackgroundTask;
@end

