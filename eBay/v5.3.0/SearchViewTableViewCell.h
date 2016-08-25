/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ActionCell.h>

@class UIButton, UIImageView;

@interface SearchViewTableViewCell : ActionCell {

	BOOL _buttonState;
	BOOL _wantsButton;
	BOOL _buttonEnabled;
	BOOL _isUnread;
	BOOL _buttonEnabledOnlyWhileEditing;
	UIButton* _button;
	UIImageView* _unreadIndicator;

}

@property (nonatomic,retain) UIButton * button;                               //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImageView * unreadIndicator;                   //@synthesize unreadIndicator=_unreadIndicator - In the implementation block
@property (assign,nonatomic) BOOL buttonState;                                //@synthesize buttonState=_buttonState - In the implementation block
@property (assign,nonatomic) BOOL wantsButton;                                //@synthesize wantsButton=_wantsButton - In the implementation block
@property (assign,nonatomic) BOOL buttonEnabled;                              //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
@property (assign,nonatomic) BOOL isUnread;                                   //@synthesize isUnread=_isUnread - In the implementation block
@property (assign,nonatomic) BOOL buttonEnabledOnlyWhileEditing;              //@synthesize buttonEnabledOnlyWhileEditing=_buttonEnabledOnlyWhileEditing - In the implementation block
-(void)setButtonState:(BOOL)arg1 ;
-(void)toggleButtonState:(id)arg1 ;
-(void)setIsUnread:(BOOL)arg1 ;
-(BOOL)buttonState;
-(BOOL)wantsButton;
-(void)setWantsButton:(BOOL)arg1 ;
-(BOOL)isUnread;
-(BOOL)buttonEnabledOnlyWhileEditing;
-(void)setButtonEnabledOnlyWhileEditing:(BOOL)arg1 ;
-(UIImageView *)unreadIndicator;
-(void)setUnreadIndicator:(UIImageView *)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)setButton:(UIButton *)arg1 ;
-(BOOL)buttonEnabled;
-(void)setButtonEnabled:(BOOL)arg1 ;
@end

