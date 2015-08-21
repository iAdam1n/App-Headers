/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNGroupItemViewDelegate;
@class UIImageView, UILabel, UIFont, UIView, UIButton, MNGroupItem, MNProfileImageView;

@interface MNGroupItemView : UIView {

	UIImageView* _backgroundImageView;
	UIImageView* _groupImageMaskView;
	UILabel* _groupNameLabel;
	UILabel* _groupTimeLabel;
	UILabel* _groupMembersLabel;
	UIFont* _groupMembersLabelFont;
	UIView* _groupMembersBackgroundView;
	UIButton* _actionButton;
	BOOL _isDragging;
	MNGroupItem* _groupItem;
	id<MNGroupItemViewDelegate> _delegate;
	MNProfileImageView* _groupImageView;

}

@property (nonatomic,retain) MNGroupItem * groupItem;                                  //@synthesize groupItem=_groupItem - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                                          //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * groupImageView;                    //@synthesize groupImageView=_groupImageView - In the implementation block
-(void)_actionPressed:(id)arg1 ;
-(MNGroupItem *)groupItem;
-(void)setGroupItem:(MNGroupItem *)arg1 ;
-(MNProfileImageView *)groupImageView;
-(void)setIsDragging:(BOOL)arg1 ;
-(CGSize)membersLabelContraintSize;
-(id)membersLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isDragging;
-(id<MNGroupItemViewDelegate>)delegate;
-(id)_actionButton;
@end

