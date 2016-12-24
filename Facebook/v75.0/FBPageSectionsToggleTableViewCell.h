/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBPageSectionsToggleTableViewCellDelegate;
@class UIView, UILabel, UIButton, NSString, UISwitch;

@interface FBPageSectionsToggleTableViewCell : UITableViewCell {

	UIView* _separatorView;
	UILabel* _titleLabel;
	UIButton* _infoIcon;
	NSString* _tipText;
	UISwitch* _switchControl;
	id<FBPageSectionsToggleTableViewCellDelegate> _delegate;

}

@property (nonatomic,retain) UISwitch * switchControl;                                                   //@synthesize switchControl=_switchControl - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageSectionsToggleTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTipText:(id)arg1 ;
-(void)_didTapInfoIcon:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPageSectionsToggleTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id<FBPageSectionsToggleTableViewCellDelegate>)delegate;
-(UISwitch *)switchControl;
-(void)setSwitchControl:(UISwitch *)arg1 ;
@end
