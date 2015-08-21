/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class UILabel, UIImageView, TFNTwitterSULCategory, NSMutableArray;

@interface T1SULCell : TFNTableViewCell {

	UILabel* _nameLabel;
	UILabel* _countLabel;
	UIImageView* _chevronImageView;
	TFNTwitterSULCategory* _category;
	NSMutableArray* _avatarImageViews;

}

@property (nonatomic,retain) TFNTwitterSULCategory * category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSMutableArray * avatarImageViews;              //@synthesize avatarImageViews=_avatarImageViews - In the implementation block
+(double)heightWithLayoutMetrics:(id)arg1 ;
+(double)height;
-(id)calculatedLayoutMetrics;
-(void)_userDidUpdate;
-(void)_removeObservers;
-(void)_updateCategoryLabels;
-(void)_categoryDidUpdate;
-(void)_legacyLayoutSubviews;
-(long long)_numberOfAvatarsAvailableWithinWidth:(double)arg1 forAvatarWidth:(double)arg2 avatarMargin:(double)arg3 ;
-(NSMutableArray *)avatarImageViews;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCategory:(TFNTwitterSULCategory *)arg1 ;
-(TFNTwitterSULCategory *)category;
-(void)cleanup;
@end

