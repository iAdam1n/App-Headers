/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, TGModernButton, NSTimer;

@interface TGLoginResetAccountControllerView : UIView {

	UIView* _grayBackground;
	UIView* _grayBackgroundSeparator;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	UILabel* _counterTitleLabel;
	UILabel* _counterLabel;
	TGModernButton* _resetButton;
	double _protectedUntilDate;
	int _timerSeconds;
	NSTimer* _timer;
	/*^block*/id _resetAccount;

}

@property (nonatomic,copy) id resetAccount;              //@synthesize resetAccount=_resetAccount - In the implementation block
-(void)setProtectedUntilDate:(double)arg1 ;
-(id)resetAccount;
-(void)setResetAccount:(id)arg1 ;
-(void)resetPressed;
-(id)stringForTimerWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateTimer;
-(void)setPhoneNumber:(id)arg1 ;
@end
