/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface IGArcLayer : CALayer {

	double _trackThickness;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;

}

@property (assign,nonatomic) double trackThickness;                    //@synthesize trackThickness=_trackThickness - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;              //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                 //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (assign,nonatomic) double progress; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)setTrackThickness:(double)arg1 ;
-(double)trackThickness;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

