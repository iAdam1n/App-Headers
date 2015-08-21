/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class UILabel, UIImageView;

@interface ECPostFeaturePurchaseEncouragementCell : ECBaseTableViewCell {

	UILabel* _titleLabel;
	UIImageView* _iconView;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
+(double)cellHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(id)textLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end
