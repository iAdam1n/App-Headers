/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SLKFile, SLKModalButton, UIImageView, UILabel, UIView, CAGradientLayer, NSLayoutConstraint, UITapGestureRecognizer;

@interface SLKModalHeaderView : UIView {

	SLKFile* _file;
	/*^block*/id _avatarTappedBlock;
	/*^block*/id _dismissViewBlock;
	SLKModalButton* _closeButton;
	UIImageView* _avatar;
	UILabel* _usernameLabel;
	UILabel* _timeLabel;
	UILabel* _titleLabel;
	UIView* _headerSeparator;
	CAGradientLayer* _gradientView;
	NSLayoutConstraint* _headerSeparatorHeightConstraint;
	UITapGestureRecognizer* _avatarTapGestureRecognizer;
	unsigned long long _style;

}

@property (nonatomic,retain) SLKFile * file;                                                    //@synthesize file=_file - In the implementation block
@property (nonatomic,copy) id avatarTappedBlock;                                                //@synthesize avatarTappedBlock=_avatarTappedBlock - In the implementation block
@property (nonatomic,copy) id dismissViewBlock;                                                 //@synthesize dismissViewBlock=_dismissViewBlock - In the implementation block
@property (nonatomic,retain) SLKModalButton * closeButton;                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIImageView * avatar;                                              //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                           //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                               //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * headerSeparator;                                          //@synthesize headerSeparator=_headerSeparator - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientView;                                    //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerSeparatorHeightConstraint;              //@synthesize headerSeparatorHeightConstraint=_headerSeparatorHeightConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * avatarTapGestureRecognizer;               //@synthesize avatarTapGestureRecognizer=_avatarTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
-(void)dismissView:(id)arg1 ;
-(void)setAvatarTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)avatarTapGestureRecognizer;
-(UILabel *)usernameLabel;
-(UIView *)headerSeparator;
-(NSLayoutConstraint *)headerSeparatorHeightConstraint;
-(void)setTitle;
-(void)loadUIForBotOwnership;
-(void)loadAvatar;
-(void)setUsername;
-(void)setTime;
-(void)addBackgroundGradient;
-(id)avatarTappedBlock;
-(id)dismissViewBlock;
-(void)setAvatarTappedBlock:(id)arg1 ;
-(void)setDismissViewBlock:(id)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setHeaderSeparator:(UIView *)arg1 ;
-(void)setHeaderSeparatorHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)avatarTapped:(id)arg1 ;
-(void)setCloseButton:(SLKModalButton *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setGradientView:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)gradientView;
-(void)setAvatar:(UIImageView *)arg1 ;
-(UIImageView *)avatar;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
-(SLKModalButton *)closeButton;
-(void)setupView;
@end

