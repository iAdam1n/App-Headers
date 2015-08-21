/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, NSAttributedString;

@interface FBAttributedTextReusableView_DEPRECATED : UIView {

	FBRichTextView* _attributedLabel;
	long long _verticalTextAlignment;
	UIEdgeInsets _textPadding;
	BOOL _opaqueTextBackground;
	BOOL _selected;
	BOOL _highlighted;

}

@property (nonatomic,copy) NSAttributedString * text; 
@property (nonatomic,readonly) FBRichTextView * attributedLabel;                 //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (assign,nonatomic) long long verticalTextAlignment;                    //@synthesize verticalTextAlignment=_verticalTextAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textPadding;                           //@synthesize textPadding=_textPadding - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)_configureSelectedState;
-(void)_configureHighlightedState;
-(void)_layoutTextLayer;
-(UIEdgeInsets)textPadding;
-(void)setTextPadding:(UIEdgeInsets)arg1 ;
-(long long)verticalTextAlignment;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(FBRichTextView *)attributedLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end

