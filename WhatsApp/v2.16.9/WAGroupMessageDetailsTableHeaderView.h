/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView;

@interface WAGroupMessageDetailsTableHeaderView : UITableViewHeaderFooterView {

	UILabel* _titleLabel;
	UIView* _topBorder;
	UIView* _bottomBorder;
	UIEdgeInsets _inset;

}

@property (nonatomic,readonly) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIView * topBorder;                 //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,readonly) UIView * bottomBorder;              //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inset;                   //@synthesize inset=_inset - In the implementation block
+(double)headerHeightForHeaderTitle:(id)arg1 ;
-(void)setInset:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIEdgeInsets)inset;
-(UIView *)bottomBorder;
-(UIView *)topBorder;
@end

