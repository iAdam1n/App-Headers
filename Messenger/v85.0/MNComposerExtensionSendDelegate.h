/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerExtensionSendDelegate <NSObject>
@required
-(id)composerExtensionDidBeginSending:(id)arg1;
-(id)composerExtension:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7;
-(void)composerExtensionDidCancelSending:(id)arg1;
-(BOOL)composerExtensionCanSelectContent:(id)arg1;
-(void)composerExtensionWillSelectContent:(id)arg1;
-(void)composerExtension:(id)arg1 didSelectContent:(id)arg2;
-(void)composerExtensionDidSendRequest:(id)arg1;

@end
