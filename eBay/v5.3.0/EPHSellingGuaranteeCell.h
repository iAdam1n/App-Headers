/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBayTableViewCell.h>

@class UILabel;

@interface EPHSellingGuaranteeCell : eBayTableViewCell {

	UILabel* _guaranteeTitle;
	UILabel* _guaranteeDetail;

}

@property (nonatomic,retain) UILabel * guaranteeTitle;               //@synthesize guaranteeTitle=_guaranteeTitle - In the implementation block
@property (nonatomic,retain) UILabel * guaranteeDetail;              //@synthesize guaranteeDetail=_guaranteeDetail - In the implementation block
-(double)optimalHeight;
-(void)setGuaranteedPrice:(id)arg1 ;
-(UILabel *)guaranteeTitle;
-(UILabel *)guaranteeDetail;
-(void)setGuaranteeTitle:(UILabel *)arg1 ;
-(void)setGuaranteeDetail:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

