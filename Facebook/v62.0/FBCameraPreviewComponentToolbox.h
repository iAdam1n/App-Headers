/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCameraCaptureButtonAppearanceProvider, FBCameraGestureRecognizerEvent;
@class FBCaptureManager, FBCameraViewFinderListenerAnnouncer, FBVideoCreativeToolsPreviewOverlayView;

@interface FBCameraPreviewComponentToolbox : NSObject {

	id<FBCameraCaptureButtonAppearanceProvider> _appearanceProvider;
	FBCaptureManager* _captureManager;
	id<FBCameraGestureRecognizerEvent> _pinchEvent;
	FBCameraViewFinderListenerAnnouncer* _viewFinderAnnouncer;
	id<FBCameraGestureRecognizerEvent> _viewFinderDoubleTapEvent;
	id<FBCameraGestureRecognizerEvent> _viewFinderTapEvent;
	FBVideoCreativeToolsPreviewOverlayView* _creativeToolsOverlayView;

}

@property (nonatomic,readonly) id<FBCameraCaptureButtonAppearanceProvider> appearanceProvider;                 //@synthesize appearanceProvider=_appearanceProvider - In the implementation block
@property (nonatomic,readonly) FBCaptureManager * captureManager;                                              //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> pinchEvent;                                  //@synthesize pinchEvent=_pinchEvent - In the implementation block
@property (nonatomic,readonly) FBCameraViewFinderListenerAnnouncer * viewFinderAnnouncer;                      //@synthesize viewFinderAnnouncer=_viewFinderAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderDoubleTapEvent;                    //@synthesize viewFinderDoubleTapEvent=_viewFinderDoubleTapEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderTapEvent;                          //@synthesize viewFinderTapEvent=_viewFinderTapEvent - In the implementation block
@property (nonatomic,readonly) FBVideoCreativeToolsPreviewOverlayView * creativeToolsOverlayView;              //@synthesize creativeToolsOverlayView=_creativeToolsOverlayView - In the implementation block
-(id<FBCameraGestureRecognizerEvent>)pinchEvent;
-(id<FBCameraGestureRecognizerEvent>)viewFinderTapEvent;
-(id<FBCameraCaptureButtonAppearanceProvider>)appearanceProvider;
-(FBCaptureManager *)captureManager;
-(id<FBCameraGestureRecognizerEvent>)viewFinderDoubleTapEvent;
-(FBVideoCreativeToolsPreviewOverlayView *)creativeToolsOverlayView;
-(FBCameraViewFinderListenerAnnouncer *)viewFinderAnnouncer;
-(id)initWithAppearanceProvider:(id)arg1 captureManager:(id)arg2 pinchEvent:(id)arg3 viewFinderAnnouncer:(id)arg4 viewFinderDoubleTapEvent:(id)arg5 viewFinderTapEvent:(id)arg6 creativeToolsOverlayView:(id)arg7 ;
@end
