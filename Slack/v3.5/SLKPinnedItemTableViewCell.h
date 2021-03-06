/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton;

@interface SLKPinnedItemTableViewCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _timestampLabel;
	UILabel* _detailLabel;
	UIButton* _accessoryButton;

}

@property (assign,nonatomic,__weak) UILabel * nameLabel;                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timestampLabel;                //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailLabel;                   //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(UIButton *)accessoryButton;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
@end

