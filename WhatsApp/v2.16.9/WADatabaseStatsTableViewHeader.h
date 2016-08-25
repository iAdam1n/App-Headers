/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface WADatabaseStatsTableViewHeader : UIView {

	UILabel* _headerLabel;
	UIView* _borderView;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UILabel * headerLabel;                //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIView * borderView;                  //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(UIView *)borderView;
-(void)setBorderView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
@end

