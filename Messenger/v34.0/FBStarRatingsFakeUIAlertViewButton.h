/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBRectangleWithRoundedCornerView, UIButton;

@interface FBStarRatingsFakeUIAlertViewButton : UIView {

	FBRectangleWithRoundedCornerView* _pressedStateRoundedCornerView;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
-(void)showDismissButtonPressedState;
-(void)hideDismissButtonPressedState;
-(id)initWithTitle:(id)arg1 rectCorners:(unsigned long long)arg2 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(void)enable;
-(void)setButton:(UIButton *)arg1 ;
-(void)disable;
@end

