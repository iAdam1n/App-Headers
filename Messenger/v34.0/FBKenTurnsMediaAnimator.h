/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaAnimator.h>
#import <Messenger/FBKenTurnsObserver.h>
#import <Messenger/FBKenTurnsMotionFilterDelegate.h>

@class FBKenTurnsMotionFilter, NSString;

@interface FBKenTurnsMediaAnimator : FBMediaAnimator <FBKenTurnsObserver, FBKenTurnsMotionFilterDelegate> {

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
-(double)targetZoomScale;
-(CGPoint)targetMediaCoordinate;
-(void)setViewportSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)stop;
-(void)start;
-(double)progress;
-(void)_didEnterBackground:(id)arg1 ;
-(void)pause;
@end
