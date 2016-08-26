/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HPGrowingTextViewDelegate;
@class HPTextViewInternal, NSObject, UIFont, UIColor, NSString, UITextView;

@interface HPGrowingTextView : UIView <UITextViewDelegate> {

	HPTextViewInternal* internalTextView;
	int minHeight;
	int maxHeight;
	int maxNumberOfLines;
	int minNumberOfLines;
	BOOL animateHeightChange;
	double animationDuration;
	NSObject*<HPGrowingTextViewDelegate> delegate;
	long long textAlignment;
	NSRange selectedRange;
	BOOL editable;
	unsigned long long dataDetectorTypes;
	long long returnKeyType;
	long long keyboardType;
	UIEdgeInsets contentInset;
	UIFont* font;
	UIColor* textColor;

}

@property (assign) int maxNumberOfLines; 
@property (assign) int minNumberOfLines; 
@property (assign,nonatomic) int maxHeight; 
@property (assign,nonatomic) int minHeight; 
@property (assign) BOOL animateHeightChange; 
@property (assign) double animationDuration; 
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) UIColor * placeholderColor; 
@property (nonatomic,retain) UITextView * internalTextView; 
@property (assign) NSObject*<HPGrowingTextViewDelegate> delegate; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign) UIEdgeInsets contentInset; 
@property (assign,nonatomic) BOOL isScrollable; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commonInitialiser;
-(void)commonInitialiser:(id)arg1 ;
-(void)setMaxNumberOfLines:(int)arg1 ;
-(void)setMinNumberOfLines:(int)arg1 ;
-(double)measureHeight;
-(void)refreshHeight;
-(void)resizeTextView:(long long)arg1 ;
-(UITextView *)internalTextView;
-(int)maxNumberOfLines;
-(int)minNumberOfLines;
-(void)setIsScrollable:(BOOL)arg1 ;
-(void)setInternalTextView:(UITextView *)arg1 ;
-(BOOL)animateHeightChange;
-(void)setAnimateHeightChange:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(NSObject*<HPGrowingTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSObject*<HPGrowingTextViewDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(UIEdgeInsets)contentInset;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSRange)selectedRange;
-(long long)textAlignment;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)hasText;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(double)animationDuration;
-(void)setEditable:(BOOL)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(NSString *)placeholder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(int)minHeight;
-(void)setMinHeight:(int)arg1 ;
-(void)setMaxHeight:(int)arg1 ;
-(int)maxHeight;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(BOOL)isScrollable;
@end
