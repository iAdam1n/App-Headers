/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIButton;

@interface CustomInterstitialView : UIView {

	UIImageView* _interstitialImageView;
	UIButton* _interstitialButton;
	UIButton* _closeButton;

}

@property (nonatomic,retain) UIImageView * interstitialImageView;              //@synthesize interstitialImageView=_interstitialImageView - In the implementation block
@property (nonatomic,retain) UIButton * interstitialButton;                    //@synthesize interstitialButton=_interstitialButton - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                           //@synthesize closeButton=_closeButton - In the implementation block
-(UIImageView *)interstitialImageView;
-(void)setInterstitialImageView:(UIImageView *)arg1 ;
-(UIButton *)interstitialButton;
-(void)setInterstitialButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end

