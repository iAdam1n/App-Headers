/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDeviceOrientationSensorDelegate.h>

@protocol FBOrientationStateDelegate, FBRotatable;
@class FBDeviceOrientationSensor, FBInterpolatedValue, NSString;

@interface FBOrientationState : NSObject <FBDeviceOrientationSensorDelegate> {

	id<FBOrientationStateDelegate> _delegate;
	id<FBRotatable> _rotatable;
	FBDeviceOrientationSensor* _sensor;
	long long _interfaceOrientation;
	long long _previousInterfaceOrientation;
	long long _lastSupportedDeviceOrientation;
	double _orientationTransitionProgress;
	FBInterpolatedValue* _orientationRotationAngle;

}

@property (assign,nonatomic,__weak) id<FBOrientationStateDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBRotatable> rotatable;                                         //@synthesize rotatable=_rotatable - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long previousInterfaceOrientation;                                 //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientationForCurrentDeviceOrientation; 
@property (nonatomic,readonly) BOOL isAnimatingOrientationRotation; 
@property (nonatomic,readonly) double orientationTransitionProgress;                                   //@synthesize orientationTransitionProgress=_orientationTransitionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldBlockChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_notifyDelegateOfOrientationChange;
-(id<FBRotatable>)rotatable;
-(double)rotationForInterfaceOrientation:(long long)arg1 ;
-(void)_willBeginRotationToOrientation:(long long)arg1 fromOrientation:(long long)arg2 animationConfig:(SCD_Struct_FB416)arg3 ;
-(id)_orientationTransitionAnimationWithConfig:(SCD_Struct_FB416)arg1 ;
-(void)_didFinishRotationToOrientation:(long long)arg1 fromOrientation:(long long)arg2 ;
-(void)_updateForOrientationTransitionProgress:(double)arg1 ;
-(void)_updateStatusBarOrientation;
-(void)setInterfaceOrientation:(long long)arg1 animationConfig:(SCD_Struct_FB416)arg2 ;
-(BOOL)_supportsDeviceOrientation:(long long)arg1 ;
-(long long)_interfaceOrientationForDeviceOrientation:(long long)arg1 ;
-(void)_updateRotatableForOrientationState:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 rotatable:(id)arg2 refreshImmediately:(BOOL)arg3 currentOrientation:(BOOL)arg4 ;
-(long long)interfaceOrientationForCurrentDeviceOrientation;
-(BOOL)isAnimatingOrientationRotation;
-(void)stopOrientationAnimation;
-(void)setRotatable:(id<FBRotatable>)arg1 ;
-(double)orientationTransitionProgress;
-(void)refresh;
-(void)deviceOrientationDidChange:(long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBOrientationStateDelegate>)arg1 ;
-(id<FBOrientationStateDelegate>)delegate;
-(long long)interfaceOrientation;
-(void)reset;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)previousInterfaceOrientation;
@end

