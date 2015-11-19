/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECView.h>

@class CALayer, UILabel, UIImageView, UIActivityIndicatorView;

@interface ECStatusBarView : ECView {

	BOOL _isTall;
	BOOL _isRed;
	CALayer* _bottomBorderLayer;
	UILabel* _headerLabel;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIImageView* _iconImageView;
	UIImageView* _backgroundImageView;
	UIImageView* _shadowImageView;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * headerLabel;                                    //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                        //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                            //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)registerObservers;
-(void)setIsTall:(BOOL)arg1 red:(BOOL)arg2 ;
-(void)unregisterObservers;
-(BOOL)isRed;
-(void)updateStatus:(id)arg1 isLoading:(BOOL)arg2 dataSource:(id)arg3 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(UIImageView *)backgroundImageView;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)commonInit;
-(UIImageView *)shadowImageView;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setupSubviews;
-(BOOL)isTall;
@end

