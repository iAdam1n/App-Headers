/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPSingleInput.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, FBCaptureSession, AVCaptureVideoDataOutput, AVCaptureDeviceInput, NSString;

@interface FBMPCamera : FBMPSingleInput <AVCaptureVideoDataOutputSampleBufferDelegate> {

	NSObject*<OS_dispatch_queue> _sessionQueue;
	FBCaptureSession* _captureSession;
	AVCaptureVideoDataOutput* _videoOutput;
	AVCaptureDeviceInput* _videoInput;

}

@property (nonatomic,readonly) long long devicePosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCaptureSession:(id)arg1 captureDevice:(id)arg2 ;
-(void)setLowLightMode:(BOOL)arg1 ;
-(long long)devicePosition;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
