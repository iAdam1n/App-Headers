/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSTextStorage, CAShapeLayer, UILongPressGestureRecognizer;

@interface RCTText : UIView {

	NSTextStorage* _textStorage;
	CAShapeLayer* _highlightLayer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _selectable;
	UIEdgeInsets _contentInset;
	CGRect _textFrame;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
@property (assign,nonatomic) CGRect textFrame;                         //@synthesize textFrame=_textFrame - In the implementation block
@property (assign,nonatomic) BOOL selectable;                          //@synthesize selectable=_selectable - In the implementation block
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)setTextFrame:(CGRect)arg1 ;
-(void)enableContextMenu;
-(void)disableContextMenu;
-(void)reactSetInheritedBackgroundColor:(id)arg1 ;
-(id)reactTagAtPoint:(CGPoint)arg1 ;
-(void)didUpdateReactSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)description;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(BOOL)canBecomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSTextStorage *)textStorage;
-(void)copy:(id)arg1 ;
-(id)accessibilityLabel;
-(BOOL)selectable;
-(void)handleLongPress:(id)arg1 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(CGRect)textFrame;
@end
