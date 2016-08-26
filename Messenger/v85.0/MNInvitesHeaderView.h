/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInvitesHeaderViewDelegate;
@class MNHeaderView, FBRichTextView;

@interface MNInvitesHeaderView : UIView {

	MNHeaderView* _headerView;
	FBRichTextView* _subtitleTextView;
	NSRange _inviteLaterStringRange;
	BOOL _shouldShowSkipButton;
	id<MNInvitesHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInvitesHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_attributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setSubtitleText;
-(id)initWithShouldShowSkipButton:(BOOL)arg1 ;
-(void)setDelegate:(id<MNInvitesHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNInvitesHeaderViewDelegate>)delegate;
@end
