/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol MNJoinableGroupPendingApprovalsCellDelegate;
@class UILabel, MNMaskedProfileImageView, UIButton, UIView, MNTableViewCellStyle, MNProfileImageView;

@interface MNJoinableGroupPendingApprovalsCell : UITableViewCell {

	UILabel* _userDisplayNameLabel;
	UILabel* _mutualFriendsCountLabel;
	MNMaskedProfileImageView* _profileImageMaskView;
	UIButton* _approveButton;
	UIButton* _ignoreButton;
	UIView* _topSeparatorView;
	UIView* _lineSeparatorView;
	double _separatorLeftInset;
	MNTableViewCellStyle* _cellStyle;
	BOOL _disableActionButtons;
	MNProfileImageView* _profileImageView;
	id<MNJoinableGroupPendingApprovalsCellDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * profileImageView;                                      //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic) BOOL disableActionButtons;                                                    //@synthesize disableActionButtons=_disableActionButtons - In the implementation block
@property (assign,nonatomic,__weak) id<MNJoinableGroupPendingApprovalsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 forViewModel:(id)arg2 ;
-(MNProfileImageView *)profileImageView;
-(void)_layoutSeparators;
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 avatarImageDecoration:(id)arg3 ;
-(void)configureForPendingApprovalsCellViewModel:(id)arg1 ;
-(void)configureForIndexPath:(id)arg1 totalRowsInSection:(long long)arg2 ;
-(void)setDisableActionButtons:(BOOL)arg1 ;
-(void)didTapAcceptRequestButton;
-(void)didTapIgnoreRequestButton;
-(void)_layoutProfileImage;
-(BOOL)disableActionButtons;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNJoinableGroupPendingApprovalsCellDelegate>)arg1 ;
-(id<MNJoinableGroupPendingApprovalsCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)_layoutLabels;
-(void)_layoutButtons;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
@end
