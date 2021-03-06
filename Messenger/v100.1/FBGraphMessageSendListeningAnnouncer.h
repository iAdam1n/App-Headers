/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBGraphMessageSendListening.h>

@class NSString;

@interface FBGraphMessageSendListeningAnnouncer : FBAnnouncerBase <FBGraphMessageSendListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2 ;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

