/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/ASDisplayNode.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol ASEditableTextNodeDelegate;
@class NSDictionary, ASTextKitComponents, ASTextNodeWordKerner, NSAttributedString, UITextInputMode, NSString;

@interface ASEditableTextNode : ASDisplayNode <UITextViewDelegate, NSLayoutManagerDelegate> {

	NSDictionary* _typingAttributes;
	id<ASEditableTextNodeDelegate> _delegate;
	BOOL _delegateDidUpdateEnqueued;
	RecursiveMutex _textKitLock;
	ASTextKitComponents* _textKitComponents;
	ASTextKitComponents* _placeholderTextKitComponents;
	ASTextNodeWordKerner* _wordKerner;
	BOOL _displayingPlaceholder;
	BOOL _isPreservingSelection;
	BOOL _selectionChangedForEditedText;
	NSRange _previousSelectedRange;

}

@property (assign,nonatomic,__weak) id<ASEditableTextNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * typingAttributes; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholderText; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UITextInputMode * textInputMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewBlock:(/*^block*/id)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithLayerBlock:(/*^block*/id)arg1 ;
-(void)_layoutTextView;
-(void)_updateDisplayingPlaceholder;
-(void)_delegateDidBeginEditing;
-(void)_delegateDidUpdateText;
-(void)_delegateDidChangeSelectionFromSelectedRange:(NSRange)arg1 toSelectedRange:(NSRange)arg2 ;
-(void)_delegateDidFinishEditing;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(BOOL)isDisplayingPlaceholder;
-(void)didLoad;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<ASEditableTextNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ASEditableTextNodeDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(UITextInputMode *)textInputMode;
-(BOOL)isFirstResponder;
-(NSAttributedString *)attributedText;
-(void)layout;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)typingAttributes;
-(void)setSelectedRange:(NSRange)arg1 ;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)_delegateShouldChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(void)setAttributedPlaceholderText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholderText;
@end

