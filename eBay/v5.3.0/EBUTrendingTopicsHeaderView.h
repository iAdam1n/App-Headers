/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class EUILabel, EUIImageView, UIView;

@interface EBUTrendingTopicsHeaderView : UICollectionReusableView {

	BOOL _hasSetupConstraints;
	EUILabel* _rankLabel;
	EUIImageView* _deltaImageView;
	EUILabel* _hotLabel;
	EUILabel* _titleLabel;
	UIView* _hDividerView;
	UIView* _vDividerView;
	UIView* _vPadView1;
	UIView* _vPadView2;
	EUILabel* _descriptionLabel;
	EUILabel* _viewCountLabel;
	EUILabel* _viewLabel;
	EUILabel* _clickCountLabel;
	EUILabel* _clickLabel;

}

@property (assign,nonatomic,__weak) EUILabel * rankLabel;                       //@synthesize rankLabel=_rankLabel - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * deltaImageView;              //@synthesize deltaImageView=_deltaImageView - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * hotLabel;                        //@synthesize hotLabel=_hotLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * hDividerView;                      //@synthesize hDividerView=_hDividerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * vDividerView;                      //@synthesize vDividerView=_vDividerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * vPadView1;                         //@synthesize vPadView1=_vPadView1 - In the implementation block
@property (assign,nonatomic,__weak) UIView * vPadView2;                         //@synthesize vPadView2=_vPadView2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * descriptionLabel;                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * viewCountLabel;                  //@synthesize viewCountLabel=_viewCountLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * viewLabel;                       //@synthesize viewLabel=_viewLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * clickCountLabel;                 //@synthesize clickCountLabel=_clickCountLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * clickLabel;                      //@synthesize clickLabel=_clickLabel - In the implementation block
@property (assign,nonatomic) BOOL hasSetupConstraints;                          //@synthesize hasSetupConstraints=_hasSetupConstraints - In the implementation block
-(BOOL)hasSetupConstraints;
-(void)setHasSetupConstraints:(BOOL)arg1 ;
-(EUILabel *)hotLabel;
-(EUIImageView *)deltaImageView;
-(void)setImageForRank:(id)arg1 ;
-(EUILabel *)viewCountLabel;
-(EUILabel *)viewLabel;
-(EUILabel *)clickCountLabel;
-(EUILabel *)clickLabel;
-(EUILabel *)rankLabel;
-(id)imageForDelta:(long long)arg1 prefix:(id)arg2 ;
-(void)setupWithTopic:(id)arg1 index:(long long)arg2 ;
-(void)setRankLabel:(EUILabel *)arg1 ;
-(void)setDeltaImageView:(EUIImageView *)arg1 ;
-(void)setHotLabel:(EUILabel *)arg1 ;
-(UIView *)hDividerView;
-(void)setHDividerView:(UIView *)arg1 ;
-(UIView *)vDividerView;
-(void)setVDividerView:(UIView *)arg1 ;
-(UIView *)vPadView1;
-(void)setVPadView1:(UIView *)arg1 ;
-(UIView *)vPadView2;
-(void)setVPadView2:(UIView *)arg1 ;
-(void)setViewCountLabel:(EUILabel *)arg1 ;
-(void)setViewLabel:(EUILabel *)arg1 ;
-(void)setClickCountLabel:(EUILabel *)arg1 ;
-(void)setClickLabel:(EUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(EUILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(EUILabel *)descriptionLabel;
-(void)setDescriptionLabel:(EUILabel *)arg1 ;
@end

