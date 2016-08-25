/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUListingSummaryLayout.h>

@class EUIImageView, UIButton, EUILabel, NSArray;

@interface EBUListingSummaryThumbnailLayout : EBUListingSummaryLayout {

	long long _titleDefaultNumberOfLines;
	EUIImageView* _picture;
	UIButton* _x;
	EUILabel* _title;
	EUILabel* _p1;
	EUILabel* _p2;
	EUILabel* _s1;
	EUILabel* _s2;
	NSArray* _titleSelectors;
	NSArray* _primarySelectors;
	NSArray* _secondarySelectors;

}

@property (assign,nonatomic,__weak) EUIImageView * picture;                    //@synthesize picture=_picture - In the implementation block
@property (assign,x,nonatomic,__weak) UIButton * x;                            //@synthesize x=_x - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * title;                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p1;                             //@synthesize p1=_p1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p2;                             //@synthesize p2=_p2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s1;                             //@synthesize s1=_s1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s2;                             //@synthesize s2=_s2 - In the implementation block
@property (nonatomic,copy) NSArray * titleSelectors;                           //@synthesize titleSelectors=_titleSelectors - In the implementation block
@property (nonatomic,copy) NSArray * primarySelectors;                         //@synthesize primarySelectors=_primarySelectors - In the implementation block
@property (nonatomic,copy) NSArray * secondarySelectors;                       //@synthesize secondarySelectors=_secondarySelectors - In the implementation block
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
-(EUILabel *)p2;
-(void)setTitle:(EUILabel *)arg1 ;
-(EUILabel *)title;
-(id)initWithView:(id)arg1 ;
-(id)metrics;
-(UIButton *)x;
-(void)setX:(UIButton *)arg1 ;
-(void)updateLabels;
-(EUIImageView *)picture;
-(void)setPicture:(EUIImageView *)arg1 ;
-(EUILabel *)p1;
-(double)heightForWidth:(double)arg1 ;
@end

