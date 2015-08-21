/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNChatRequestActionViewDelegate;
@class UIButton, UIView, UIToolbar;

@interface MNChatRequestActionView : UIView {

	UIButton* _declineButton;
	UIButton* _replyButton;
	UIView* _separatorView;
	UIToolbar* _toolbar;
	id<MNChatRequestActionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNChatRequestActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideReplyButton; 
-(void)_initToolbar;
-(void)_initSeperatorView;
-(void)_initDeclineButtonWithTitle:(id)arg1 ;
-(void)_initReplyButton;
-(BOOL)shouldHideReplyButton;
-(void)_declinePressed:(id)arg1 ;
-(void)_replyPressed:(id)arg1 ;
-(id)initWithActionExperimentContext:(id)arg1 ;
-(void)setShouldHideReplyButton:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNChatRequestActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNChatRequestActionViewDelegate>)delegate;
@end

