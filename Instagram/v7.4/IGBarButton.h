/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGBarButton : UIView {

	long long _style;
	UIButton* _mainButton;
	CGSize _touchTargetInflation;

}

@property (nonatomic,readonly) long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIButton * mainButton;                    //@synthesize mainButton=_mainButton - In the implementation block
@property (assign,nonatomic) CGSize touchTargetInflation;              //@synthesize touchTargetInflation=_touchTargetInflation - In the implementation block
+(id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)barButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(long long)arg4 ;
+(id)loadingBarButtonItemWithStyle:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(long long)arg4 image:(id)arg5 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(long long)arg4 ;
-(void)setMainButton:(UIButton *)arg1 ;
-(id)initButtonWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 accessibilityLabel:(id)arg5 ;
-(UIButton *)mainButton;
-(CGSize)touchTargetInflation;
-(void)setTouchTargetInflation:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)style;
-(BOOL)enabled;
@end

