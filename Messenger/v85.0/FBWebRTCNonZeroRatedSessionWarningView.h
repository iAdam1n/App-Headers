/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface FBWebRTCNonZeroRatedSessionWarningView : UIView {

	BOOL _videoTheme;
	UILabel* _nonZeroRatingTitle;
	UILabel* _nonZeroRatingBody;

}

@property (nonatomic,retain) UILabel * nonZeroRatingTitle;                     //@synthesize nonZeroRatingTitle=_nonZeroRatingTitle - In the implementation block
@property (nonatomic,retain) UILabel * nonZeroRatingBody;                      //@synthesize nonZeroRatingBody=_nonZeroRatingBody - In the implementation block
@property (assign,getter=isVideoTheme,nonatomic) BOOL videoTheme;              //@synthesize videoTheme=_videoTheme - In the implementation block
-(BOOL)isVideoTheme;
-(void)_updateColorsToTheme;
-(UILabel *)nonZeroRatingTitle;
-(void)setNonZeroRatingTitle:(UILabel *)arg1 ;
-(UILabel *)nonZeroRatingBody;
-(void)setNonZeroRatingBody:(UILabel *)arg1 ;
-(void)setVideoTheme:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
