/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Skype/Skype-Structs.h>
@class NSMutableArray, NSLock;

@interface SensorDataProcessor : NSObject {

	SensorData m_SensorData;
	NSMutableArray* m_DeviceMotionArray;
	NSLock* m_DeviceMotionArrayLock;
	double m_RotxPrev;
	double m_RotyPrev;
	double m_ExposureTimePrev;
	double m_TimestampCameraPrev;
	double m_TimestampSensorPrev;
	double m_Angle2PixelX;
	double m_Angle2PixelY;
	int m_DeviceType;
	BOOL m_bIsFrontCamera;
	int m_Width;
	int m_Height;
	float m_Cam2pixelMatrix[4];
	BOOL m_shakeDetectionStarted;
	opaque_pthread_t* m_GyroPullThread;
	BOOL m_GyroPullThreadShouldStop;

}
+(void)initialize;
-(void)startShakeDetection;
-(BOOL)deviceIsShaking;
-(void)stopShakeDetection;
-(void)pollMotionSensors;
-(void)setCameraData:(CFDictionaryRef)arg1 :(SensorData*)arg2 ;
-(void)rotationAngle2MotionVector:(float)arg1 :(float)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)stopSensorUpdates;
-(void)gyro_pull;
-(void)configure:(unsigned char)arg1 :(int)arg2 :(int)arg3 ;
-(const SensorData*)getFrameData:(double)arg1 :(opaqueCMSampleBufferRef)arg2 ;
-(void)startSensorUpdates;
-(id)init;
-(void)dealloc;
@end
