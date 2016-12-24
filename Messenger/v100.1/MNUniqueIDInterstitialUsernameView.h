/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNUniqueIDInterstitialUsernameViewDelegate;
@class UILabel, UIButton;

@interface MNUniqueIDInterstitialUsernameView : UIView {

	UILabel* _usernameLabel;
	UIButton* _editButton;
	id<MNUniqueIDInterstitialUsernameViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNUniqueIDInterstitialUsernameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_editButtonTapped;
-(id)initWithUsername:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNUniqueIDInterstitialUsernameViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNUniqueIDInterstitialUsernameViewDelegate>)delegate;
@end
