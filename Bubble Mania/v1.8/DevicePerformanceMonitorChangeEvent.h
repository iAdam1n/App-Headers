/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@interface DevicePerformanceMonitorChangeEvent : ChangeEvent {

	BOOL _isBenchmarkUser;
	int _deviceLevel;
	int _averageFrameRate;
	int _frameRateDeviation;
	int _minFrameRate;

}

@property (assign,nonatomic) int deviceLevel;                     //@synthesize deviceLevel=_deviceLevel - In the implementation block
@property (assign,nonatomic) int averageFrameRate;                //@synthesize averageFrameRate=_averageFrameRate - In the implementation block
@property (assign,nonatomic) int frameRateDeviation;              //@synthesize frameRateDeviation=_frameRateDeviation - In the implementation block
@property (assign,nonatomic) BOOL isBenchmarkUser;                //@synthesize isBenchmarkUser=_isBenchmarkUser - In the implementation block
@property (assign,nonatomic) int minFrameRate;                    //@synthesize minFrameRate=_minFrameRate - In the implementation block
+(id)abbreviation;
-(int)deviceLevel;
-(void)setAverageFrameRate:(int)arg1 ;
-(void)setFrameRateDeviation:(int)arg1 ;
-(id)csv;
-(int)averageFrameRate;
-(int)frameRateDeviation;
-(void)setDeviceLevel:(int)arg1 ;
-(BOOL)isBenchmarkUser;
-(void)setIsBenchmarkUser:(BOOL)arg1 ;
-(void)setMinFrameRate:(int)arg1 ;
-(int)minFrameRate;
@end

