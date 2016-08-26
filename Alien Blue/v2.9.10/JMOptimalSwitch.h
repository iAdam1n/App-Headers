/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@protocol JMOptimalSwitchDelegate;
@class NSObject, NSString, UIImageView;

@interface JMOptimalSwitch : UIView {

	BOOL _switchValue;
	NSObject*<JMOptimalSwitchDelegate> _delegate;
	NSString* _contentIconName;
	UIImageView* _trackView;
	UIImageView* _buttonView;
	CGPoint _initialTouchLocation;

}

@property (__weak) NSObject*<JMOptimalSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL switchValue;                                         //@synthesize switchValue=_switchValue - In the implementation block
@property (copy) NSString * contentIconName;                                 //@synthesize contentIconName=_contentIconName - In the implementation block
@property (retain) UIImageView * trackView;                                  //@synthesize trackView=_trackView - In the implementation block
@property (retain) UIImageView * buttonView;                                 //@synthesize buttonView=_buttonView - In the implementation block
@property (assign) CGPoint initialTouchLocation;                             //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
-(void)applyThemeSettings;
-(void)didPan:(id)arg1 ;
-(void)didTap:(id)arg1 ;
-(void)setTrackView:(UIImageView *)arg1 ;
-(UIImageView *)trackView;
-(void)applyGestureRecognizers;
-(BOOL)switchValue;
-(void)setSwitchPositionToOffsetRatio:(double)arg1 ;
-(void)snapToPosition;
-(void)setSwitchOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentIconName:(NSString *)arg1 ;
-(id)createTrackView;
-(id)createButtonView;
-(void)setSwitchValue:(BOOL)arg1 ;
-(void)notifyForSwitchChange;
-(void)i_animateChangeSwitchToValue:(BOOL)arg1 ;
-(void)layoutViewsPannedToPoint:(CGPoint)arg1 ;
-(NSString *)contentIconName;
-(id)initWithContentIconName:(id)arg1 ;
-(void)setDelegate:(NSObject*<JMOptimalSwitchDelegate>)arg1 ;
-(NSObject*<JMOptimalSwitchDelegate>)delegate;
-(UIImageView *)buttonView;
-(void)setButtonView:(UIImageView *)arg1 ;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
@end
