/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UIView, TGChatActionsInfoView, TGChatActionsContainerView;

@interface TGChatActionsView : UIView {

	UIVisualEffectView* _blurView;
	UIView* _dimView;
	UIView* _rootView;
	UIView* _avatarSnapshotView;
	TGChatActionsInfoView* _infoView;
	TGChatActionsContainerView* _containerView;

}
-(id)initWithAvatarSnapshotView:(id)arg1 ;
-(void)initializeAppearWithRect:(CGRect)arg1 ;
-(void)commitTransition;
-(void)layoutSubviews;
-(void)setTransitionProgress:(double)arg1 ;
-(void)test:(id)arg1 ;
@end
