/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@protocol FBPaymentsTextEditWithCharacterCountViewDelegate;
@class FBRichTextView, FBTextView, NSString;

@interface FBPaymentsTextEditWithCharacterCountView : UIView <UITextViewDelegate, FBPaymentsEdgeInsetsConfigurable> {

	FBRichTextView* _characterCountView;
	unsigned long long _characterCountLimit;
	FBTextView* _textView;
	id<FBPaymentsTextEditWithCharacterCountViewDelegate> _delegate;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic,__weak) id<FBPaymentsTextEditWithCharacterCountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBTextView * textView;                                                           //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)initWithCharacterCountLimit:(unsigned long long)arg1 placeholderText:(id)arg2 textInputContextIdentifier:(id)arg3 prefilledText:(id)arg4 ;
-(void)_updateCharacterCount;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPaymentsTextEditWithCharacterCountViewDelegate>)arg1 ;
-(id<FBPaymentsTextEditWithCharacterCountViewDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
