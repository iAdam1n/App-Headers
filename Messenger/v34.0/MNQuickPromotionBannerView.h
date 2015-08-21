/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNQuickPromotionBannerViewDelegate;
@class UIImageView, UILabel, UIButton;

@interface MNQuickPromotionBannerView : UIView {

	UIImageView* _bannerImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _dismissButton;
	UIButton* _leftActionButton;
	UIButton* _rightActionButton;
	BOOL _roundedCorners;
	unsigned long long _entryPoint;
	unsigned long long _colorScheme;
	BOOL _isBannerTappable;
	BOOL _highlighted;
	BOOL _hidesDismissButton;
	BOOL _isTitleOnly;
	UIImageView* _bottomArrowImageView;
	double _bottomArrowOriginX;
	BOOL _showsBottomArrow;
	id<MNQuickPromotionBannerViewDelegate> _delegate;
	double _bottomArrowCenterXCoordinate;

}

@property (assign,nonatomic,__weak) id<MNQuickPromotionBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBottomArrow;                                               //@synthesize showsBottomArrow=_showsBottomArrow - In the implementation block
@property (assign,nonatomic) double bottomArrowCenterXCoordinate;                                 //@synthesize bottomArrowCenterXCoordinate=_bottomArrowCenterXCoordinate - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 primaryActionButtonTitle:(id)arg3 secondaryActionButtonTitle:(id)arg4 reserveSpaceForBannerImage:(BOOL)arg5 entryPoint:(unsigned long long)arg6 colorScheme:(unsigned long long)arg7 isBannerTappable:(BOOL)arg8 hidesDismissButton:(BOOL)arg9 ;
-(void)setBannerImage:(id)arg1 withRoundedCorners:(BOOL)arg2 ;
-(void)setBottomArrowCenterXCoordinate:(double)arg1 ;
-(BOOL)showsBottomArrow;
-(void)setShowsBottomArrow:(BOOL)arg1 ;
-(void)_updateHighlightedState;
-(void)_dismissButtonTapped:(id)arg1 ;
-(void)_leftActionButtonTapped:(id)arg1 ;
-(void)_rightActionButtonTapped:(id)arg1 ;
-(void)_verticallyAlignTitleWithImageView;
-(void)_layoutleftActionButtonAndrightActionButton;
-(void)_layoutSingleLeftActionButton;
-(void)_layoutSingleRightActionButton;
-(void)_layoutBottomArrowView;
-(void)_layoutActionButton:(id)arg1 withOriginX:(double)arg2 originY:(double)arg3 width:(double)arg4 height:(double)arg5 ;
-(void)_setHighlighted:(BOOL)arg1 ;
-(void)_bannerTapped;
-(id)initWithViewModel:(id)arg1 ;
-(double)bottomArrowCenterXCoordinate;
-(void)dealloc;
-(void)setDelegate:(id<MNQuickPromotionBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNQuickPromotionBannerViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

