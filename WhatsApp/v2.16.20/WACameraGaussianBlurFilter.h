/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WACameraFilter.h>

@class CIFilter;

@interface WACameraGaussianBlurFilter : WACameraFilter {

	CIFilter* _blurFilter;
	CIFilter* _affineClampFilter;
	float _radius;

}

@property (assign,nonatomic) float radius;              //@synthesize radius=_radius - In the implementation block
-(id)filterImage:(id)arg1 ;
-(id)init;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end
