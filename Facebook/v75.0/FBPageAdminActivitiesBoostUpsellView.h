/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPageAdminActivitiesBoostUpsellViewDelegate;
@class FBNetworkImageView, UILabel, FBButton;

@interface FBPageAdminActivitiesBoostUpsellView : UIView {

	id<FBPageAdminActivitiesBoostUpsellViewDelegate> _delegate;
	FBNetworkImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBButton* _promoteButton;
	UIEdgeInsets _contentEdgeInset;

}

@property (assign,nonatomic,__weak) id<FBPageAdminActivitiesBoostUpsellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * iconImageView;                                            //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) FBButton * promoteButton;                                                      //@synthesize promoteButton=_promoteButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInset;                                                 //@synthesize contentEdgeInset=_contentEdgeInset - In the implementation block
-(id)initWithSession:(id)arg1 title:(id)arg2 subtitle:(id)arg3 buttonTitle:(id)arg4 imageName:(id)arg5 delegate:(id)arg6 ;
-(void)_promoteButtonTapped:(id)arg1 ;
-(UIEdgeInsets)contentEdgeInset;
-(FBButton *)promoteButton;
-(void)setPromoteButton:(FBButton *)arg1 ;
-(void)setContentEdgeInset:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPageAdminActivitiesBoostUpsellViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPageAdminActivitiesBoostUpsellViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(FBNetworkImageView *)iconImageView;
-(void)setIconImageView:(FBNetworkImageView *)arg1 ;
@end
