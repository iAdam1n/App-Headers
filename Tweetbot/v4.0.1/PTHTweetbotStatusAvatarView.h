/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusSubview.h>

@class PTHTweetbotAvatarView, UIImageView;

@interface PTHTweetbotStatusAvatarView : PTHTweetbotStatusSubview {

	PTHTweetbotAvatarView* _avatarView;
	UIImageView* _badgeView;

}
+(void)initialize;
-(void)colorAppearanceDidChange;
-(void)_updateBadges;
-(void)_updateColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 ;
@end
