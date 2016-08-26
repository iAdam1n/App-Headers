/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIButton.h>

@class NSString, TGLetteredAvatarView, UIImageView, UIImage;

@interface TGModernConversationAvatarButton : UIButton {

	long long _orientation;
	NSString* _avatarUrl;
	TGLetteredAvatarView* _avatarView;
	UIImageView* _iconView;
	long long _avatarConversationId;
	NSString* _avatarTitle;
	NSString* _avatarFirstName;
	NSString* _avatarLastName;
	UIImage* _avatarIcon;
	double _horizontalOffset;

}
-(void)setAvatarUrl:(id)arg1 ;
-(void)setAvatarConversationId:(long long)arg1 ;
-(void)setAvatarTitle:(id)arg1 ;
-(void)setAvatarIcon:(id)arg1 ;
-(void)setAvatarFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
@end
