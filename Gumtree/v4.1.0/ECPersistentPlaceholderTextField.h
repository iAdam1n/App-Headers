/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECPersistentPlaceholderBaseView.h>

@class UITextField, NSString;

@interface ECPersistentPlaceholderTextField : ECPersistentPlaceholderBaseView {

	BOOL _enabled;
	BOOL _hasDoneToolbar;
	UITextField* _textField;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) id valueChangedHandler; 
@property (assign,nonatomic) BOOL hasDoneToolbar;                        //@synthesize hasDoneToolbar=_hasDoneToolbar - In the implementation block
-(void)notifyTextAttributesChanged;
-(unsigned long long)contentStyle;
-(void)textChangedFromString:(id)arg1 ;
-(BOOL)hasDoneToolbar;
-(void)setHasDoneToolbar:(BOOL)arg1 ;
-(void)addContentView;
-(void)moveContentView;
-(BOOL)shouldShowPlaceholderAtTop;
-(void)valueDidChange:(id)arg1 ;
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)hasContent;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITextField *)textField;
@end

