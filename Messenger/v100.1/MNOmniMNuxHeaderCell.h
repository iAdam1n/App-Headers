/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UIView, MNOmniMNuxHeaderCellViewModel;

@interface MNOmniMNuxHeaderCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIImageView* _profileImageView;
	UIImageView* _coverImageView;
	UIView* _separatorView;
	MNOmniMNuxHeaderCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNOmniMNuxHeaderCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)cellHeightForViewModel:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)setupProfileImage:(id)arg1 ;
-(void)setupCoverImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(MNOmniMNuxHeaderCellViewModel *)viewModel;
-(void)setViewModel:(MNOmniMNuxHeaderCellViewModel *)arg1 ;
@end
