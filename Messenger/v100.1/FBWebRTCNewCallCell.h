/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBWebRTCNewCallCellDelegate;
@class FBWebRTCCallButtonImageProvider, UILabel, UIView, FBWebRTCCallButton, UIButton;

@interface FBWebRTCNewCallCell : UITableViewCell {

	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	UILabel* _titleLabel;
	UIView* _buttonsContainer;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	UIButton* _groupCallButton;
	UIButton* _scheduleCallButton;
	id<FBWebRTCNewCallCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCNewCallCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 callButtonImageProvider:(id)arg2 directVideoCallingEnabled:(BOOL)arg3 groupCallingEnabled:(BOOL)arg4 scheduleCallEnabled:(BOOL)arg5 ;
-(void)_audioButtonClick;
-(void)_videoButtonClick;
-(void)_groupCallButtonClick;
-(void)_scheduleCallButtonClick;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBWebRTCNewCallCellDelegate>)arg1 ;
-(id<FBWebRTCNewCallCellDelegate>)delegate;
-(void)_layoutButtons;
@end
