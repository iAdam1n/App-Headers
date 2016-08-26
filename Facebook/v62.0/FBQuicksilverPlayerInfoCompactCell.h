/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBQuicksilverPlayerInfoCell.h>

@protocol FBQuicksilverPlayerInfoCompactCellDelegate;
@class UILabel, FBQuicksilverPlayerInfoView, UIButton;

@interface FBQuicksilverPlayerInfoCompactCell : FBQuicksilverPlayerInfoCell {

	UILabel* _rankingLabel;
	FBQuicksilverPlayerInfoView* _playerInfoView;
	UIButton* _playButton;
	BOOL _shouldShowRanking;
	BOOL _shouldShowPlayButton;
	id<FBQuicksilverPlayerInfoCompactCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverPlayerInfoCompactCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPlayerProfileImage:(id)arg1 ;
-(void)_didTapPlayButton;
-(void)setDelegate:(id<FBQuicksilverPlayerInfoCompactCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBQuicksilverPlayerInfoCompactCellDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end
