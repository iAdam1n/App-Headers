/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSLayoutConstraint, UILabel, SLKUser;

@interface Slack.SLKUserDetailNavBarBackground : UIView {

	 containerView;
	 containerViewWidth;
	 containerViewHeight;
	 containerViewCenterY;
	 hairLine;
	 hairLineHeight;
	 labelVerticalSpacing;
	 topLabel;
	 bottomLabel;
	 user;

}

@property (retain,nonatomic) UIView * containerView; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewWidth; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewHeight; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewCenterY; 
@property (retain,nonatomic) UIView * hairLine; 
@property (retain,nonatomic) NSLayoutConstraint * hairLineHeight; 
@property (retain,nonatomic) NSLayoutConstraint * labelVerticalSpacing; 
@property (retain,nonatomic) UILabel * topLabel; 
@property (retain,nonatomic) UILabel * bottomLabel; 
@property (retain,nonatomic) SLKUser * user; 
+(id)viewFromNib;
-(NSLayoutConstraint *)containerViewWidth;
-(void)setContainerViewWidth:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewHeight;
-(void)setContainerViewHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewCenterY;
-(void)setContainerViewCenterY:(NSLayoutConstraint *)arg1 ;
-(UIView *)hairLine;
-(void)setHairLine:(UIView *)arg1 ;
-(NSLayoutConstraint *)hairLineHeight;
-(void)setHairLineHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelVerticalSpacing;
-(void)setLabelVerticalSpacing:(NSLayoutConstraint *)arg1 ;
-(SLKUser *)user;
-(void)setUser:(SLKUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)containerView;
-(void)awakeFromNib;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)topLabel;
-(void)setTopLabel:(UILabel *)arg1 ;
-(UILabel *)bottomLabel;
-(void)setBottomLabel:(UILabel *)arg1 ;
@end

