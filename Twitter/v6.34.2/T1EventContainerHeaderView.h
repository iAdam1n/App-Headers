/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1EventContainerHeaderViewDelegate;
@class UITapGestureRecognizer, T1EventHeaderInfoView, TFNBlurrableImageView, T1BouncingTitleView, UIImage, TFNPullToRefreshControl, UIButton, UIView, UILabel;

@interface T1EventContainerHeaderView : UIView {

	UITapGestureRecognizer* _bannerTapGestureRecognizer;
	BOOL _forceBlur;
	BOOL _forcePullToRefreshControlHidden;
	BOOL _forceTitleViewHidden;
	id<T1EventContainerHeaderViewDelegate> _delegate;
	T1EventHeaderInfoView* _infoView;
	TFNBlurrableImageView* _bannerImageView;
	T1BouncingTitleView* _titleView;
	UIImage* _bannerImage;
	TFNPullToRefreshControl* _pullToRefreshControl;
	unsigned long long _style;
	UIButton* _backButton;
	UIButton* _composeTweetButton;
	UIButton* _searchButton;
	UIView* _bannerImageContainer;
	UILabel* _bannerImageCreditLabel;
	double _expansionDelta;
	double _expansionStart;
	CGSize _preferredSize;

}

@property (assign,nonatomic,__weak) id<T1EventContainerHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1EventHeaderInfoView * infoView;                                    //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) TFNBlurrableImageView * bannerImageView;                           //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (nonatomic,retain) T1BouncingTitleView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIImage * bannerImage;                                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                                //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,readonly) TFNPullToRefreshControl * pullToRefreshControl;                    //@synthesize pullToRefreshControl=_pullToRefreshControl - In the implementation block
@property (assign,nonatomic) BOOL forceBlur;                                                      //@synthesize forceBlur=_forceBlur - In the implementation block
@property (assign,nonatomic) BOOL forcePullToRefreshControlHidden;                                //@synthesize forcePullToRefreshControlHidden=_forcePullToRefreshControlHidden - In the implementation block
@property (assign,nonatomic) BOOL forceTitleViewHidden;                                           //@synthesize forceTitleViewHidden=_forceTitleViewHidden - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                               //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * composeTweetButton;                                       //@synthesize composeTweetButton=_composeTweetButton - In the implementation block
@property (nonatomic,retain) UIButton * searchButton;                                             //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,retain) UIView * bannerImageContainer;                                       //@synthesize bannerImageContainer=_bannerImageContainer - In the implementation block
@property (nonatomic,retain) UILabel * bannerImageCreditLabel;                                    //@synthesize bannerImageCreditLabel=_bannerImageCreditLabel - In the implementation block
@property (assign,nonatomic) double expansionDelta;                                               //@synthesize expansionDelta=_expansionDelta - In the implementation block
@property (assign,nonatomic) double expansionStart;                                               //@synthesize expansionStart=_expansionStart - In the implementation block
+(CGSize)bannerImageSize;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UIImage *)bannerImage;
-(TFNPullToRefreshControl *)pullToRefreshControl;
-(void)setForceBlur:(BOOL)arg1 ;
-(void)setForceTitleViewHidden:(BOOL)arg1 ;
-(void)setForcePullToRefreshControlHidden:(BOOL)arg1 ;
-(double)headerBannerMinimumHeight;
-(void)setBackButton:(UIButton *)arg1 ;
-(UIView *)bannerImageContainer;
-(void)recalculatePreferredSize;
-(UIButton *)searchButton;
-(UIButton *)composeTweetButton;
-(void)setSearchButton:(UIButton *)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setExpansionStart:(double)arg1 ;
-(void)setExpansionDelta:(double)arg1 ;
-(double)expansionDelta;
-(double)expansionStart;
-(void)_didTapSearchNavigationButton:(id)arg1 ;
-(void)_didTapComposeNavigationButton:(id)arg1 ;
-(void)_didTapBackButton:(id)arg1 ;
-(void)setComposeTweetButton:(UIButton *)arg1 ;
-(void)setBannerImageContainer:(UIView *)arg1 ;
-(void)_didTapBanner:(id)arg1 ;
-(void)_didPullToRefresh;
-(UILabel *)bannerImageCreditLabel;
-(void)_boundsDidUpdate;
-(void)_layoutBannerImageExpansionWithDelta:(double)arg1 ;
-(void)_layoutPullToRefreshControlExpansionWithDelta:(double)arg1 ;
-(void)_layoutBannerImageCollpaseWithDelta:(double)arg1 ;
-(void)_layoutPullToRefreshControlCollapseWithDelta:(double)arg1 ;
-(void)_layoutBannerImageCreditLabelWithDelta:(double)arg1 ;
-(void)_layoutTitleViewWithDelta:(double)arg1 ;
-(BOOL)forceTitleViewHidden;
-(double)_collapseBlurPercentForDelta:(double)arg1 ;
-(BOOL)forceBlur;
-(double)_expansionBlurPercentForDelta:(double)arg1 ;
-(BOOL)forcePullToRefreshControlHidden;
-(void)setImageCredit:(id)arg1 ;
-(void)setBannerImageCreditLabel:(UILabel *)arg1 ;
-(T1EventHeaderInfoView *)infoView;
-(void)setInfoView:(T1EventHeaderInfoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1EventContainerHeaderViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<T1EventContainerHeaderViewDelegate>)delegate;
-(unsigned long long)style;
-(T1BouncingTitleView *)titleView;
-(void)setTitleView:(T1BouncingTitleView *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)preferredSize;
-(TFNBlurrableImageView *)bannerImageView;
-(UIButton *)backButton;
@end

