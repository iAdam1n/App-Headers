/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIKeyInput.h>

@protocol TGTokenFieldViewDelegate;
@class UIScrollView, NSString, NSMutableDictionary, NSMutableArray, TGBackspaceTextField, UIView;

@interface TGTokenFieldView : UIView <UITextFieldDelegate, UIKeyInput> {

	BOOL _wasEmpty;
	float _lineHeight;
	float _linePadding;
	float _lineSpacing;
	int _maxNumberOfLines;
	int _currentNumberOfLines;
	id<TGTokenFieldViewDelegate> _delegate;
	UIScrollView* _scrollView;
	NSString* _placeholder;
	NSMutableDictionary* _tokenAnimations;
	NSMutableArray* _tokenList;
	TGBackspaceTextField* _textField;
	UIView* _shadowView;

}

@property (nonatomic,retain) NSMutableDictionary * tokenAnimations;                      //@synthesize tokenAnimations=_tokenAnimations - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokenList;                                 //@synthesize tokenList=_tokenList - In the implementation block
@property (nonatomic,retain) TGBackspaceTextField * textField;                           //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) float lineHeight;                                           //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) float linePadding;                                          //@synthesize linePadding=_linePadding - In the implementation block
@property (assign,nonatomic) float lineSpacing;                                          //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) int maxNumberOfLines;                                       //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) int currentNumberOfLines;                                   //@synthesize currentNumberOfLines=_currentNumberOfLines - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic,__weak) id<TGTokenFieldViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSString * placeholder;                                     //@synthesize placeholder=_placeholder - In the implementation block
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
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) BOOL hasText; 
-(void)setMaxNumberOfLines:(int)arg1 ;
-(void)scrollToTextField:(BOOL)arg1 ;
-(id)tokenIds;
-(void)removeTokensAtIndexes:(id)arg1 ;
-(void)addToken:(id)arg1 tokenId:(id)arg2 animated:(BOOL)arg3 ;
-(void)textFieldDidHitLastBackspace;
-(int)maxNumberOfLines;
-(void)updateCounter;
-(void)doLayout:(BOOL)arg1 ;
-(BOOL)hasFirstResponder;
-(void)textFieldDidBecomeFirstResponder;
-(void)textFieldDidResignFirstResponder;
-(void)highlightToken:(id)arg1 ;
-(void)unhighlightToken:(id)arg1 ;
-(void)deleteToken:(id)arg1 ;
-(NSMutableDictionary *)tokenAnimations;
-(void)setTokenAnimations:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)tokenList;
-(void)setTokenList:(NSMutableArray *)arg1 ;
-(int)currentNumberOfLines;
-(void)setCurrentNumberOfLines:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<TGTokenFieldViewDelegate>)arg1 ;
-(id<TGTokenFieldViewDelegate>)delegate;
-(float)lineHeight;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)hasText;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)clearText;
-(UIScrollView *)scrollView;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setLineHeight:(float)arg1 ;
-(float)lineSpacing;
-(void)setLineSpacing:(float)arg1 ;
-(float)preferredHeight;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(TGBackspaceTextField *)textField;
-(NSString *)placeholder;
-(void)commonInit;
-(void)textFieldDidChange:(id)arg1 ;
-(void)beginTransition:(double)arg1 ;
-(void)setTextField:(TGBackspaceTextField *)arg1 ;
-(void)tapRecognized:(id)arg1 ;
-(id)findFirstResponder:(id)arg1 ;
-(float)linePadding;
-(void)setLinePadding:(float)arg1 ;
-(BOOL)searchIsActive;
@end
