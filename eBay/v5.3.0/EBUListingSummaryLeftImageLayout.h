/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUListingSummaryLayout.h>

@class NSMutableArray, EUIImageView, UIButton, EUILabel, NSArray;

@interface EBUListingSummaryLeftImageLayout : EBUListingSummaryLayout {

	NSMutableArray* _measurementConstraints;
	long long _titleDefaultNumberOfLines;
	EUIImageView* _picture;
	UIButton* _x;
	EUILabel* _h1;
	EUILabel* _h2;
	EUILabel* _title;
	EUILabel* _subtitle;
	EUILabel* _p1;
	EUILabel* _p2;
	EUILabel* _p3;
	EUILabel* _s1;
	EUILabel* _s2;
	EUILabel* _s3;
	double _horizontalLabelPadding;
	double _imageLabelPadding;
	double _titlePricePadding;
	double _imageWidthMultiplier;
	NSArray* _headerSelectors;
	NSArray* _titleSelectors;
	NSArray* _primarySelectors;
	NSArray* _secondarySelectors;
	long long _slotCountForLayout;

}

@property (assign,nonatomic,__weak) EUIImageView * picture;                    //@synthesize picture=_picture - In the implementation block
@property (assign,x,nonatomic,__weak) UIButton * x;                            //@synthesize x=_x - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * h1;                             //@synthesize h1=_h1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * h2;                             //@synthesize h2=_h2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * title;                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p1;                             //@synthesize p1=_p1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p2;                             //@synthesize p2=_p2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p3;                             //@synthesize p3=_p3 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s1;                             //@synthesize s1=_s1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s2;                             //@synthesize s2=_s2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s3;                             //@synthesize s3=_s3 - In the implementation block
@property (assign,nonatomic) double horizontalLabelPadding;                    //@synthesize horizontalLabelPadding=_horizontalLabelPadding - In the implementation block
@property (assign,nonatomic) double imageLabelPadding;                         //@synthesize imageLabelPadding=_imageLabelPadding - In the implementation block
@property (assign,nonatomic) double titlePricePadding;                         //@synthesize titlePricePadding=_titlePricePadding - In the implementation block
@property (assign,nonatomic) double imageWidthMultiplier;                      //@synthesize imageWidthMultiplier=_imageWidthMultiplier - In the implementation block
@property (nonatomic,copy) NSArray * headerSelectors;                          //@synthesize headerSelectors=_headerSelectors - In the implementation block
@property (nonatomic,copy) NSArray * titleSelectors;                           //@synthesize titleSelectors=_titleSelectors - In the implementation block
@property (nonatomic,copy) NSArray * primarySelectors;                         //@synthesize primarySelectors=_primarySelectors - In the implementation block
@property (nonatomic,copy) NSArray * secondarySelectors;                       //@synthesize secondarySelectors=_secondarySelectors - In the implementation block
@property (assign,nonatomic) long long slotCountForLayout;                     //@synthesize slotCountForLayout=_slotCountForLayout - In the implementation block
@property (assign,nonatomic) long long titleDefaultNumberOfLines;              //@synthesize titleDefaultNumberOfLines=_titleDefaultNumberOfLines - In the implementation block
-(void)initializeKeys;
-(void)setTitleSelectors:(NSArray *)arg1 ;
-(void)setPrimarySelectors:(NSArray *)arg1 ;
-(void)setSecondarySelectors:(NSArray *)arg1 ;
-(NSArray *)titleSelectors;
-(NSArray *)primarySelectors;
-(NSArray *)secondarySelectors;
-(long long)titleDefaultNumberOfLines;
-(void)constrainSlots;
-(EUILabel *)s1;
-(EUILabel *)s2;
-(id)createTheme;
-(void)createConstraints;
-(double)pictureViewWidth;
-(double)pictureViewHeight;
-(void)updateLabelAttributes:(id)arg1 withSelector:(id)arg2 ;
-(void)setTitleDefaultNumberOfLines:(long long)arg1 ;
-(void)setP1:(EUILabel *)arg1 ;
-(void)setP2:(EUILabel *)arg1 ;
-(void)setS1:(EUILabel *)arg1 ;
-(void)setS2:(EUILabel *)arg1 ;
-(void)setSlotCountForLayout:(long long)arg1 ;
-(void)setHeaderSelectors:(NSArray *)arg1 ;
-(void)setHorizontalLabelPadding:(double)arg1 ;
-(NSArray *)headerSelectors;
-(long long)slotCountForLayout;
-(EUILabel *)h1;
-(EUILabel *)h2;
-(EUILabel *)s3;
-(double)actionViewHeightForWidth:(double)arg1 ;
-(void)setH1:(EUILabel *)arg1 ;
-(void)setH2:(EUILabel *)arg1 ;
-(void)setP3:(EUILabel *)arg1 ;
-(void)setS3:(EUILabel *)arg1 ;
-(double)horizontalLabelPadding;
-(double)imageLabelPadding;
-(void)setImageLabelPadding:(double)arg1 ;
-(double)titlePricePadding;
-(void)setTitlePricePadding:(double)arg1 ;
-(void)setImageWidthMultiplier:(double)arg1 ;
-(double)imageWidthMultiplier;
-(EUILabel *)p2;
-(EUILabel *)p3;
-(void)setTitle:(EUILabel *)arg1 ;
-(EUILabel *)title;
-(EUILabel *)subtitle;
-(id)initWithView:(id)arg1 ;
-(id)metrics;
-(void)setSubtitle:(EUILabel *)arg1 ;
-(UIButton *)x;
-(void)setX:(UIButton *)arg1 ;
-(void)updateLabels;
-(EUIImageView *)picture;
-(void)setPicture:(EUIImageView *)arg1 ;
-(EUILabel *)p1;
-(double)heightForWidth:(double)arg1 ;
@end

