/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPLowpassFilter : NSObject {

	double _filterConstant;
	double _x;
	double _y;
	double _z;

}

@property (x,nonatomic,readonly) double x;              //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) double y;              //@synthesize y=_y - In the implementation block
@property (z,nonatomic,readonly) double z;              //@synthesize z=_z - In the implementation block
-(id)initWithSampleRate:(double)arg1 cutoffFrequency:(double)arg2 ;
-(void)addAcceleration:(id)arg1 ;
-(double)x;
-(double)y;
-(double)z;
@end
