/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendSchedulerListening <NSObject>
@required
-(void)didEnqueueMessageAndWillSendImmediately:(id)arg1;
-(void)didEnqueueMessageAndWillWaitInQueue:(id)arg1;
-(void)willSendQueuedMessage:(id)arg1;
-(void)didPutMessageBackInQueue:(id)arg1;
-(void)didPublishMessage:(id)arg1;
-(void)didSendMessage:(id)arg1;
-(void)didSendMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2;
-(void)didCancelMessage:(id)arg1;
-(void)didCancelMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2;
-(void)didFailMessage:(id)arg1 error:(id)arg2 errorType:(unsigned long long)arg3;

@end
