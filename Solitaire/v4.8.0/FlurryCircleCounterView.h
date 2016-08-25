/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIFont, NSString;

@interface FlurryCircleCounterView : UIView {

	float mCircleTimeInterval;
	UIColor* mNumberColor;
	UIFont* mNumberFont;
	UIColor* mCircleColor;
	double mCircleBorderWidth;
	float mTimeInSeconds;
	NSString* mTimeFormatString;
	int _circleTotalSegs;
	int _circleSegs;
	BOOL mCircleIncre;

}

@property (assign,nonatomic) BOOL circleIncre; 
@property (nonatomic,retain) UIColor * numberColor; 
@property (nonatomic,retain) UIFont * numberFont; 
@property (nonatomic,retain) UIColor * circleColor; 
@property (assign,nonatomic) double circleBorderWidth; 
@property (assign,nonatomic) float circleTimeInterval; 
@property (nonatomic,retain) NSString * timeFormatString; 
-(void)setCircleBorderWidth:(double)arg1 ;
-(double)circleBorderWidth;
-(BOOL)circleIncre;
-(UIColor *)circleColor;
-(NSString *)timeFormatString;
-(UIFont *)numberFont;
-(void)setNumberColor:(UIColor *)arg1 ;
-(void)setCircleColor:(UIColor *)arg1 ;
-(void)setCircleTimeInterval:(float)arg1 ;
-(void)setNumberFont:(UIFont *)arg1 ;
-(void)setTimeFormatString:(NSString *)arg1 ;
-(void)setCircleIncre:(BOOL)arg1 ;
-(void)update:(BOOL)arg1 withEnd:(BOOL)arg2 ;
-(void)upgradeGraphics:(float)arg1 withDuration:(int)arg2 ;
-(UIColor *)numberColor;
-(float)circleTimeInterval;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setup;
@end

