/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSenderExtension <NSObject>
@required
-(void)startWithQueue:(id)arg1;
-(BOOL)shouldHandleMessage:(id)arg1;
-(BOOL)needsExternalAttachmentPreparation;
-(BOOL)handlesAutoRetry;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3;
-(BOOL)isSendingForTarget:(id)arg1;
-(long long)isErrorRetriable:(id)arg1;
-(void)stop;

@end
