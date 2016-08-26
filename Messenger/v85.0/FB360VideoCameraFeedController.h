/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FB360VideoCameraController.h>

@interface FB360VideoCameraFeedController : FB360VideoCameraController {

	float _pitch;
	float _yaw;
	float _slerpPitchStart;
	float _slerpPitchEnd;
	float _slerpYawStart;
	float _slerpYawEnd;
	float _progress;
	BOOL _sensorQuaternionCaptured;
	GLKQuaternion _previousSensorQuaternion;
	SCD_Struct_FB147 _bounds;

}
-(id)initWithSphericalRendererBounds:(SCD_Struct_FB147)arg1 ;
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(void)updateSlerp:(float)arg1 ;
-(GLKMatrix4)generateViewMatrix;
-(void)_incrementPitch:(float)arg1 yaw:(float)arg2 ;
@end
