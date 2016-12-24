/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSDate;

@interface FB360VideoViewportLogger : NSObject {

	double _loggingInterval;
	double _viewportThreshold;
	NSDate* _nextLogTime;
	double _previousYaw;
	double _previousPitch;
	BOOL _viewportAlreadyChanged;
	BOOL _fixViewportLoggingEnabled;

}
-(BOOL)_didChangeSignificantlyWithYaw:(double)arg1 pitch:(double)arg2 ;
-(void)_logViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(void)maybeLogViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(id)initWithLoggingInterval:(double)arg1 viewportThreshold:(double)arg2 fixViewportLoggingEnabled:(BOOL)arg3 ;
-(void)reset;
@end
