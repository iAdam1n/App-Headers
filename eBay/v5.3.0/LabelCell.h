/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SelectiveSeparatorCell.h>
#import <eBay/MetricsCompatibleCell.h>

@class UILabel;

@interface LabelCell : SelectiveSeparatorCell <MetricsCompatibleCell> {

	UILabel* contentLabel;
	double leftOffset;
	BOOL useSeparator;

}

@property (nonatomic,retain) UILabel * contentLabel; 
@property (assign,nonatomic) double leftOffset; 
@property (assign) BOOL useSeparator; 
@property (assign,nonatomic) double nameLabelWidth; 
+(id)emptyCell;
-(double)optimalHeight;
-(double)leftOffset;
-(void)setLeftOffset:(double)arg1 ;
-(BOOL)useSeparator;
-(void)setUseSeparator:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabelText:(id)arg1 ;
-(void)setContentLabel:(UILabel *)arg1 ;
-(UILabel *)contentLabel;
@end

