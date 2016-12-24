/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseScrollView.h>
#import <Reddit/LinkViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <Reddit/BaseTextViewDelegate.h>

@class LabeledTextField, BaseTextView, UIView, NSString;

@interface ComposeMessageView : BaseScrollView <LinkViewControllerDelegate, UITextViewDelegate, BaseTextViewDelegate> {

	LabeledTextField* _usernameTextField;
	BaseTextView* _subjectTextView;
	BaseTextView* _messageTextView;
	UIView* _usernameDivider;
	UIView* _subjectDivider;

}

@property (nonatomic,retain) UIView * usernameDivider;                          //@synthesize usernameDivider=_usernameDivider - In the implementation block
@property (nonatomic,retain) UIView * subjectDivider;                           //@synthesize subjectDivider=_subjectDivider - In the implementation block
@property (nonatomic,retain) LabeledTextField * usernameTextField;              //@synthesize usernameTextField=_usernameTextField - In the implementation block
@property (nonatomic,retain) BaseTextView * subjectTextView;                    //@synthesize subjectTextView=_subjectTextView - In the implementation block
@property (nonatomic,retain) BaseTextView * messageTextView;                    //@synthesize messageTextView=_messageTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)moveCaretIfPossibleInScrollView:(id)arg1 ;
-(BOOL)textViewShouldChangeSize:(id)arg1 ;
-(void)textView:(id)arg1 didChangeToNewSize:(CGSize)arg2 ;
-(void)linkViewControllerDidTapInsert:(id)arg1 ;
-(void)didTapLinkButton;
-(void)didTapCloseLink;
-(BaseTextView *)messageTextView;
-(void)setMessageTextView:(BaseTextView *)arg1 ;
-(BaseTextView *)subjectTextView;
-(UIView *)usernameDivider;
-(UIView *)subjectDivider;
-(void)didTapNextButton:(id)arg1 ;
-(id)getCurrentViewWithKeyboard;
-(void)setUsernameTextField:(LabeledTextField *)arg1 ;
-(void)setSubjectTextView:(BaseTextView *)arg1 ;
-(void)setUsernameDivider:(UIView *)arg1 ;
-(void)setSubjectDivider:(UIView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(LabeledTextField *)usernameTextField;
@end
