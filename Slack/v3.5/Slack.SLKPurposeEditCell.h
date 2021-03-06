/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextView, UILabel, UIView, NSString;

@interface Slack.SLKPurposeEditCell : UITableViewCell <UITextFieldDelegate> {

	 textView;
	 descriptionPlaceholderLabel;
	 delegate;
	 info;

}

@property (assign,__weak,nonatomic) UITextView * textView; 
@property (assign,__weak,nonatomic) UILabel * descriptionPlaceholderLabel; 
@property (retain,nonatomic) id info; 
@property (readonly,nonatomic) UIView * textUIView; 
@property (copy,nonatomic) NSString * value; 
@property (copy,nonatomic) NSString * placeholder; 
-(UIView *)textUIView;
-(UILabel *)descriptionPlaceholderLabel;
-(void)setDescriptionPlaceholderLabel:(UILabel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)info;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
-(void)setInfo:(id)arg1 ;
@end

