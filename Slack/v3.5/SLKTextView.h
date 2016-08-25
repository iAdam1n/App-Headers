/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextView.h>
#import <Slack/SLKTextInput.h>

@class UILabel, NSMutableArray, NSMutableDictionary, NSString, UIColor, NSArray, UITextRange, NSDictionary, UITextPosition, UIView;

@interface SLKTextView : UITextView <SLKTextInput> {

	BOOL _didNotResignFirstResponder;
	BOOL _loupeVisible;
	BOOL _trackpadEnabled;
	BOOL _undoManagerEnabled;
	BOOL _dynamicTypeEnabled;
	BOOL _didFlashScrollIndicators;
	BOOL _formatting;
	unsigned long long _maxNumberOfLines;
	unsigned long long _pastableMediaTypes;
	UILabel* _placeholderLabel;
	double _initialFontSize;
	long long _verticalMoveDirection;
	NSMutableArray* _registeredFormattingTitles;
	NSMutableArray* _registeredFormattingSymbols;
	NSMutableDictionary* _registeredKeyCommands;
	NSMutableDictionary* _registeredKeyCallbacks;
	CGRect _verticalMoveStartCaretRect;
	CGRect _verticalMoveLastCaretRect;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                                 //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) double initialFontSize;                                                     //@synthesize initialFontSize=_initialFontSize - In the implementation block
@property (assign,nonatomic) long long verticalMoveDirection;                                            //@synthesize verticalMoveDirection=_verticalMoveDirection - In the implementation block
@property (assign,nonatomic) CGRect verticalMoveStartCaretRect;                                          //@synthesize verticalMoveStartCaretRect=_verticalMoveStartCaretRect - In the implementation block
@property (assign,nonatomic) CGRect verticalMoveLastCaretRect;                                           //@synthesize verticalMoveLastCaretRect=_verticalMoveLastCaretRect - In the implementation block
@property (assign,nonatomic) BOOL didFlashScrollIndicators;                                              //@synthesize didFlashScrollIndicators=_didFlashScrollIndicators - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredFormattingTitles;                                //@synthesize registeredFormattingTitles=_registeredFormattingTitles - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredFormattingSymbols;                               //@synthesize registeredFormattingSymbols=_registeredFormattingSymbols - In the implementation block
@property (assign,getter=isFormatting,nonatomic) BOOL formatting;                                        //@synthesize formatting=_formatting - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredKeyCommands;                                //@synthesize registeredKeyCommands=_registeredKeyCommands - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredKeyCallbacks;                               //@synthesize registeredKeyCallbacks=_registeredKeyCallbacks - In the implementation block
@property (assign,nonatomic,__weak) id<SLKTextViewDelegate><UITextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) UIColor * placeholderColor; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines;                                        //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (assign,nonatomic) unsigned long long pastableMediaTypes;                                      //@synthesize pastableMediaTypes=_pastableMediaTypes - In the implementation block
@property (nonatomic,readonly) BOOL isExpanding; 
@property (assign,nonatomic) BOOL didNotResignFirstResponder;                                            //@synthesize didNotResignFirstResponder=_didNotResignFirstResponder - In the implementation block
@property (assign,getter=isLoupeVisible,nonatomic) BOOL loupeVisible;                                    //@synthesize loupeVisible=_loupeVisible - In the implementation block
@property (getter=isTrackpadEnabled,nonatomic,readonly) BOOL trackpadEnabled;                            //@synthesize trackpadEnabled=_trackpadEnabled - In the implementation block
@property (assign,getter=isTypingSuggestionEnabled,nonatomic) BOOL typingSuggestionEnabled; 
@property (assign,nonatomic) BOOL undoManagerEnabled;                                                    //@synthesize undoManagerEnabled=_undoManagerEnabled - In the implementation block
@property (assign,getter=isDynamicTypeEnabled,nonatomic) BOOL dynamicTypeEnabled;                        //@synthesize dynamicTypeEnabled=_dynamicTypeEnabled - In the implementation block
@property (getter=isFormattingEnabled,nonatomic,readonly) BOOL formattingEnabled; 
@property (nonatomic,readonly) NSArray * registeredSymbols; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
+(BOOL)requiresConstraintBasedLayout;
-(void)slk_prepareForUndo:(id)arg1 ;
-(void)slk_insertTextAtCaretRange:(id)arg1 ;
-(NSRange)slk_insertText:(id)arg1 inRange:(NSRange)arg2 ;
-(void)slk_scrollToCaretPositonAnimated:(BOOL)arg1 ;
-(void)slk_clearText:(BOOL)arg1 ;
-(void)slk_scrollToBottomAnimated:(BOOL)arg1 ;
-(void)slk_insertNewLineBreak;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfLines;
-(void)didPressArrowKey:(id)arg1 ;
-(void)observeKeyInput:(id)arg1 modifiers:(long long)arg2 title:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDynamicTypeEnabled:(BOOL)arg1 ;
-(void)setPastableMediaTypes:(unsigned long long)arg1 ;
-(void)registerMarkdownFormattingSymbol:(id)arg1 withTitle:(id)arg2 ;
-(void)refreshFirstResponder;
-(void)slk_commonInit;
-(void)setUndoManagerEnabled:(BOOL)arg1 ;
-(void)slk_registerNotifications;
-(BOOL)slk_shouldHidePlaceholder;
-(CGRect)slk_placeholderRectThatFits:(CGRect)arg1 ;
-(BOOL)isDynamicTypeEnabled;
-(double)initialFontSize;
-(NSMutableArray *)registeredFormattingSymbols;
-(id)slk_pasteboardContentType;
-(id)slk_supportedMediaTypes;
-(unsigned long long)pastableMediaTypes;
-(BOOL)undoManagerEnabled;
-(BOOL)isTypingSuggestionEnabled;
-(void)setFontName:(id)arg1 pointSize:(double)arg2 withContentSizeCategory:(id)arg3 ;
-(void)setInitialFontSize:(double)arg1 ;
-(void)slk_addCustomMenuControllerItems;
-(BOOL)isFormatting;
-(id)slk_formattingTitleFromSelector:(SEL)arg1 ;
-(id)slk_formattingSymbolWithTitle:(id)arg1 ;
-(void)slk_presentFormattingMenu:(id)arg1 ;
-(BOOL)slk_isPasteboardItemSupported;
-(void)slk_undo:(id)arg1 ;
-(void)slk_redo:(id)arg1 ;
-(id)slk_pastedItem;
-(void)slk_format:(id)arg1 ;
-(NSMutableArray *)registeredFormattingTitles;
-(void)setFormatting:(BOOL)arg1 ;
-(NSArray *)registeredSymbols;
-(void)slk_flashScrollIndicatorsIfNeeded;
-(void)didDetectKeyCommand:(id)arg1 ;
-(id)keyForKeyCommand:(id)arg1 ;
-(NSMutableDictionary *)registeredKeyCommands;
-(NSMutableDictionary *)registeredKeyCallbacks;
-(void)slk_moveCursorTodirection:(long long)arg1 ;
-(BOOL)slk_isNewVerticalMovementForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setVerticalMoveDirection:(long long)arg1 ;
-(void)setVerticalMoveStartCaretRect:(CGRect)arg1 ;
-(id)slk_closestPositionToPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setVerticalMoveLastCaretRect:(CGRect)arg1 ;
-(CGRect)verticalMoveStartCaretRect;
-(CGRect)verticalMoveLastCaretRect;
-(long long)verticalMoveDirection;
-(void)slk_unregisterNotifications;
-(void)slk_didBeginEditing:(id)arg1 ;
-(void)slk_didChangeText:(id)arg1 ;
-(void)slk_didEndEditing:(id)arg1 ;
-(void)slk_didChangeTextInputMode:(id)arg1 ;
-(void)slk_didChangeContentSizeCategory:(id)arg1 ;
-(void)slk_willShowMenuController:(id)arg1 ;
-(void)slk_didHideMenuController:(id)arg1 ;
-(BOOL)isFormattingEnabled;
-(void)setTypingSuggestionEnabled:(BOOL)arg1 ;
-(void)refreshInputViews;
-(BOOL)didNotResignFirstResponder;
-(void)setDidNotResignFirstResponder:(BOOL)arg1 ;
-(BOOL)isLoupeVisible;
-(void)setLoupeVisible:(BOOL)arg1 ;
-(BOOL)isTrackpadEnabled;
-(BOOL)didFlashScrollIndicators;
-(void)setDidFlashScrollIndicators:(BOOL)arg1 ;
-(void)setRegisteredFormattingTitles:(NSMutableArray *)arg1 ;
-(void)setRegisteredFormattingSymbols:(NSMutableArray *)arg1 ;
-(void)setRegisteredKeyCommands:(NSMutableDictionary *)arg1 ;
-(void)setRegisteredKeyCallbacks:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)layoutIfNeeded;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)paste:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned long long)numberOfLines;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)placeholder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(BOOL)isExpanding;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
@end

