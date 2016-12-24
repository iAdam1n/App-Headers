/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendDoublePhaseEventListening <NSObject>
@required
-(void)secondPhaseAttachmentPreparationDidStartWithOfflineThreadingId:(id)arg1 originalAttachmentFbId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseAttachmentPreparationDidFailWithOfflineThreadingId:(id)arg1 contentType:(id)arg2 error:(id)arg3;
-(void)secondPhaseMessageUpdateDidSucceedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3;
-(void)secondPhaseMessageUpdateFailedWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 contentType:(id)arg3 error:(id)arg4;

@end
