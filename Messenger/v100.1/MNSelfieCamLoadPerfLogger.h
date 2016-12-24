/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNSelfieCamLoadEventListener.h>
#import <Messenger/FBCaptureManagerListener.h>

@class NSString;

@interface MNSelfieCamLoadPerfLogger : NSObject <FBViewerContextClassProvidable, MNSelfieCamLoadEventListener, FBCaptureManagerListener> {

	BOOL _hasPendingPreviewLoadEvent;
	BOOL _hasPendingCaptureImageEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(void)selfieCamPreviewWillLoad;
-(void)selfieCamPreviewDidLoadAndLayerWasApplied;
-(void)selfieCamBeginCaptureImage;
-(void)selfieCamDidCaptureImage;
@end
