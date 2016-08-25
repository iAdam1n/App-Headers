/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface WAGrabHandleView : UIView {

	double _radius;
	UIColor* _fillColor;

}

@property (assign,nonatomic) double radius;                    //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double state; 
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
+(double)preferredHeight;
-(id)bezierPathForCurrentState;
-(double)angleForState:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(double)state;
-(void)setState:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end

