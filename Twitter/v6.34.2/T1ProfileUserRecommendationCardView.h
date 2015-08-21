/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Twitter/TFNTwitterFollowControlDelegate.h>

@class UIImageView, UILabel, TFNTwitterFollowControl, UIView, NSString;

@interface T1ProfileUserRecommendationCardView : UICollectionViewCell <TFNTwitterFollowControlDelegate> {

	BOOL _showAvatar;
	UIImageView* _bannerImageView;
	UIImageView* _avatarImageView;
	UILabel* _fullNameLabel;
	UILabel* _usernameLabel;
	UILabel* _bioLabel;
	TFNTwitterFollowControl* _followControl;
	unsigned long long _badgeType;
	unsigned long long _promotedContentType;
	UIView* _avatarBorderView;
	UIImageView* _badgeImageView;
	UIImageView* _promotedBadgeImageView;
	UILabel* _promotedContentLabel;

}

@property (nonatomic,readonly) UIImageView * bannerImageView;                        //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarImageView;                        //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,readonly) UILabel * fullNameLabel;                              //@synthesize fullNameLabel=_fullNameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bioLabel;                                   //@synthesize bioLabel=_bioLabel - In the implementation block
@property (nonatomic,readonly) TFNTwitterFollowControl * followControl;              //@synthesize followControl=_followControl - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                           //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) unsigned long long promotedContentType;                 //@synthesize promotedContentType=_promotedContentType - In the implementation block
@property (nonatomic,readonly) BOOL showAvatar;                                      //@synthesize showAvatar=_showAvatar - In the implementation block
@property (nonatomic,readonly) UIView * avatarBorderView;                            //@synthesize avatarBorderView=_avatarBorderView - In the implementation block
@property (nonatomic,readonly) UIImageView * badgeImageView;                         //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * promotedBadgeImageView;                 //@synthesize promotedBadgeImageView=_promotedBadgeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * promotedContentLabel;                       //@synthesize promotedContentLabel=_promotedContentLabel - In the implementation block
@property (nonatomic,readonly) double fullNameOffsetX; 
@property (nonatomic,readonly) double userNameOffsetX; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForUser:(id)arg1 withWidth:(double)arg2 promotedContentType:(unsigned long long)arg3 ;
-(UILabel *)usernameLabel;
-(UILabel *)fullNameLabel;
-(UIView *)avatarBorderView;
-(id)initWithFrame:(CGRect)arg1 showAvatar:(BOOL)arg2 ;
-(TFNTwitterFollowControl *)followControl;
-(UILabel *)bioLabel;
-(UIImageView *)avatarImageView;
-(void)followControlNeedsLayout:(id)arg1 ;
-(UIImageView *)promotedBadgeImageView;
-(double)fullNameOffsetX;
-(double)userNameOffsetX;
-(void)setPromotedContentType:(unsigned long long)arg1 ;
-(unsigned long long)promotedContentType;
-(BOOL)showAvatar;
-(UILabel *)promotedContentLabel;
-(unsigned long long)badgeType;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(UIImageView *)badgeImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIImageView *)bannerImageView;
@end

