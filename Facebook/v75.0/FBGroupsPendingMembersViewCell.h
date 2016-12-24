/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBGroupsPendingMembersViewConfig, FBGroupsPendingMembersViewCellDelegate;
@class FBUserSession, FBMemPerson, FBItemView_DEPRECATED, FBNetworkImageView, UIImageView, UIView, UIButton;

@interface FBGroupsPendingMembersViewCell : UITableViewCell {

	FBUserSession* _session;
	FBMemPerson* _person;
	FBItemView_DEPRECATED* _summaryView;
	FBNetworkImageView* _photoView;
	id<FBGroupsPendingMembersViewConfig> _config;
	UIImageView* _memberAddedImageView;
	UIView* _buttonsView;
	UIButton* _approveButton;
	UIButton* _blockButton;
	UIButton* _ignoreButton;
	double _extraButtonViewVerticalPadding;
	id<FBGroupsPendingMembersViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsPendingMembersViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTertiarySubtitle:(id)arg1 ;
-(void)setSecondarySubtitle:(id)arg1 ;
-(void)setPrimarySubtitle:(id)arg1 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 viewConfig:(id)arg3 ;
-(void)setShowBlockButton:(BOOL)arg1 ;
-(void)setShowButtons:(BOOL)arg1 ;
-(void)_approveButtonTapped:(id)arg1 ;
-(id)_makeButtonWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3 action:(SEL)arg4 ;
-(void)_blockButtonTapped:(id)arg1 ;
-(void)_setSubviewBackgroundColors:(id)arg1 ;
-(void)_updateButtonsBackgroundColor;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBGroupsPendingMembersViewCellDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBGroupsPendingMembersViewCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setPerson:(id)arg1 ;
-(void)setShowCheckmark:(BOOL)arg1 ;
-(void)setHasSeparator:(BOOL)arg1 ;
-(void)_ignoreButtonTapped:(id)arg1 ;
@end
