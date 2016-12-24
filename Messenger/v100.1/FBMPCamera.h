/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPSingleInput.h>
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
-(long long)devicePosition;
-(id)initWithCaptureSession:(id)arg1 captureDevice:(id)arg2 ;
-(void)setLowLightMode:(BOOL)arg1 ;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
