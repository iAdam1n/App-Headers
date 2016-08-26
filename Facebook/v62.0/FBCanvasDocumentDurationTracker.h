/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCanvasDocumentDurationTracker : NSObject {

	double _appBackgroundStartTime;
	double _canvasViewStartTime;
	double _linkOpenStartTime;
	BOOL _appBackgroundedOnLinkOpen;
	BOOL _trackingFinished;
	double _canvasViewTime;
	double _linkOpenDuration;
	double _appBackgroundDuration;

}

@property (nonatomic,readonly) double canvasViewTime;                     //@synthesize canvasViewTime=_canvasViewTime - In the implementation block
@property (nonatomic,readonly) double linkOpenDuration;                   //@synthesize linkOpenDuration=_linkOpenDuration - In the implementation block
@property (nonatomic,readonly) double appBackgroundDuration;              //@synthesize appBackgroundDuration=_appBackgroundDuration - In the implementation block
-(void)_didAppEnterBackground;
-(void)_didAppEnterForeground;
-(void)_resetTrackingValues;
-(void)startCanvasViewTracking;
-(void)pauseCanvasViewTracking;
-(void)stopCanvasViewTracking;
-(double)canvasViewTime;
-(double)linkOpenDuration;
-(double)appBackgroundDuration;
-(void)dealloc;
-(id)init;
@end
