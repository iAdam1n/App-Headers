/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageCameraCaptureButtonListener.h>

@protocol FBClock, MNMontageCaptureInteractionControllerDelegate;
@class FBTimer, NSDate, MNMontageCameraCaptureButton, NSString;

@interface MNMontageCaptureInteractionController : NSObject <MNMontageCameraCaptureButtonListener> {

	double _maxVideoCaptureLength;
	FBTimer* _recordingTimer;
	NSDate* _recordingStartTime;
	id<FBClock> _clock;
	id<MNMontageCaptureInteractionControllerDelegate> _delegate;
	MNMontageCameraCaptureButton* _captureButton;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<MNMontageCaptureInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNMontageCameraCaptureButton * captureButton;                                   //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCaptureButton:(MNMontageCameraCaptureButton *)arg1 ;
-(MNMontageCameraCaptureButton *)captureButton;
-(id)initWithMaxVideoCaptureLength:(double)arg1 ;
-(void)didDragUpCaptureButton:(double)arg1 ;
-(void)didTouchDownCaptureButton;
-(void)didTouchUpCaptureButton;
-(void)didTouchCancelCaptureButton;
-(void)didCapture;
-(void)_beginRecording;
-(void)_resetTimers;
-(void)_recordingTimerTick;
-(void)_captureVideo:(BOOL)arg1 ;
-(void)_capturePhoto;
-(void)setDelegate:(id<MNMontageCaptureInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageCaptureInteractionControllerDelegate>)delegate;
-(unsigned long long)state;
-(void)reset;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_beginCapture;
-(BOOL)isCapturing;
@end
