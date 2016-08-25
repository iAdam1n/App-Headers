/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseViewCell.h>

@class UILabel, UIImageView;

@interface ECAdListEbayListingCell : ECAdListBaseViewCell {

	UILabel* _biddingLabel;
	UILabel* _adLabel;
	UIImageView* _sponsorAdImageView;

}

@property (assign,nonatomic,__weak) UILabel * biddingLabel;                        //@synthesize biddingLabel=_biddingLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * adLabel;                             //@synthesize adLabel=_adLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * sponsorAdImageView;              //@synthesize sponsorAdImageView=_sponsorAdImageView - In the implementation block
-(void)setAd:(id)arg1 metadata:(id)arg2 cellType:(unsigned long long)arg3 ;
-(UILabel *)biddingLabel;
-(void)setBiddingLabel:(UILabel *)arg1 ;
-(void)setupBiddingLabelForAd:(id)arg1 ;
-(UILabel *)adLabel;
-(UIImageView *)sponsorAdImageView;
-(void)sponsorAdLogoTapped:(id)arg1 ;
-(void)setAdLabel:(UILabel *)arg1 ;
-(void)setSponsorAdImageView:(UIImageView *)arg1 ;
@end

