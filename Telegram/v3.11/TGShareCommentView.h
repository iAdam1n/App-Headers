/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class UIImageView, UILabel, TGModernButton, UITextView, NSString;

@interface TGShareCommentView : UIView <UITextViewDelegate> {

	UIImageView* _backgroundView;
	UILabel* _placeholderView;
	double _currentHeight;
	TGModernButton* _clearButton;
	double _maxHeight;
	UITextView* _textView;
	/*^block*/id _didBeginEditing;
	/*^block*/id _heightChanged;

}

@property (assign,nonatomic) double maxHeight;                      //@synthesize maxHeight=_maxHeight - In the implementation block
@property (nonatomic,readonly) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) id didBeginEditing;                      //@synthesize didBeginEditing=_didBeginEditing - In the implementation block
@property (nonatomic,copy) id heightChanged;                        //@synthesize heightChanged=_heightChanged - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)didBeginEditing;
-(void)setDidBeginEditing:(id)arg1 ;
-(void)clearButtonPressed;
-(void)setHeightChanged:(id)arg1 ;
-(double)heightForText:(id)arg1 width:(double)arg2 ;
-(id)heightChanged;
-(void)updateClearButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(UIEdgeInsets)insets;
-(void)setMaxHeight:(double)arg1 ;
-(double)maxHeight;
@end
