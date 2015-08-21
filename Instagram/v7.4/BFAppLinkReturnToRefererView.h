/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol BFAppLinkReturnToRefererViewDelegate;
@class UIColor, BFAppLink, UILabel, UIButton, UITapGestureRecognizer, UIView;

@interface BFAppLinkReturnToRefererView : UIView {

	BOOL _closed;
	int _includeStatusBarInSize;
	id<BFAppLinkReturnToRefererViewDelegate> _delegate;
	UIColor* _textColor;
	BFAppLink* _refererAppLink;
	UILabel* _labelView;
	UIButton* _closeButton;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	UIView* _viewToMoveWithNavController;

}

@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) BFAppLink * refererAppLink;                                            //@synthesize refererAppLink=_refererAppLink - In the implementation block
@property (assign,nonatomic) int includeStatusBarInSize;                                            //@synthesize includeStatusBarInSize=_includeStatusBarInSize - In the implementation block
@property (assign,nonatomic) BOOL closed;                                                           //@synthesize closed=_closed - In the implementation block
@property (nonatomic,retain) UILabel * labelView;                                                   //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * insideTapGestureRecognizer;                   //@synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * viewToMoveWithNavController;                                  //@synthesize viewToMoveWithNavController=_viewToMoveWithNavController - In the implementation block
-(void)closeButtonTapped:(id)arg1 ;
-(void)setIncludeStatusBarInSize:(int)arg1 ;
-(void)setRefererAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)refererAppLink;
-(void)initViews;
-(void)onTapInside:(id)arg1 ;
-(void)updateColors;
-(BOOL)hasRefererData;
-(id)localizedLabelForReferer:(id)arg1 ;
-(id)drawCloseButtonImageWithColor:(id)arg1 ;
-(int)includeStatusBarInSize;
-(UITapGestureRecognizer *)insideTapGestureRecognizer;
-(void)setInsideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIView *)viewToMoveWithNavController;
-(void)setViewToMoveWithNavController:(UIView *)arg1 ;
-(UILabel *)labelView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<BFAppLinkReturnToRefererViewDelegate>)delegate;
-(double)statusBarHeight;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)commonInit;
-(void)setCloseButton:(UIButton *)arg1 ;
-(BOOL)closed;
-(void)updateLabelText;
-(void)setLabelView:(UILabel *)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(UIButton *)closeButton;
@end

