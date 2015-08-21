/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/BSVGGradient.h>

@class BSVGDimensionPoint, BSVGDimension;

@interface BSVGRadialGradient : BSVGGradient {

	BSVGDimensionPoint* _center;
	BSVGDimension* _radius;

}

@property (nonatomic,retain) BSVGDimensionPoint * center;              //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) BSVGDimension * radius;                   //@synthesize radius=_radius - In the implementation block
-(void)drawPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BSVGDimensionPoint *)center;
-(void)setCenter:(BSVGDimensionPoint *)arg1 ;
-(BSVGDimension *)radius;
-(void)setRadius:(BSVGDimension *)arg1 ;
@end

