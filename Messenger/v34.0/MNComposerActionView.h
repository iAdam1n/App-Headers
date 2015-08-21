/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNComposerActionViewDelegate;
@class MNComposerLikeButton, UIButton;

@interface MNComposerActionView : UIView {

	MNComposerLikeButton* _likeButton;
	UIButton* _sendButton;
	UIButton* _hashtagButton;
	id<MNComposerActionViewDelegate> _delegate;
	double _buttonImageXOffset;
	double _buttonImageYOffset;
	long long _actionButtonOption;

}

@property (assign,nonatomic,__weak) id<MNComposerActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNComposerLikeButton * likeButton;                           //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                       //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,readonly) UIButton * hashtagButton;                                    //@synthesize hashtagButton=_hashtagButton - In the implementation block
@property (assign,nonatomic) double buttonImageXOffset;                                     //@synthesize buttonImageXOffset=_buttonImageXOffset - In the implementation block
@property (assign,nonatomic) double buttonImageYOffset;                                     //@synthesize buttonImageYOffset=_buttonImageYOffset - In the implementation block
@property (assign,nonatomic) long long actionButtonOption;                                  //@synthesize actionButtonOption=_actionButtonOption - In the implementation block
-(void)_sendPressed:(id)arg1 ;
-(void)_initSendButton;
-(void)_initLikeButton;
-(void)_initHashtagButton;
-(void)_setActionButtonOption:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_hashtagPressed:(id)arg1 ;
-(void)_animateActionButtonsWithOption:(long long)arg1 ;
-(void)setButtonImageXOffset:(double)arg1 ;
-(void)setButtonImageYOffset:(double)arg1 ;
-(void)setActionButtonOption:(long long)arg1 ;
-(double)buttonImageXOffset;
-(double)buttonImageYOffset;
-(MNComposerLikeButton *)likeButton;
-(UIButton *)hashtagButton;
-(void)setActionButtonOption:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)actionButtonOption;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNComposerActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNComposerActionViewDelegate>)delegate;
-(UIButton *)sendButton;
@end

