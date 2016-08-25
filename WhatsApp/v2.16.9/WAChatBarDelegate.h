/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAChatBarDelegate <NSObject>
@required
-(unsigned long long)chatBarVisibleConnectionStatus:(id)arg1;
-(double)chatBarMaximumHeight:(id)arg1;
-(BOOL)chatBarShouldBeginEditing:(id)arg1;
-(void)chatBarDidBeginEditing:(id)arg1;
-(void)chatBarWillEndEditing:(id)arg1;
-(void)chatBarDidEndEditing:(id)arg1;
-(void)chatBarDidChangeText:(id)arg1;
-(void)chatBar:(id)arg1 didPasteImage:(id)arg2;
-(void)chatBar:(id)arg1 didPasteGIF:(id)arg2;
-(void)chatBar:(id)arg1 didPasteURL:(id)arg2;
-(void)chatBar:(id)arg1 didInsertAutoSendURL:(id)arg2;
-(void)chatBarWantsToAttachMedia:(id)arg1;
-(void)chatBarWantsToPresentCamera:(id)arg1;
-(void)chatBarUserDidSubmitText:(id)arg1;
-(void)chatBarDidChangeHeight:(id)arg1;
-(BOOL)chatBarShouldBeginPTTRecording:(id)arg1;
-(void)chatBarDidBeginPTTRecording:(id)arg1;
-(double)chatBarWillEndPTTRecording:(id)arg1;
-(void)chatBarDidEndPTTRecording:(id)arg1;
-(void)chatBar:(id)arg1 didCancelPTTRecordingByUser:(BOOL)arg2;
-(void)chatBar:(id)arg1 willMoveToWindow:(id)arg2;
-(void)chatBarDidMoveToWindow:(id)arg1;
-(void)chatBarUserDidFocusChatBar:(id)arg1;
-(void)chatBarWantsToScrollToTop:(id)arg1;
-(void)chatBarWantsToDismissWebURLPreview:(id)arg1;
-(void)chatBarWantsToDismissReplyContextView:(id)arg1;
-(BOOL)chatBarShouldTrackMentions:(id)arg1;
-(void)chatBar:(id)arg1 didEditMentionInRange:(NSRange)arg2;
-(void)chatBarDidStopEditingMention:(id)arg1;

@end

