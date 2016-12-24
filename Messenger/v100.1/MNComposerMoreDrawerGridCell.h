/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNComposerMoreDrawerGridCellDelegate;
@class FBBadgeView, UIImageView, MNTabBarExtensionIconView, FBRichTextView, NSString;

@interface MNComposerMoreDrawerGridCell : UICollectionViewCell {

	FBBadgeView* _badgeView;
	UIImageView* _strokeImageView;
	MNTabBarExtensionIconView* _iconView;
	FBRichTextView* _titleView;
	BOOL _shouldShow;
	id<MNComposerMoreDrawerGridCellDelegate> _delegate;
	NSString* _title;
	long long _badgeCount;

}

@property (assign,nonatomic,__weak) id<MNComposerMoreDrawerGridCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNTabBarExtensionIconView * iconView;                                //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldShow;                                                       //@synthesize shouldShow=_shouldShow - In the implementation block
@property (assign,nonatomic) long long badgeCount;                                                  //@synthesize badgeCount=_badgeCount - In the implementation block
-(void)setIconController:(id)arg1 ;
-(id)iconController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNComposerMoreDrawerGridCellDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<MNComposerMoreDrawerGridCellDelegate>)delegate;
-(NSString *)title;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setShouldShow:(BOOL)arg1 ;
-(BOOL)shouldShow;
-(void)_updateBadgeView;
-(MNTabBarExtensionIconView *)iconView;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end
