/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNComposerTextViewContaining.h>

@class MNTouchBeganGestureRecognizer, UIView, MNGrowingTextView, NSMutableArray, NSString;

@interface MNComposerTextInputView : UIView <UIGestureRecognizerDelegate, MNComposerTextViewContaining> {

	MNTouchBeganGestureRecognizer* _inputFocusGestureRecognizer;
	UIView* _maskView;
	MNGrowingTextView* _textView;
	NSMutableArray* _textViewFocusHandlers;
	long long _textInputTruncationMode;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _textInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long textInputTruncationMode;                         //@synthesize textInputTruncationMode=_textInputTruncationMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInsets;                                   //@synthesize textInsets=_textInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MNComposerTextViewConfiguring> textView; 
-(void)addTextViewFocusHandler:(/*^block*/id)arg1 ;
-(void)setTextInputTruncationMode:(long long)arg1 ;
-(void)_updateSubviewsForTextInputTruncationMode;
-(void)_handleInputFocus:(id)arg1 ;
-(UIEdgeInsets)_textViewInsets;
-(long long)textInputTruncationMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id<MNComposerTextViewConfiguring>)textView;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textInsets;
@end
