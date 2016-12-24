/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSettingsCell.h>

@protocol NSCopying, MNPaymentsSettingsThreadProtectionCellDelegate;
@class MNCDNProfileImageDownloader, UIImageView, FBRichTextView, UISwitch, MNPaymentsSettingsThreadProtectionCellViewModel;

@interface MNPaymentsSettingsThreadProtectionCell : FBPaymentsSettingsCell {

	MNCDNProfileImageDownloader* _profileImageDownloader;
	UIImageView* _profilePictureMaskView;
	UIImageView* _profilePictureImageView;
	FBRichTextView* _nameTextView;
	UISwitch* _switch;
	id<NSCopying> _loadToken;
	id<MNPaymentsSettingsThreadProtectionCellDelegate> _delegate;
	MNPaymentsSettingsThreadProtectionCellViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNPaymentsSettingsThreadProtectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNPaymentsSettingsThreadProtectionCellViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightForViewModel:(id)arg1 constrainedToWidth:(double)arg2 ;
-(void)_onSwitch:(id)arg1 ;
-(void)_loadProfileImage;
-(void)_updateProfileImageWithImage:(id)arg1 error:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 profileImageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNPaymentsSettingsThreadProtectionCellDelegate>)arg1 ;
-(id<MNPaymentsSettingsThreadProtectionCellDelegate>)delegate;
-(void)prepareForReuse;
-(MNPaymentsSettingsThreadProtectionCellViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsSettingsThreadProtectionCellViewModel *)arg1 ;
@end
