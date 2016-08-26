/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibView.h>

@class UIView, UILabel, UIButton, UIImageView, S8FBProfilePictureView;

@interface LevelLeaderItemView : XibView {

	UIView* fbRewardView;
	UILabel* fbRewardAmount;
	UIButton* fbLoginButton;
	UIImageView* profileBgImage;
	UILabel* fbRewardLabel;
	UIImageView* trophyImage;
	S8FBProfilePictureView* profilePicture;
	UILabel* rankLabel;
	UILabel* nameLabel;
	UILabel* scoreLabel;

}

@property (nonatomic,retain) UIImageView * trophyImage; 
@property (nonatomic,retain) S8FBProfilePictureView * profilePicture; 
@property (nonatomic,retain) UILabel * rankLabel; 
@property (nonatomic,retain) UILabel * nameLabel; 
@property (nonatomic,retain) UILabel * scoreLabel; 
-(void)setScoreLabel:(UILabel *)arg1 ;
-(UILabel *)scoreLabel;
-(void)pressedFbLogin;
-(S8FBProfilePictureView *)profilePicture;
-(UIImageView *)trophyImage;
-(void)setTrophyImage:(UIImageView *)arg1 ;
-(UILabel *)rankLabel;
-(void)setupFbRewardView:(int)arg1 ;
-(void)setupFirstRankBg:(BOOL)arg1 ;
-(void)setProfilePicture:(S8FBProfilePictureView *)arg1 ;
-(void)setRankLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end
