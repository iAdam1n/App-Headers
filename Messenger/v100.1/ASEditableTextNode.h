/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextInputTraits.h>

@protocol ASEditableTextNodeDelegate;
@class NSDictionary, ASTextKitComponents, ASTextNodeWordKerner, _ASTextInputTraitsPendingState, UITextView, NSAttributedString, UITextInputMode, NSString;

@interface ASEditableTextNode : ASDisplayNode <UITextViewDelegate, NSLayoutManagerDelegate, UITextInputTraits> {

	NSDictionary* _typingAttributes;
	id<ASEditableTextNodeDelegate> _delegate;
	BOOL _delegateDidUpdateEnqueued;
	RecursiveMutex _textKitLock;
	ASTextKitComponents* _textKitComponents;
	ASTextKitComponents* _placeholderTextKitComponents;
	ASTextNodeWordKerner* _wordKerner;
	RecursiveMutex _textInputTraitsLock;
	_ASTextInputTraitsPendingState* _textInputTraits;
	BOOL _displayingPlaceholder;
	BOOL _isPreservingSelection;
	BOOL _selectionChangedForEditedText;
	NSRange _previousSelectedRange;
	BOOL _scrollEnabled;
	UIEdgeInsets _textContainerInset;

}

@property (nonatomic,readonly) _ASTextInputTraitsPendingState * textInputTraits; 
@property (assign,nonatomic,__weak) id<ASEditableTextNodeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                                              //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,retain) NSDictionary * typingAttributes; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholderText; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UITextInputMode * textInputMode; 
@property (assign,nonatomic) UIEdgeInsets textContainerInset;                                 //@synthesize textContainerInset=_textContainerInset - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * textContentType; 
-(void)_staticInitialize;
-(void)_layoutTextView;
-(void)setLayerBacked:(BOOL)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)didLoad;
-(id)initWithTextKitComponents:(id)arg1 placeholderTextKitComponents:(id)arg2 ;
-(void)_updateDisplayingPlaceholder;
-(void)_delegateDidBeginEditing;
-(void)_delegateDidUpdateText;
-(void)_delegateDidChangeSelectionFromSelectedRange:(NSRange)arg1 toSelectedRange:(NSRange)arg2 ;
-(void)_delegateDidFinishEditing;
-(id)initWithLayerBlock:(/*^block*/id)arg1 didLoadBlock:(/*^block*/id)arg2 ;
-(id)initWithViewBlock:(/*^block*/id)arg1 didLoadBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<ASEditableTextNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<ASEditableTextNodeDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(UITextInputMode *)textInputMode;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(void)layout;
-(_ASTextInputTraitsPendingState *)textInputTraits;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)typingAttributes;
-(void)setSelectedRange:(NSRange)arg1 ;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(UIEdgeInsets)textContainerInset;
-(BOOL)canResignFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UITextView *)textView;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(BOOL)_delegateShouldChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(BOOL)scrollEnabled;
-(BOOL)isDisplayingPlaceholder;
-(void)setAttributedPlaceholderText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholderText;
@end
