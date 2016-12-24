/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusView.h>

@class PTHTweetbotTimeDifferenceLabel, PTHTweetbotStatisticsStatusBarFavoriteView, PTHTweetbotStatisticsStatusBarRetweetView;

@interface PTHTweetbotStatisticsStatusView : PTHTweetbotStatusView {

	PTHTweetbotTimeDifferenceLabel* _timeLabel;
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
