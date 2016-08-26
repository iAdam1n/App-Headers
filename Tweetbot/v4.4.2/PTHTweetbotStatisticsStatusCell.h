/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UITableViewCell.h>

@class PTHTweetbotStatisticsStatusView, UIViewController, PTHTweetbotStatus;

@interface PTHTweetbotStatisticsStatusCell : UITableViewCell {

	PTHTweetbotStatisticsStatusView* _statusView;

}

@property (assign,nonatomic,__weak) UIViewController * viewController; 
@property (nonatomic,retain) PTHTweetbotStatus * status; 
@property (assign,nonatomic) unsigned long long maximumFavorites; 
@property (assign,nonatomic) unsigned long long maximumRetweets; 
@property (assign,nonatomic) unsigned long long topSeparatorStyle; 
+(double)cellHeightWithStatus:(id)arg1 forTableView:(id)arg2 ;
-(void)setMaximumFavorites:(unsigned long long)arg1 ;
-(unsigned long long)maximumFavorites;
-(void)setMaximumRetweets:(unsigned long long)arg1 ;
-(unsigned long long)maximumRetweets;
-(void)setTopSeparatorStyle:(unsigned long long)arg1 ;
-(unsigned long long)topSeparatorStyle;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
@end
