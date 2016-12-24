/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SelectiveSeparatorCell.h>
#import <eBay/MetricsCompatibleCell.h>

@class UILabel;

@interface SellingSummaryHeaderCell : SelectiveSeparatorCell <MetricsCompatibleCell> {

	UILabel* _summaryLabel;
	UILabel* _valueLabel;

}

@property (assign,nonatomic,__weak) UILabel * summaryLabel;              //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) double nameLabelWidth; 
@property (assign,nonatomic) double leftOffset; 
-(void)setupCell;
-(void)setupValueLabel;
-(void)setupSummaryLabel;
-(void)setupBackgroundColor;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(UILabel *)summaryLabel;
@end
