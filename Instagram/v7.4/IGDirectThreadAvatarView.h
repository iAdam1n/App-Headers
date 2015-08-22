/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, IGProfilePictureImageView, UIView;

@interface IGDirectThreadAvatarView : UIView {

	BOOL _selected;
	NSArray* _users;
	long long _borderStyle;
	IGProfilePictureImageView* _frontProfileView;
	IGProfilePictureImageView* _backProfileView;
	UIView* _singleBlueRing;
	UIView* _doubleBlueRing;

}

@property (nonatomic,retain) NSArray * users;                                           //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) BOOL selected;                                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) long long borderStyle;                                     //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * frontProfileView;              //@synthesize frontProfileView=_frontProfileView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * backProfileView;               //@synthesize backProfileView=_backProfileView - In the implementation block
@property (nonatomic,retain) UIView * singleBlueRing;                                   //@synthesize singleBlueRing=_singleBlueRing - In the implementation block
@property (nonatomic,retain) UIView * doubleBlueRing;                                   //@synthesize doubleBlueRing=_doubleBlueRing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 andBorderStyle:(long long)arg2 ;
-(IGProfilePictureImageView *)backProfileView;
-(IGProfilePictureImageView *)frontProfileView;
-(UIView *)singleBlueRing;
-(UIView *)doubleBlueRing;
-(CGRect)stackedFrontUserFrame;
-(CGRect)stackedBackUserFrame;
-(CGRect)singleUserFrame;
-(double)overlapDistance;
-(void)setFrontProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setBackProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setSingleBlueRing:(UIView *)arg1 ;
-(void)setDoubleBlueRing:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBorderStyle:(long long)arg1 ;
-(BOOL)selected;
-(long long)borderStyle;
-(double)pictureDiameter;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end
