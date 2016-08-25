/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECPersistentPlaceholderBaseView.h>

@class UITextView;

@interface ECPersistentPlaceholderTextView : ECPersistentPlaceholderBaseView {

	UITextView* _textView;
	CGRect _oldCaretRect;

}

@property (assign,nonatomic) CGRect oldCaretRect;                //@synthesize oldCaretRect=_oldCaretRect - In the implementation block
@property (nonatomic,retain) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) id valueChangedHandler; 
-(void)addContentView;
-(void)moveContentView;
-(BOOL)shouldShowPlaceholderAtTop;
-(void)valueDidBeginEditing:(id)arg1 ;
-(void)notifyTextAttributesChanged;
-(void)valueDidChange:(id)arg1 ;
-(CGRect)oldCaretRect;
-(void)setOldCaretRect:(CGRect)arg1 ;
-(void)scrollCaretToVisible;
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)text;
-(void)flashScrollIndicators;
-(void)setTextView:(UITextView *)arg1 ;
-(BOOL)hasContent;
-(UITextView *)textView;
-(void)updateFont;
@end

