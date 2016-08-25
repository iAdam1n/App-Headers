/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIView.h>

@class EUILabel, EUIButton, UIGestureRecognizer;

@interface EBUGiftCardBalanceResultsView : EUIView {

	BOOL _layoutInitialized;
	EUILabel* _balanceLabel;
	EUIButton* _checkAnotherCardButton;
	UIGestureRecognizer* _finePrintGestureRecognizer;
	EUILabel* _titleLabel;
	EUILabel* _subtitleLabel;
	EUILabel* _termsLabel;
	EUILabel* _finePrintLabel;

}

@property (nonatomic,retain) EUILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * termsLabel;                                         //@synthesize termsLabel=_termsLabel - In the implementation block
@property (nonatomic,retain) EUILabel * finePrintLabel;                                     //@synthesize finePrintLabel=_finePrintLabel - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                                        //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
@property (nonatomic,retain) EUILabel * balanceLabel;                                       //@synthesize balanceLabel=_balanceLabel - In the implementation block
@property (nonatomic,retain) EUIButton * checkAnotherCardButton;                            //@synthesize checkAnotherCardButton=_checkAnotherCardButton - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * finePrintGestureRecognizer;              //@synthesize finePrintGestureRecognizer=_finePrintGestureRecognizer - In the implementation block
-(EUILabel *)termsLabel;
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(BOOL)layoutInitialized;
-(UIGestureRecognizer *)finePrintGestureRecognizer;
-(void)setFinePrintGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setTermsLabel:(EUILabel *)arg1 ;
-(EUIButton *)checkAnotherCardButton;
-(EUILabel *)balanceLabel;
-(void)setBalanceLabel:(EUILabel *)arg1 ;
-(void)setCheckAnotherCardButton:(EUIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(EUILabel *)titleLabel;
-(EUILabel *)subtitleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(void)setSubtitleLabel:(EUILabel *)arg1 ;
-(EUILabel *)finePrintLabel;
-(void)setFinePrintLabel:(EUILabel *)arg1 ;
@end

