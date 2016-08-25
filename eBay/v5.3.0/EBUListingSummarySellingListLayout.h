/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUListingSummarySellingLayout.h>

@class UIButton, EUIImageView, EUILabel, NSArray;

@interface EBUListingSummarySellingListLayout : EBUListingSummarySellingLayout {

	UIButton* _x;
	EUIImageView* _picture;
	EUILabel* _h1;
	EUILabel* _title;
	EUILabel* _p1;
	EUILabel* _p2;
	EUILabel* _s1;
	EUILabel* _s2;
	EUILabel* _s3;
	EUILabel* _s4;
	NSArray* _headerSelectors;
	NSArray* _primarySelectors;
	NSArray* _secondarySelectors;

}

@property (assign,x,nonatomic,__weak) UIButton * x;                      //@synthesize x=_x - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * picture;              //@synthesize picture=_picture - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * h1;                       //@synthesize h1=_h1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p1;                       //@synthesize p1=_p1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * p2;                       //@synthesize p2=_p2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s1;                       //@synthesize s1=_s1 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s2;                       //@synthesize s2=_s2 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s3;                       //@synthesize s3=_s3 - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * s4;                       //@synthesize s4=_s4 - In the implementation block
@property (nonatomic,copy) NSArray * headerSelectors;                    //@synthesize headerSelectors=_headerSelectors - In the implementation block
@property (nonatomic,copy) NSArray * primarySelectors;                   //@synthesize primarySelectors=_primarySelectors - In the implementation block
@property (nonatomic,copy) NSArray * secondarySelectors;                 //@synthesize secondarySelectors=_secondarySelectors - In the implementation block
-(void)initializeKeys;
-(void)setPrimarySelectors:(NSArray *)arg1 ;
-(void)setSecondarySelectors:(NSArray *)arg1 ;
-(NSArray *)primarySelectors;
-(NSArray *)secondarySelectors;
-(EUILabel *)s1;
-(EUILabel *)s2;
-(void)createConstraints;
-(double)pictureViewWidth;
-(double)pictureViewHeight;
-(void)setP1:(EUILabel *)arg1 ;
-(void)setP2:(EUILabel *)arg1 ;
-(void)setS1:(EUILabel *)arg1 ;
-(void)setS2:(EUILabel *)arg1 ;
-(void)setHeaderSelectors:(NSArray *)arg1 ;
-(NSArray *)headerSelectors;
-(EUILabel *)h1;
-(EUILabel *)s3;
-(void)setH1:(EUILabel *)arg1 ;
-(void)setS3:(EUILabel *)arg1 ;
-(EUILabel *)s4;
-(void)constrainDeleteButton;
-(void)constrainPictureAndTitle;
-(void)constrainTitleAndSecondary;
-(void)constrainPrimaryAndSecondary;
-(BOOL)isTabular;
-(void)setS4:(EUILabel *)arg1 ;
-(EUILabel *)p2;
-(void)setTitle:(EUILabel *)arg1 ;
-(EUILabel *)title;
-(id)initWithView:(id)arg1 ;
-(UIButton *)x;
-(void)setX:(UIButton *)arg1 ;
-(void)updateLabels;
-(EUIImageView *)picture;
-(void)setPicture:(EUIImageView *)arg1 ;
-(EUILabel *)p1;
-(double)heightForWidth:(double)arg1 ;
@end

