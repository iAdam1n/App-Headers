/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class PTHTweetbotAvatarView, UIImageView, PTHButton, UIFont, UILabel;

@interface PTHTweetbotUserCell : PTHTweetbotCell {

	PTHTweetbotAvatarView* _avatarView;
	UIImageView* _badgeView;
	PTHButton* _button;
	BOOL _showsActionControl;
	UIFont* _screenNameFont;
	UILabel* _nameLabel;
	UILabel* _countLabel;

}

@property (assign,nonatomic) BOOL showsActionControl;                //@synthesize showsActionControl=_showsActionControl - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                 //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,readonly) UIFont * screenNameFont;              //@synthesize screenNameFont=_screenNameFont - In the implementation block
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(double)separatorOffset;
+(void)initialize;
+(double)textHeight;
-(UILabel *)countLabel;
-(void)setShowsActionControl:(BOOL)arg1 ;
-(void)_showActions:(id)arg1 ;
-(UIFont *)screenNameFont;
-(BOOL)showsActionControl;
-(void)colorThemeDidChange;
-(void)_contentSizeDidChange;
-(UILabel *)nameLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(id)arg1 ;
-(void)_updateText;
@end

