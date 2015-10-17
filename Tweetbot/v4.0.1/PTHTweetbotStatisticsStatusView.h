/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusView.h>

@class PTHTweetbotStatisticsStatusTimeView, PTHTweetbotStatisticsStatusBarFavoriteView, PTHTweetbotStatisticsStatusBarRetweetView;

@interface PTHTweetbotStatisticsStatusView : PTHTweetbotStatusView {

	PTHTweetbotStatisticsStatusTimeView* _timeView;
	PTHTweetbotStatisticsStatusBarFavoriteView* _favoritesBarView;
	PTHTweetbotStatisticsStatusBarRetweetView* _retweetsBarView;

}

@property (assign,nonatomic) unsigned long long maximumFavorites; 
@property (assign,nonatomic) unsigned long long maximumRetweets; 
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(void)_updateActivity;
-(void)_updateActivityAnimated;
-(void)setMaximumFavorites:(unsigned long long)arg1 ;
-(unsigned long long)maximumFavorites;
-(void)setMaximumRetweets:(unsigned long long)arg1 ;
-(unsigned long long)maximumRetweets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStatus:(id)arg1 ;
@end
