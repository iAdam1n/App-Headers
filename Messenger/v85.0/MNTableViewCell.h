/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNTableViewCellStyle, UIView, UILabel, UIImageView;

@interface MNTableViewCell : UITableViewCell {

	MNTableViewCellStyle* _cellStyle;
	UIView* _lineSeparator;
	UILabel* _mainLabel;
	UILabel* _iconLabel;
	UIImageView* _mainImageView;

}

@property (nonatomic,readonly) UILabel * mainLabel;                      //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * iconLabel;                      //@synthesize iconLabel=_iconLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * mainImageView;              //@synthesize mainImageView=_mainImageView - In the implementation block
@property (assign,nonatomic) BOOL showsLineSeparator; 
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsLineSeparator:(BOOL)arg1 ;
-(UIImageView *)mainImageView;
-(UILabel *)iconLabel;
-(BOOL)showsLineSeparator;
-(void)_updateCellColors;
-(void)_updateCellBackground;
-(void)setMainImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)mainLabel;
-(void)setCellStyle:(id)arg1 ;
@end

