/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

