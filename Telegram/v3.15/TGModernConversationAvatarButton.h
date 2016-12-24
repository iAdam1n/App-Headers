/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
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
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
@end
