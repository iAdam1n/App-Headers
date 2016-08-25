/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, NSLayoutConstraint, _TtC5Slack16SLKIconBadgeView, UILabel, SLKDependencies;

@interface Slack.SLKTeamSwitcherBaseTableViewCell : UITableViewCell {

	 bigTeamIconSizeIPhone;
	 smallTeamIconSizeIPhone;
	 bigTeamIconSizeIPad;
	 smallTeamIconSizeIPad;
	 iconContentView;
	 iconContentViewHeightConstraint;
	 iconBadgeView;
	 mainLabel;
	 detailLabel;
	 translucentTextAlpha;
	 dependencies;

}

@property (readonly,nonatomic) double bigTeamIconSizeIPhone; 
@property (readonly,nonatomic) double smallTeamIconSizeIPhone; 
@property (readonly,nonatomic) double bigTeamIconSizeIPad; 
@property (readonly,nonatomic) double smallTeamIconSizeIPad; 
@property (retain,nonatomic) UIView * iconContentView; 
@property (retain,nonatomic) NSLayoutConstraint * iconContentViewHeightConstraint; 
@property (retain,nonatomic) _TtC5Slack16SLKIconBadgeView * iconBadgeView; 
@property (retain,nonatomic) UILabel * mainLabel; 
@property (retain,nonatomic) UILabel * detailLabel; 
@property (assign,nonatomic) double translucentTextAlpha; 
@property (assign,__weak,nonatomic) SLKDependencies * dependencies; 
-(void)updateTheme;
-(double)bigTeamIconSizeIPhone;
-(double)smallTeamIconSizeIPhone;
-(double)bigTeamIconSizeIPad;
-(double)smallTeamIconSizeIPad;
-(UIView *)iconContentView;
-(void)setIconContentView:(UIView *)arg1 ;
-(NSLayoutConstraint *)iconContentViewHeightConstraint;
-(void)setIconContentViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(_TtC5Slack16SLKIconBadgeView *)iconBadgeView;
-(void)setIconBadgeView:(_TtC5Slack16SLKIconBadgeView *)arg1 ;
-(double)translucentTextAlpha;
-(void)setTranslucentTextAlpha:(double)arg1 ;
-(SLKDependencies *)dependencies;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(UILabel *)mainLabel;
@end

