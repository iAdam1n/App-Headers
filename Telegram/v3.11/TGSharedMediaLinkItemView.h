/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGSharedMediaItemView.h>

@class TGMessage, NSArray, TGWebPageMediaAttachment, UIView, UILabel, TGImageView, UIImageView, TGModernFlatteningViewModel, TGModernTextViewModel, TGModernViewStorage, TGSharedMediaCheckButton, UIGestureRecognizer;

@interface TGSharedMediaLinkItemView : TGSharedMediaItemView {

	TGMessage* _message;
	NSArray* _links;
	TGWebPageMediaAttachment* _webPage;
	UIView* _separatorView;
	UILabel* _titleLabel;
	TGImageView* _imageView;
	UIImageView* _alternativeImageBackgroundView;
	UILabel* _alternativeImageLabel;
	TGModernFlatteningViewModel* _contentModel;
	TGModernTextViewModel* _textModel;
	TGModernViewStorage* _viewStorage;
	NSArray* _linkButtons;
	double _lastWidth;
	TGSharedMediaCheckButton* _checkButton;
	UIGestureRecognizer* _tapRecognizer;
	UIView* _alertViewHost;

}

@property (assign,nonatomic,__weak) UIView * alertViewHost;              //@synthesize alertViewHost=_alertViewHost - In the implementation block
-(double)editingInset;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(void)updateItemSelected;
-(id)capitalizeTitle:(id)arg1 ;
-(void)linkButtonPressed:(id)arg1 ;
-(void)showActionsMenuForLink:(id)arg1 ;
-(void)setMessage:(id)arg1 date:(int)arg2 lastInSection:(BOOL)arg3 textModel:(id)arg4 imageSignal:(id)arg5 links:(id)arg6 webPage:(id)arg7 ;
-(id)urlForLocation:(CGPoint)arg1 ;
-(UIView *)alertViewHost;
-(void)setAlertViewHost:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)longPress:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)tapGesture:(id)arg1 ;
@end
