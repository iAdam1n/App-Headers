/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBKenTurnsMotionFilterDelegate;
#import <Messenger/Messenger-Structs.h>
@class POPSpringAnimation;

@interface FBKenTurnsMotionFilter : NSObject {

	double _rotationRange;
	double _filtrationRate;
	double _filtrationRange;
	double _competingSignalPercentageThreshold;
	double _rotationSlop;
	double _rotationDeltaHistory[15];
	double _rotationDeltaAverage;
	double _rotationDeltaMagnitudeAverage;
	double _currentRotation;
	double _targetRotation;
	double _initialError;
	double _remainingError;
	double _errorDistanceRemaining;
	double _maxErrorCorrection;
	BOOL _turning;
	BOOL _updating;
	BOOL _errorCorrectionEnabled;
	double _lastUpdate;
	POPSpringAnimation* _spring;
	id<FBKenTurnsMotionFilterDelegate> _delegate;
	delegateOptionalProtocolResponseFlags _delegateFlags;
	double _rotation;
	double _currentAbsoluteRotation;

}

@property (assign,nonatomic,__weak) id<FBKenTurnsMotionFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double rotation;                                               //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) BOOL errorCorrectionEnabled;                                     //@synthesize errorCorrectionEnabled=_errorCorrectionEnabled - In the implementation block
@property (assign,nonatomic) double rotationRange;                                            //@synthesize rotationRange=_rotationRange - In the implementation block
@property (nonatomic,readonly) double rotationPercent; 
@property (assign,nonatomic) double filtrationRate;                                           //@synthesize filtrationRate=_filtrationRate - In the implementation block
@property (assign,nonatomic) double filtrationRange;                                          //@synthesize filtrationRange=_filtrationRange - In the implementation block
@property (assign,nonatomic) double competingSignalPercentageThreshold;                       //@synthesize competingSignalPercentageThreshold=_competingSignalPercentageThreshold - In the implementation block
@property (assign,nonatomic) double rotationSlop;                                             //@synthesize rotationSlop=_rotationSlop - In the implementation block
@property (assign,nonatomic) double springTension; 
@property (assign,nonatomic) double springFriction; 
@property (assign,nonatomic) double currentRotation;                                          //@synthesize currentRotation=_currentRotation - In the implementation block
@property (assign,nonatomic) double currentAbsoluteRotation;                                  //@synthesize currentAbsoluteRotation=_currentAbsoluteRotation - In the implementation block
@property (assign,nonatomic) double lastUpdate;                                               //@synthesize lastUpdate=_lastUpdate - In the implementation block
-(double)currentRotation;
-(void)setCurrentRotation:(double)arg1 ;
-(void)resetError;
-(double)rotationPercent;
-(void)setSpringTension:(double)arg1 ;
-(void)setSpringFriction:(double)arg1 ;
-(void)setCompetingSignalPercentageThreshold:(double)arg1 ;
-(void)setRotationSlop:(double)arg1 ;
-(void)setFiltrationRate:(double)arg1 ;
-(void)setFiltrationRange:(double)arg1 ;
-(void)setErrorCorrectionEnabled:(BOOL)arg1 ;
-(void)_setTurning:(BOOL)arg1 ;
-(double)_clampRotation:(double)arg1 ;
-(void)setLastUpdate:(double)arg1 ;
-(double)lastUpdate;
-(void)_updateAverageForYDegreesTravelled:(double)arg1 ;
-(void)_updateRotationForYDegreesTravelled:(double)arg1 ;
-(double)_maxErrorCorrectionForRotationRange:(double)arg1 ;
-(double)springFriction;
-(double)springTension;
-(double)rotationSlop;
-(double)filtrationRate;
-(double)filtrationRange;
-(double)competingSignalPercentageThreshold;
-(BOOL)errorCorrectionEnabled;
-(double)currentAbsoluteRotation;
-(void)setCurrentAbsoluteRotation:(double)arg1 ;
-(double)rotationRange;
-(void)setRotationRange:(double)arg1 ;
-(void)setDelegate:(id<FBKenTurnsMotionFilterDelegate>)arg1 ;
-(id)init;
-(id<FBKenTurnsMotionFilterDelegate>)delegate;
-(void)reset;
-(double)rotation;
-(void)updateWithDeviceMotion:(id)arg1 ;
-(void)stopUpdating;
-(void)startUpdating;
@end

