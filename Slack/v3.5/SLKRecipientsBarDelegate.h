/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLKRecipientsBarDelegate <NSObject>
@optional
-(BOOL)recipientsBarShouldBeginEditing:(id)arg1;
-(void)recipientsBarTextDidBeginEditing:(id)arg1;
-(BOOL)recipientsBarShouldEndEditing:(id)arg1;
-(void)recipientsBarTextDidEndEditing:(id)arg1;
-(void)recipientsBar:(id)arg1 textDidChange:(id)arg2;
-(BOOL)recipientsBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(BOOL)recipientsBar:(id)arg1 shouldSelectRecipient:(id)arg2;
-(void)recipientsBar:(id)arg1 didSelectRecipient:(id)arg2;
-(void)recipientsBarReturnButtonClicked:(id)arg1;

@end
