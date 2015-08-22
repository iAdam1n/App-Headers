/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNComposerOverflowTabItemCellDelegate;
@class MNTabBarExtensionIconView, UILabel, UIView, UIImageView, UIButton, MNComposerOverflowTabViewModel;

@interface MNComposerOverflowTabItemCell : UICollectionViewCell {

	MNTabBarExtensionIconView* _iconView;
	UILabel* _label;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIImageView* _arrowImageView;
	UIButton* _installButton;
	UIView* _dotView;
	id<MNComposerOverflowTabItemCellDelegate> _delegate;
	UIView* _previewView;
	MNComposerOverflowTabViewModel* _overflowViewModel;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowTabItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNTabBarExtensionIconView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UIView * previewView;                                                   //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) MNComposerOverflowTabViewModel * overflowViewModel;                       //@synthesize overflowViewModel=_overflowViewModel - In the implementation block
+(double)intrinsicCellHeightWithSubtitle:(BOOL)arg1 hasPreview:(BOOL)arg2 ;
-(void)_updateSubtitle;
-(void)_updateAccessoryType;
-(void)_updateDotView;
-(void)_updateRenderingMode;
-(void)_updateIconColor;
-(void)_updatePreviewView;
-(void)_initSubtitleLabelIfNeeded;
-(void)_installButtonPressed:(id)arg1 ;
-(void)_initDotViewIfNeed;
-(void)_initArrowImageViewIfNeeded;
-(void)_initInstallButtonIfNeed;
-(void)setOverflowViewModel:(MNComposerOverflowTabViewModel *)arg1 ;
-(id)_tabItemCellAccessoryButton;
-(MNComposerOverflowTabViewModel *)overflowViewModel;
-(void)setPreviewView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNComposerOverflowTabItemCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNComposerOverflowTabItemCellDelegate>)delegate;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(MNTabBarExtensionIconView *)iconView;
-(UIView *)previewView;
-(void)_updateTitle;
@end
