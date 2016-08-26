/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIActivityIndicatorView;

@interface Slack.SLKUserOnCallCollectionViewCell : UICollectionViewCell {

	 imageView;
	 activityIndicatorView;
	 isCurrentActiveSpeaker;
	 isJoiningCall;
	 isMuted;
	 muteImageView;

}

@property (assign,__weak,nonatomic) UIImageView * imageView; 
@property (assign,__weak,nonatomic) UIActivityIndicatorView * activityIndicatorView; 
@property (assign,__weak,nonatomic) UIImageView * muteImageView; 
-(UIImageView *)muteImageView;
-(void)setMuteImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
@end
