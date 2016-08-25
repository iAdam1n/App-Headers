/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextField.h>

@class UIView;

@interface SLKRecipientField : UITextField {

	BOOL _showCustomInputView;
	UIView* _customInputView;

}

@property (assign,getter=isShowingCustomInputView,nonatomic) BOOL showCustomInputView;              //@synthesize showCustomInputView=_showCustomInputView - In the implementation block
@property (nonatomic,retain) UIView * customInputView;                                              //@synthesize customInputView=_customInputView - In the implementation block
-(BOOL)isShowingCustomInputView;
-(UIView *)customInputView;
-(void)setShowCustomInputView:(BOOL)arg1 ;
-(void)setCustomInputView:(UIView *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSRange)selectedRange;
-(id)inputView;
-(unsigned long long)accessibilityTraits;
@end

