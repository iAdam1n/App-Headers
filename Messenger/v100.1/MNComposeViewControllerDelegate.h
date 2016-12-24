/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposeViewControllerDelegate <NSObject>
@optional
-(void)composeViewControllerDidChangeText:(id)arg1;

@required
-(void)composeViewControllerNeedResize:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)composeViewControllerCanPresentExtension:(id)arg1;
-(id)composeViewControllerDidBeginSending:(id)arg1;
-(id)composeViewController:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7 loggingBlock:(/*^block*/id)arg8;
-(void)composeViewControllerDidCancelSending:(id)arg1;
-(BOOL)composeViewControllerShouldResetDuringSend:(id)arg1;
-(void)composeViewControllerDidAttemptSendWhenDisabled:(id)arg1;
-(BOOL)composeViewControllerCanSelectContent:(id)arg1;
-(void)composeViewControllerWillSelectContent:(id)arg1;
-(void)composeViewController:(id)arg1 didSelectContent:(id)arg2;
-(void)composeViewController:(id)arg1 didPasteContent:(id)arg2;
-(void)composeViewControllerNuxVisibilityDidChange:(id)arg1;
-(void)composeViewController:(id)arg1 didChangeComposerControlExtensionModeEnabledWithCompletionBlock:(/*^block*/id)arg2;
-(void)composeViewController:(id)arg1 didPressControlExtensionIconWithControlExtension:(id)arg2;
-(void)composeViewControllerDismissPresentedViewController:(id)arg1;
-(void)composeViewController:(id)arg1 presentViewController:(id)arg2;
-(void)composeViewController:(id)arg1 didCommitSendingLightweightActionType:(id)arg2;
-(id)threadViewModelForComposeViewController:(id)arg1;

@end
