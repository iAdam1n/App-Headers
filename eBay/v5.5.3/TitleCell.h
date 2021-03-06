/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/SelectiveSeparatorCell.h>
#import <eBay/HeightMetricsCell.h>

@class UILabel;

@interface TitleCell : SelectiveSeparatorCell <HeightMetricsCell> {

	UILabel* _titleView;
	double _verticalPad;
	double _xTitleOffset;

}

@property (nonatomic,readonly) UILabel * titleView;               //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) double verticalPad;                  //@synthesize verticalPad=_verticalPad - In the implementation block
@property (assign,nonatomic) double xTitleOffset;                 //@synthesize xTitleOffset=_xTitleOffset - In the implementation block
@property (assign,nonatomic) double expectedWidth; 
@property (assign,nonatomic) double finalHeight; 
@property (nonatomic,readonly) double optimalHeight; 
+(id)emptyCell;
-(double)optimalHeight;
-(double)availableWidth;
-(void)setVerticalPad:(double)arg1 ;
-(void)setXTitleOffset:(double)arg1 ;
-(CGSize)titleLabelSize;
-(double)verticalPad;
-(double)xTitleOffset;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
@end

