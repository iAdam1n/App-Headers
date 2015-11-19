/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECTableViewNibBasedCell.h>

@class UIImageView, ECBannerView, ECAdListQuickConnectView, UIView;

@interface ECAdListBaseCell : ECTableViewNibBasedCell {

	UIImageView* _thumbnailImageView;
	ECBannerView* _bannerView;
	ECAdListQuickConnectView* _quickConnectView;
	UIView* _disabledOverView;
	UIView* _separatorLine;

}

@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                         //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic,__weak) ECBannerView * bannerView;                                //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic,__weak) ECAdListQuickConnectView * quickConnectView;              //@synthesize quickConnectView=_quickConnectView - In the implementation block
@property (assign,nonatomic,__weak) UIView * disabledOverView;                                //@synthesize disabledOverView=_disabledOverView - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                          //@synthesize separatorLine=_separatorLine - In the implementation block
+(double)cellHeightForAd:(id)arg1 showBiddingInfo:(BOOL)arg2 showCASStore:(BOOL)arg3 showVehicleInfo:(BOOL)arg4 appConfig:(id)arg5 categoryManager:(id)arg6 ;
+(id)cellForTable:(id)arg1 forAd:(id)arg2 showBiddingInfo:(BOOL)arg3 showCASStore:(BOOL)arg4 showVehicleInfo:(BOOL)arg5 appConfig:(id)arg6 categoryManager:(id)arg7 ;
+(void)setupCell:(id)arg1 forAd:(id)arg2 showDistance:(BOOL)arg3 appConfig:(id)arg4 adManager:(id)arg5 placeHolderImageManager:(id)arg6 ;
+(Class)classforAd:(id)arg1 showBiddingInfo:(BOOL)arg2 showCASStore:(BOOL)arg3 showVehicleInfo:(BOOL)arg4 appConfig:(id)arg5 categoryManager:(id)arg6 ;
+(BOOL)showSRPListVehicleAd:(id)arg1 vehicleAppConfig:(id)arg2 categoryManager:(id)arg3 ;
+(BOOL)atLeastOneAttributeIn:(id)arg1 existsNamed:(id)arg2 ;
+(id)statusTextForAd:(id)arg1 shouldShowDatePostedOnSRPForFeaturedAds:(BOOL)arg2 ;
+(BOOL)isDisabledForAd:(id)arg1 ;
+(double)quickConnectHeight;
+(double)defaultHeight;
-(void)setupSeparatorLine;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setupThumbnail:(id)arg1 placeHolderImageManager:(id)arg2 ;
-(void)setupHighlighted:(id)arg1 supportsHighlight:(BOOL)arg2 ;
-(void)setupBanner:(id)arg1 supportedFeatureLabels:(id)arg2 ;
-(void)setupQuickConnectView:(id)arg1 ;
-(void)setupQuickConnectHandlers:(id)arg1 adManager:(id)arg2 ;
-(void)setupDisabled:(id)arg1 ;
-(void)setupWithAd:(id)arg1 showDistance:(BOOL)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(void)setDisabledOverView:(UIView *)arg1 ;
-(UIView *)disabledOverView;
-(ECAdListQuickConnectView *)quickConnectView;
-(void)setQuickConnectView:(ECAdListQuickConnectView *)arg1 ;
-(void)setDefaults:(id)arg1 ;
-(ECBannerView *)bannerView;
-(UIImageView *)thumbnailImageView;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)setBannerView:(ECBannerView *)arg1 ;
@end
