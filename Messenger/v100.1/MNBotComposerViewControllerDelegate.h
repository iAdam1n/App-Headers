/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBotComposerViewControllerDelegate <NSObject>
@required
-(void)botComposerViewControllerDidTapComposer:(id)arg1;
-(void)botComposerViewControllerDidUpdateHeight:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)botComposerViewControllerDidSelectQuickReply:(id)arg1 atIndex:(unsigned long long)arg2;
-(BOOL)botComposerViewControllerShouldBlockMessageSend:(id)arg1;
-(void)botComposerViewControllerShowNotEligibleAlert:(id)arg1;

@end
