/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageForwardSendControllerDelegate <NSObject>
@required
-(void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2;
-(void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2;
-(void)forwardSendController:(id)arg1 didForwardMessage:(id)arg2;
-(void)forwardSendControllerDidShowSendingUI:(id)arg1;
-(void)forwardSendControllerDidHideSendingUI:(id)arg1;
-(BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1;
-(void)forwardSendControllerDidCancel:(id)arg1;

@end
