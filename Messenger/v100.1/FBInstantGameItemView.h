/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBInstantGameItemViewDelegate;
@class FBInstantGameListUIMetrics, FBInstantGameProfileImageView, FBInstantGameListGameItemLabelView, UIButton, FBUserSession, FBInstantGameListGameItem, UIColor;

@interface FBInstantGameItemView : UIView {

	FBInstantGameListUIMetrics* _metrics;
	FBInstantGameProfileImageView* _profileImageView;
	FBInstantGameListGameItemLabelView* _gameItemLabelView;
	UIButton* _playButton;
	FBUserSession* _session;
	double _gameItemHorizontalPadding;
	double _gameItemProfileImageSize;
	id<FBInstantGameItemViewDelegate> _delegate;
	FBInstantGameListGameItem* _gameItem;
	UIColor* _playButtonColor;

}

@property (assign,nonatomic,__weak) id<FBInstantGameItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBInstantGameListGameItem * gameItem;                             //@synthesize gameItem=_gameItem - In the implementation block
@property (nonatomic,retain) UIColor * playButtonColor;                                      //@synthesize playButtonColor=_playButtonColor - In the implementation block
-(id)initWithSession:(id)arg1 customLayoutSpec:(id)arg2 ;
-(FBInstantGameListGameItem *)gameItem;
-(void)setGameItem:(FBInstantGameListGameItem *)arg1 ;
-(void)_gameItemViewDidTapPlayButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInstantGameItemViewDelegate>)arg1 ;
-(id<FBInstantGameItemViewDelegate>)delegate;
-(UIColor *)playButtonColor;
-(void)setPlayButtonColor:(UIColor *)arg1 ;
@end
