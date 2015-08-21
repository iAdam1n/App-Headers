/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OABaseTableViewCell.h>

@class UIView, OABaseTableViewCellSeparatorView;

@interface OAAppNotificationsHeaderTableViewCell : OABaseTableViewCell {

	UIView* _headerView;
	OABaseTableViewCellSeparatorView* _separatorView;

}

@property (nonatomic,retain) UIView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) OABaseTableViewCellSeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(OABaseTableViewCellSeparatorView *)separatorView;
-(void)setSeparatorView:(OABaseTableViewCellSeparatorView *)arg1 ;
@end

