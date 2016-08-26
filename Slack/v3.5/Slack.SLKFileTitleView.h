/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSLayoutConstraint, UIView, UIImageView;

@interface Slack.SLKFileTitleView : UIView {

	 titleLabel;
	 titleLabelLeadingConstraint;
	 presenceView;
	 caretImageView;
	 caretImageViewLeadingConstraint;
	 iconImageView;
	 showCaret;
	 showPresence;
	 showIcon;
	 isOnline;

}

@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * titleLabelLeadingConstraint; 
@property (assign,__weak,nonatomic) UIView * presenceView; 
@property (assign,__weak,nonatomic) UIImageView * caretImageView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * caretImageViewLeadingConstraint; 
@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,nonatomic) BOOL showCaret; 
@property (assign,nonatomic) BOOL showPresence; 
@property (assign,nonatomic) BOOL showIcon; 
@property (assign,nonatomic) BOOL isOnline; 
+(id)viewFromNib;
-(BOOL)showPresence;
-(BOOL)showCaret;
-(void)setShowCaret:(BOOL)arg1 ;
-(void)setShowPresence:(BOOL)arg1 ;
-(NSLayoutConstraint *)titleLabelLeadingConstraint;
-(void)setTitleLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)presenceView;
-(void)setPresenceView:(UIView *)arg1 ;
-(UIImageView *)caretImageView;
-(void)setCaretImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)caretImageViewLeadingConstraint;
-(void)setCaretImageViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setIsOnline:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(BOOL)isOnline;
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
@end
