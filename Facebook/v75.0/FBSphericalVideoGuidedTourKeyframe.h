/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBSphericalVideoGuidedTourKeyframe : FBValueObject <NSCopying, NSCoding> {

	double _timestamp;
	double _pitch;
	double _yaw;

}

@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double pitch;                  //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) double yaw;                    //@synthesize yaw=_yaw - In the implementation block
-(id)initWithTimestamp:(double)arg1 pitch:(double)arg2 yaw:(double)arg3 ;
-(double)timestamp;
-(double)pitch;
-(double)yaw;
@end
