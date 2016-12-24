/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureDeviceInput;

@interface SKPCameras : NSObject {

	unsigned long long _numberOfCameras;
	AVCaptureDeviceInput* _frontCam;
	AVCaptureDeviceInput* _rearCam;

}

@property (nonatomic,retain) AVCaptureDeviceInput * frontCam;                   //@synthesize frontCam=_frontCam - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * rearCam;                    //@synthesize rearCam=_rearCam - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCameras;              //@synthesize numberOfCameras=_numberOfCameras - In the implementation block
@property (nonatomic,readonly) BOOL frontCameraSupports720p; 
@property (nonatomic,readonly) BOOL rearCameraSupports720p; 
-(BOOL)frontCameraSupports720p;
-(BOOL)rearCameraSupports720p;
-(void)captureFrontCameraToSession:(id)arg1 ;
-(void)captureRearCameraToSession:(id)arg1 ;
-(unsigned long long)numberOfCameras;
-(id)videoInputFromDevice:(id)arg1 ;
-(AVCaptureDeviceInput *)rearCam;
-(AVCaptureDeviceInput *)frontCam;
-(void)addCameraInput:(id)arg1 toCaptureSession:(id)arg2 ;
-(BOOL)cameraSupports720p:(id)arg1 ;
-(void)setFramerate:(double)arg1 forDevice:(id)arg2 ;
-(void)setFrontCam:(AVCaptureDeviceInput *)arg1 ;
-(void)setRearCam:(AVCaptureDeviceInput *)arg1 ;
-(id)init;
@end
