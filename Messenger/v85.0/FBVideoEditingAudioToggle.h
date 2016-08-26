/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIButton;

@interface FBVideoEditingAudioToggle : UIControl {

	UIView* _backgroundView;
	UIButton* _button;

}

@property (nonatomic,retain) UIView * backgroundView;                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * button;                      //@synthesize button=_button - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
+(id)videoEditingAudioToggle;
-(void)_setupButton;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setButton:(UIButton *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)_setupBackground;
@end
