/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class TGLetteredAvatarView, UILabel;

@interface TGCommandPanelCell : UITableViewCell {

	TGLetteredAvatarView* _avatarView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}
-(void)setCommandInfo:(id)arg1 user:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
