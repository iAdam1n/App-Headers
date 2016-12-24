/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAccessorizedExpandableView.h>

@class NSMutableArray, UILabel, UIButton;

@interface EBUBidBinDynamicHeightView : EBUAccessorizedExpandableView {

	NSMutableArray* _localConstraints;
	UILabel* _priceLabel;
	UILabel* _bidCountLabel;
	UILabel* _separator;
	UILabel* _timeLeftLabel;
	UILabel* _detailLabel;
	UIButton* _infoButton;

}

@property (nonatomic,retain) UILabel * priceLabel;                 //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * bidCountLabel;              //@synthesize bidCountLabel=_bidCountLabel - In the implementation block
@property (nonatomic,retain) UILabel * separator;                  //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UILabel * timeLeftLabel;              //@synthesize timeLeftLabel=_timeLeftLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                //@synthesize infoButton=_infoButton - In the implementation block
-(UILabel *)timeLeftLabel;
-(void)setTimeLeftLabel:(UILabel *)arg1 ;
-(void)setBidCountLabel:(UILabel *)arg1 ;
-(id)initWithBidCountInfo:(BOOL)arg1 ;
-(UILabel *)bidCountLabel;
-(void)updateConstraints;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setSeparator:(UILabel *)arg1 ;
-(UILabel *)separator;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
@end
