/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
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

