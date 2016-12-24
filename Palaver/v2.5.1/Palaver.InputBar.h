/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:32:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F45DA058-3924-4296-8466-9187DEE2ADBC/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class RACSignal, UIVisualEffectView, UIView, UIImageView, UILabel, UITextView, UIButton;

@interface Palaver.InputBar : UIView <UITextViewDelegate> {

	 delegate;
	 disableDelegate;
	 disableDidChangeSelectionDelegate;
	 completionWord;
	 preCorrection;
	 vfxView;
	 lineView;
	 backgroundView;
	 placeholderLabel;
	 textView;
	 uploadButton;
	 sendButton;
	 dark;
	 kPLVInputBarCompletionText;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (assign,__weak,nonatomic) id<_TtP7Palaver16InputBarDelegate_> delegate; 
@property (readonly,nonatomic) RACSignal * textDidChangeSignal; 
@property (assign,__weak,nonatomic) UIVisualEffectView * vfxView; 
@property (assign,__weak,nonatomic) UIView * lineView; 
@property (assign,__weak,nonatomic) UIImageView * backgroundView; 
@property (assign,__weak,nonatomic) UILabel * placeholderLabel; 
@property (assign,__weak,nonatomic) UITextView * textView; 
@property (assign,__weak,nonatomic) UIButton * uploadButton; 
@property (assign,__weak,nonatomic) UIButton * sendButton; 
@property (assign,nonatomic) BOOL dark; 
-(void)invalidateIntrinsicContentSize;
-(CGSize)intrinsicContentSize;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(RACSignal *)textDidChangeSignal;
-(UIVisualEffectView *)vfxView;
-(void)setVfxView:(UIVisualEffectView *)arg1 ;
-(UIButton *)uploadButton;
-(void)setUploadButton:(UIButton *)arg1 ;
-(BOOL)dark;
-(void)setDark:(BOOL)arg1 ;
-(void)uploadMedia;
-(void)sendText;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP7Palaver16InputBarDelegate_>)arg1 ;
-(id<_TtP7Palaver16InputBarDelegate_>)delegate;
-(void)awakeFromNib;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
@end
