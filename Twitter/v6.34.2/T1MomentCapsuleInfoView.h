/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1MomentCapsuleInfoViewDelegate, T1MomentCapsuleInfoViewLayoutDelegate;
@class UILabel, UIImageView, TFNGradientView, TFNButton, TFNTwitterMomentCapsule, T1MomentCapsuleInfoViewTheme, CALayer;

@interface T1MomentCapsuleInfoView : UIView {

	BOOL _updated;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _detailLabel;
	UIImageView* _liveBadgeView;
	UIImageView* _thumbnailImageView;
	TFNGradientView* _gradientView;
	TFNButton* _followButton;
	TFNTwitterMomentCapsule* _momentCapsule;
	id<T1MomentCapsuleInfoViewDelegate> _delegate;
	T1MomentCapsuleInfoViewTheme* _theme;
	id<T1MomentCapsuleInfoViewLayoutDelegate> _layoutDelegate;
	CALayer* _updatedDotLayer;
	CALayer* _thumbnailMaskLayer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                                        //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * liveBadgeView;                                                  //@synthesize liveBadgeView=_liveBadgeView - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailImageView;                                             //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) TFNGradientView * gradientView;                                               //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) TFNButton * followButton;                                                     //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentCapsule * momentCapsule;                                      //@synthesize momentCapsule=_momentCapsule - In the implementation block
@property (assign,nonatomic,__weak) id<T1MomentCapsuleInfoViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleInfoViewTheme * theme;                                         //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic,__weak) id<T1MomentCapsuleInfoViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                                //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) CALayer * updatedDotLayer;                                                    //@synthesize updatedDotLayer=_updatedDotLayer - In the implementation block
@property (nonatomic,retain) CALayer * thumbnailMaskLayer;                                                 //@synthesize thumbnailMaskLayer=_thumbnailMaskLayer - In the implementation block
+(id)followButtonTitleWithDuration:(id)arg1 live:(BOOL)arg2 ;
+(id)followButtonImageNameWithLive:(BOOL)arg1 ;
+(CGSize)thumbnailImageSize;
-(TFNTwitterMomentCapsule *)momentCapsule;
-(TFNButton *)followButton;
-(UIImageView *)liveBadgeView;
-(id)initWithFrame:(CGRect)arg1 theme:(id)arg2 layoutDelegate:(id)arg3 ;
-(void)setMomentCapsule:(TFNTwitterMomentCapsule *)arg1 ;
-(void)_didTapFollow:(id)arg1 ;
-(CALayer *)thumbnailMaskLayer;
-(void)setThumbnailMaskLayer:(CALayer *)arg1 ;
-(void)_maskThumbnailViewIfNeeded;
-(CALayer *)updatedDotLayer;
-(void)setLiveBadgeView:(UIImageView *)arg1 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setFollowButton:(TFNButton *)arg1 ;
-(void)setUpdatedDotLayer:(CALayer *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1MomentCapsuleInfoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<T1MomentCapsuleInfoViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)cleanup;
-(void)setGradientView:(TFNGradientView *)arg1 ;
-(TFNGradientView *)gradientView;
-(void)setUpdated:(BOOL)arg1 ;
-(id<T1MomentCapsuleInfoViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<T1MomentCapsuleInfoViewLayoutDelegate>)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIImageView *)thumbnailImageView;
-(BOOL)isUpdated;
-(T1MomentCapsuleInfoViewTheme *)theme;
-(void)setTheme:(T1MomentCapsuleInfoViewTheme *)arg1 ;
@end

