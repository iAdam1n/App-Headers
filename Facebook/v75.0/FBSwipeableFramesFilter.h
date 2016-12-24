/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSwipeableFramesFilter : FBValueObject <NSCopying> {

	BOOL _hueColorize;
	NSString* _name;
	double _brightness;
	double _contrast;
	double _saturation;
	double _hue;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double brightness;                 //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) double contrast;                   //@synthesize contrast=_contrast - In the implementation block
@property (nonatomic,readonly) double saturation;                 //@synthesize saturation=_saturation - In the implementation block
@property (nonatomic,readonly) double hue;                        //@synthesize hue=_hue - In the implementation block
@property (nonatomic,readonly) BOOL hueColorize;                  //@synthesize hueColorize=_hueColorize - In the implementation block
-(BOOL)hueColorize;
-(id)initWithName:(id)arg1 brightness:(double)arg2 contrast:(double)arg3 saturation:(double)arg4 hue:(double)arg5 hueColorize:(BOOL)arg6 ;
-(NSString *)name;
-(double)brightness;
-(double)contrast;
-(double)saturation;
-(double)hue;
@end
