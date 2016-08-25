/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAShapeView.h>

@class UIColor;

@interface WACircularActivityView : WAShapeView {

	BOOL _animating;
	BOOL _hidesWhenStopped;
	UIColor* _color;

}

@property (assign,nonatomic) double barWidth; 
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign) BOOL hidesWhenStopped;                  //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)tintColorDidChange;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(void)updateVisibility;
-(void)setBarWidth:(double)arg1 ;
-(double)barWidth;
@end

