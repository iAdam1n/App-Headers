/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UILabel, UIColor;

@interface FBTextView : UITextView {

	NSString* _textInputContextIdentifier;
	BOOL _placeholderShouldWrap;
	BOOL _placeholderShouldHideWhenEditing;
	UILabel* _placeholderLabel;

}

@property (nonatomic,copy,readonly) UILabel * placeholderLabel;                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) BOOL placeholderShouldWrap;                         //@synthesize placeholderShouldWrap=_placeholderShouldWrap - In the implementation block
@property (assign,nonatomic) BOOL placeholderShouldHideWhenEditing;              //@synthesize placeholderShouldHideWhenEditing=_placeholderShouldHideWhenEditing - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor; 
@property (nonatomic,readonly) BOOL isOverflown; 
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)_updateHiddenStateForPlaceholderText;
-(void)sizeFontToFitWithMinimumSize:(double)arg1 ;
-(BOOL)isOverflown;
-(void)setPlaceholderShouldWrap:(BOOL)arg1 ;
-(void)sizeFontToFit;
-(BOOL)placeholderShouldWrap;
-(BOOL)placeholderShouldHideWhenEditing;
-(void)setPlaceholderShouldHideWhenEditing:(BOOL)arg1 ;
-(UIColor *)placeholderTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)textInputContextIdentifier;
-(NSString *)placeholder;
-(UILabel *)placeholderLabel;
-(void)_textChanged:(id)arg1 ;
@end

