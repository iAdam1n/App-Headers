/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaAnimator.h>
#import <Messenger/FBKenTurnsObserver.h>
#import <Messenger/FBKenTurnsMotionFilterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, FBKenTurnsMotionFilter, NSString;

@interface FBKenTurnsMediaAnimator : FBMediaAnimator <FBKenTurnsObserver, FBKenTurnsMotionFilterDelegate> {

	NSObject*<OS_dispatch_queue> _motionQueue;
	FBKenTurnsMotionFilter* _motionFilter;
	double _fittedZoomScale;
	CGPoint _startCoordinate;
	CGPoint _endCoordinate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateKenTurnsMechanics;
-(void)setMediaSize:(CGSize)arg1 ;
-(void)handleDeviceMotion:(id)arg1 error:(id)arg2 ;
-(void)motionFilterUpdatedYRotation:(id)arg1 ;
-(void)updateForTargetMediaCoordinate:(CGPoint)arg1 targetZoomScale:(double)arg2 ;
-(double)targetZoomScale;
-(CGPoint)targetMediaCoordinate;
-(id)init;
-(void)dealloc;
-(void)suspend;
-(void)stop;
-(void)start;
-(double)progress;
-(void)_didEnterBackground:(id)arg1 ;
-(void)pause;
-(void)setViewportSize:(CGSize)arg1 ;
@end
