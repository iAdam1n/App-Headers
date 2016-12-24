/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
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
