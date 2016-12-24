/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UILabel, UIImageView, NSLayoutConstraint, UIColor, SLKDependencies;

@interface Slack.SLKChannelTableViewCell : UITableViewCell {

	 backgroundHighlightView;
	 symbolLabel;
	 mainLabel;
	 secondaryLabel;
	 userStatusLabel;
	 badgeLabel;
	 alertIconImageView;
	 customAccessoryView;
	 symbolCenterConstraint;
	 alertIconImageViewRightConstraint;
	 accessoryViewWidthConstraint;
	 accessoryViewLeftSideConstraint;
	 accessoryViewRightSideConstraint;
	 secondaryLabelStatusLeadingConstraint;
	 isActive;
	 selectedColor;
	 mainTextColor;
	 dimmedMainTextColor;
	 secondaryTextColor;
	 onlineStatusColor;
	 offlineStatusColor;
	 badgeColor;
	 backgroundHighlightColor;
	 backgroundNoHighlightColor;
	 activeTextColor;
	 ipadQuickSwitcher;
	 mainLabelFontSize;
	 secondaryLabelFontSize;
	 ignoreCellFormatting;
	 dependencies;
	 rowData;
	 icon;
	 highlightForSelection;

}

@property (assign,__weak,nonatomic) UIView * backgroundHighlightView; 
@property (assign,__weak,nonatomic) UILabel * symbolLabel; 
@property (assign,__weak,nonatomic) UILabel * mainLabel; 
@property (assign,__weak,nonatomic) UILabel * secondaryLabel; 
@property (retain,nonatomic) UILabel * userStatusLabel; 
@property (assign,__weak,nonatomic) UILabel * badgeLabel; 
@property (assign,__weak,nonatomic) UIImageView * alertIconImageView; 
@property (assign,__weak,nonatomic) UIView * customAccessoryView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * symbolCenterConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * alertIconImageViewRightConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * accessoryViewWidthConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * accessoryViewLeftSideConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * accessoryViewRightSideConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * secondaryLabelStatusLeadingConstraint; 
@property (assign,nonatomic) BOOL isActive; 
@property (retain,nonatomic) UIColor * selectedColor; 
@property (retain,nonatomic) UIColor * mainTextColor; 
@property (retain,nonatomic) UIColor * dimmedMainTextColor; 
@property (retain,nonatomic) UIColor * secondaryTextColor; 
@property (retain,nonatomic) UIColor * onlineStatusColor; 
@property (retain,nonatomic) UIColor * offlineStatusColor; 
@property (retain,nonatomic) UIColor * badgeColor; 
@property (retain,nonatomic) UIColor * backgroundHighlightColor; 
@property (retain,nonatomic) UIColor * backgroundNoHighlightColor; 
@property (retain,nonatomic) UIColor * activeTextColor; 
@property (assign,nonatomic) BOOL ipadQuickSwitcher; 
@property (assign,nonatomic) double mainLabelFontSize; 
@property (assign,nonatomic) double secondaryLabelFontSize; 
@property (assign,nonatomic) BOOL ignoreCellFormatting; 
@property (assign,__weak,nonatomic) SLKDependencies * dependencies; 
@property (retain,nonatomic) id rowData; 
@property (assign,nonatomic) BOOL highlightForSelection; 
-(UIImageView *)alertIconImageView;
-(void)setAlertIconImageView:(UIImageView *)arg1 ;
-(UILabel *)badgeLabel;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(void)setIgnoreCellFormatting:(BOOL)arg1 ;
-(UILabel *)symbolLabel;
-(void)setOnlineStatusColor:(UIColor *)arg1 ;
-(void)setMainTextColor:(UIColor *)arg1 ;
-(void)setDimmedMainTextColor:(UIColor *)arg1 ;
-(void)setBackgroundNoHighlightColor:(UIColor *)arg1 ;
-(void)setBackgroundHighlightColor:(UIColor *)arg1 ;
-(UIColor *)activeTextColor;
-(void)setActiveTextColor:(UIColor *)arg1 ;
-(void)setOfflineStatusColor:(UIColor *)arg1 ;
-(void)setupSecondaryAndStatusLabel:(BOOL)arg1 ;
-(void)setBackgroundHighlightView:(UIView *)arg1 ;
-(void)setSymbolLabel:(UILabel *)arg1 ;
-(UILabel *)userStatusLabel;
-(void)setUserStatusLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)symbolCenterConstraint;
-(void)setSymbolCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)alertIconImageViewRightConstraint;
-(void)setAlertIconImageViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewWidthConstraint;
-(void)setAccessoryViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewLeftSideConstraint;
-(void)setAccessoryViewLeftSideConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewRightSideConstraint;
-(void)setAccessoryViewRightSideConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondaryLabelStatusLeadingConstraint;
-(void)setSecondaryLabelStatusLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)mainTextColor;
-(UIColor *)dimmedMainTextColor;
-(UIColor *)onlineStatusColor;
-(UIColor *)offlineStatusColor;
-(UIColor *)backgroundHighlightColor;
-(UIColor *)backgroundNoHighlightColor;
-(BOOL)ipadQuickSwitcher;
-(void)setIpadQuickSwitcher:(BOOL)arg1 ;
-(double)mainLabelFontSize;
-(void)setMainLabelFontSize:(double)arg1 ;
-(double)secondaryLabelFontSize;
-(void)setSecondaryLabelFontSize:(double)arg1 ;
-(BOOL)ignoreCellFormatting;
-(BOOL)highlightForSelection;
-(void)setHighlightForSelection:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isActive;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setIsActive:(BOOL)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UIView *)backgroundHighlightView;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(id)rowData;
-(void)setRowData:(id)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)mainLabel;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setCustomAccessoryView:(UIView *)arg1 ;
-(UIView *)customAccessoryView;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
@end
