/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class UILabel, PTHHitInsetButton, PTHTweetbotPlace;

@interface PTHTweetbotGeoCell : PTHTweetbotCell {

	UILabel* _nameLabel;
	UILabel* _addressLabel;
	PTHHitInsetButton* _locationButton;

}

@property (nonatomic,readonly) PTHTweetbotPlace * place; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(void)initialize;
-(void)colorThemeDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(id)arg1 ;
-(PTHTweetbotPlace *)place;
@end

