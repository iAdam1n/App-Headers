/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKTeamSwitcherBaseTableViewCell.h>

@class UIView, NSLayoutConstraint, UIImageView, _TtCC5Slack29SLKTeamSwitcherViewController24SLKTeamSwitcherViewModel;

@interface Slack.SLKTeamSwitcherTableViewCell : Slack.SLKTeamSwitcherBaseTableViewCell {

	 bigTeamIconSize;
	 smallTeamIconSize;
	 containerView;
	 containerBottomConstraint;
	 iconLeadingConstraint;
	 checkmarkImageView;
	 switcherModel;
	 isTeamSelected;
	 mentionCount;

}

@property (retain,nonatomic) UIView * containerView; 
@property (retain,nonatomic) NSLayoutConstraint * containerBottomConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * iconLeadingConstraint; 
@property (retain,nonatomic) UIImageView * checkmarkImageView; 
@property (retain,nonatomic) _TtCC5Slack29SLKTeamSwitcherViewController24SLKTeamSwitcherViewModel * switcherModel; 
@property (assign,nonatomic) BOOL isTeamSelected; 
@property (assign,nonatomic) long long mentionCount; 
+(double)enterpriseCellBottomPadding;
-(long long)mentionCount;
-(void)setMentionCount:(long long)arg1 ;
-(void)updateTheme;
-(void)setIsTeamSelected:(BOOL)arg1 ;
-(NSLayoutConstraint *)containerBottomConstraint;
-(void)setContainerBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(_TtCC5Slack29SLKTeamSwitcherViewController24SLKTeamSwitcherViewModel *)switcherModel;
-(void)setSwitcherModel:(_TtCC5Slack29SLKTeamSwitcherViewController24SLKTeamSwitcherViewModel *)arg1 ;
-(BOOL)isTeamSelected;
-(void)updateUnreads;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(void)awakeFromNib;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateMentions;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(void)setIconLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconLeadingConstraint;
@end

