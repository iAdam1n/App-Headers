/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageFailureHandling <NSObject>
@required
-(BOOL)shouldHandleFailedMessage:(id)arg1 failure:(id)arg2;
-(BOOL)shouldShowNonRetriableErrorAlertWhenFailedToSendMessage:(id)arg1;
-(void)handleFailedMessage:(id)arg1 failure:(id)arg2 fromView:(id)arg3 completion:(/*^block*/id)arg4;

@end
