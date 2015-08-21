/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, UIImageView, UILabel, NSString;

@interface T1LegacyAccountSummaryView : UIView <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	UIImageView* _avatarView;
	UIImageView* _avatarBorderView;
	UILabel* _fullNameLabel;
	UILabel* _usernameLabel;
	UIImageView* _badgeView;

}

@property (nonatomic,readonly) UIImageView * avatarView;                    //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarBorderView;              //@synthesize avatarBorderView=_avatarBorderView - In the implementation block
@property (nonatomic,readonly) UILabel * fullNameLabel;                     //@synthesize fullNameLabel=_fullNameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                     //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * badgeView;                     //@synthesize badgeView=_badgeView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                   //@synthesize account=_account - In the implementation block
+(id)_avatarBorderImage;
-(void)_userDidUpdate;
-(void)_avatarDidUpdate;
-(UILabel *)usernameLabel;
-(UILabel *)fullNameLabel;
-(UIImageView *)avatarView;
-(UIImageView *)avatarBorderView;
-(double)_layoutView:(id)arg1 offsetX:(double)arg2 y:(double)arg3 ;
-(void)_layoutAvatarBorderView;
-(double)_badgeViewAdjustX;
-(void)_layoutBadgeView;
-(void)_accountDidUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(UIImageView *)badgeView;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

