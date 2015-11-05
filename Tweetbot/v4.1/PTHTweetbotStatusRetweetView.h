/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusSubview.h>

@class UIImageView, UILabel, PTHTweetbotAvatarView;

@interface PTHTweetbotStatusRetweetView : PTHTweetbotStatusSubview {

	UIImageView* _imageView;
	UILabel* _label;
	PTHTweetbotAvatarView* _avatarView;

}

@property (nonatomic,readonly) CGRect avatarFrame; 
+(void)initialize;
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(CGRect)avatarFrame;
-(void)_updateColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)update;
-(void)setStatus:(id)arg1 ;
@end

