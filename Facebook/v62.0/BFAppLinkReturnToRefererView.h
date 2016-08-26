/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol BFAppLinkReturnToRefererViewDelegate;
@class UIColor, BFAppLink, UILabel, UIButton, UITapGestureRecognizer;

@interface BFAppLinkReturnToRefererView : UIView {

	BOOL _explicitlyHidden;
	BOOL _closed;
	id<BFAppLinkReturnToRefererViewDelegate> _delegate;
	UIColor* _textColor;
	BFAppLink* _refererAppLink;
	unsigned long long _includeStatusBarInSize;
	UILabel* _labelView;
	UIButton* _closeButton;
	UITapGestureRecognizer* _insideTapGestureRecognizer;

}

@property (nonatomic,retain) UILabel * labelView;                                                   //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * insideTapGestureRecognizer;                   //@synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) BFAppLink * refererAppLink;                                            //@synthesize refererAppLink=_refererAppLink - In the implementation block
@property (assign,nonatomic) unsigned long long includeStatusBarInSize;                             //@synthesize includeStatusBarInSize=_includeStatusBarInSize - In the implementation block
@property (assign,nonatomic) BOOL closed;                                                           //@synthesize closed=_closed - In the implementation block
-(void)closeButtonTapped:(id)arg1 ;
-(void)setIncludeStatusBarInSize:(unsigned long long)arg1 ;
-(void)setRefererAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)refererAppLink;
-(void)initViews;
-(void)onTapInside:(id)arg1 ;
-(void)updateColors;
-(BOOL)hasRefererData;
-(void)updateHidden;
-(id)localizedLabelForReferer:(id)arg1 ;
-(id)drawCloseButtonImageWithColor:(id)arg1 ;
-(unsigned long long)includeStatusBarInSize;
-(UITapGestureRecognizer *)insideTapGestureRecognizer;
-(void)setInsideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererViewDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<BFAppLinkReturnToRefererViewDelegate>)delegate;
-(double)statusBarHeight;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(void)commonInit;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(UIButton *)closeButton;
-(UILabel *)labelView;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)updateLabelText;
-(void)setLabelView:(UILabel *)arg1 ;
@end
