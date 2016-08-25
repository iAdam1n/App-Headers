/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UILabel.h>

@protocol WALinkLabelDelegate;
@class TextBlock, TextMessage, UIColor;

@interface WALinkLabel : UILabel {

	TextBlock* _selectedTextBlock;
	TextMessage* _message;
	BOOL _underlineLinks;
	id<WALinkLabelDelegate> _delegate;
	UIColor* _linkColor;
	UIColor* _linkColorHighlighted;
	UIColor* _linkBackgroundColor;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<WALinkLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                            //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;                                  //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColorHighlighted;                       //@synthesize linkColorHighlighted=_linkColorHighlighted - In the implementation block
@property (nonatomic,retain) UIColor * linkBackgroundColor;                        //@synthesize linkBackgroundColor=_linkBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL underlineLinks;                                  //@synthesize underlineLinks=_underlineLinks - In the implementation block
-(void)setUnderlineLinks:(BOOL)arg1 ;
-(void)setLinkColorHighlighted:(UIColor *)arg1 ;
-(void)highlightURL:(BOOL)arg1 ;
-(UIColor *)linkColorHighlighted;
-(UIColor *)linkBackgroundColor;
-(BOOL)underlineLinks;
-(void)openURL;
-(void)setLinkBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<WALinkLabelDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WALinkLabelDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(UIColor *)linkColor;
@end

