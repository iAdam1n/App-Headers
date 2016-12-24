/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, UIImageView;

@interface CARIconCell : UITableViewCell {

	UILabel* _menuLabel;
	UIButton* _menuButton;
	UIImageView* _checkmark;

}

@property (nonatomic,retain) UILabel * menuLabel;                  //@synthesize menuLabel=_menuLabel - In the implementation block
@property (nonatomic,retain) UIButton * menuButton;                //@synthesize menuButton=_menuButton - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;              //@synthesize checkmark=_checkmark - In the implementation block
-(void)setMenuLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)menuLabel;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(void)setMenuButton:(UIButton *)arg1 ;
-(UIButton *)menuButton;
@end
