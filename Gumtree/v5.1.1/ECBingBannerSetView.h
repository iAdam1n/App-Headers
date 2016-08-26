/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, ECThemedLabelCaption2TextSecondaryLightBackground, ECBingBannerSet, ECBingBannerAdsManagerConfiguration, NSMutableArray;

@interface ECBingBannerSetView : UIView {

	BOOL _displayThumbnails;
	BOOL _constraintsAdded;
	UIView* _headerView;
	ECThemedLabelCaption2TextSecondaryLightBackground* _sponsoredLinkLabel;
	ECBingBannerSet* _bannerSet;
	ECBingBannerAdsManagerConfiguration* _configuration;
	NSMutableArray* _bannerViews;

}

@property (nonatomic,retain) UIView * headerView;                                                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) ECThemedLabelCaption2TextSecondaryLightBackground * sponsoredLinkLabel;              //@synthesize sponsoredLinkLabel=_sponsoredLinkLabel - In the implementation block
@property (nonatomic,retain) ECBingBannerSet * bannerSet;                                                         //@synthesize bannerSet=_bannerSet - In the implementation block
@property (nonatomic,retain) ECBingBannerAdsManagerConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * bannerViews;                                                        //@synthesize bannerViews=_bannerViews - In the implementation block
@property (assign,nonatomic) BOOL displayThumbnails;                                                              //@synthesize displayThumbnails=_displayThumbnails - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                                               //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
-(id)initWithBingBannerSet:(id)arg1 withThumbnails:(BOOL)arg2 configuration:(id)arg3 ;
-(NSMutableArray *)bannerViews;
-(ECBingBannerSet *)bannerSet;
-(void)setSponsoredLinkLabel:(ECThemedLabelCaption2TextSecondaryLightBackground *)arg1 ;
-(ECThemedLabelCaption2TextSecondaryLightBackground *)sponsoredLinkLabel;
-(BOOL)displayThumbnails;
-(void)setBannerSet:(ECBingBannerSet *)arg1 ;
-(void)setBannerViews:(NSMutableArray *)arg1 ;
-(void)setDisplayThumbnails:(BOOL)arg1 ;
-(void)dealloc;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)updateConstraints;
-(void)setConfiguration:(ECBingBannerAdsManagerConfiguration *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(ECBingBannerAdsManagerConfiguration *)configuration;
-(void)setConstraintsAdded:(BOOL)arg1 ;
-(BOOL)constraintsAdded;
@end
