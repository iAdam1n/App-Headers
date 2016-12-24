/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OABaseTableViewCell.h>

@class UIView, OABaseTableViewCellSeparatorView;

@interface OASettingsHeaderTableViewCell : OABaseTableViewCell {

	UIView* _headerView;
	OABaseTableViewCellSeparatorView* _separatorView;

}

@property (nonatomic,retain) UIView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) OABaseTableViewCellSeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(OABaseTableViewCellSeparatorView *)separatorView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSeparatorView:(OABaseTableViewCellSeparatorView *)arg1 ;
@end
