/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TGCircularProgressView : UIView {

	float _progress;
	UIColor* _progressColor;

}

@property (assign,nonatomic) float progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;              //@synthesize progressColor=_progressColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
@end
