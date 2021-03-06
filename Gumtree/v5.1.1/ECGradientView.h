/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, CAGradientLayer;

@interface ECGradientView : UIView {

	UIColor* _startColor;
	UIColor* _endColor;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,retain) UIColor * startColor;                           //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                             //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
@end

