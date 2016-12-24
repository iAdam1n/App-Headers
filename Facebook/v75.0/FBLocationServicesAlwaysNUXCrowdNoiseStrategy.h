/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCrowdNoiseStrategy.h>

@protocol FBCrowdNoiseModel, FBLocationServicesAlwaysNUXDataSource;
@class FBUserSession, NSString;

@interface FBLocationServicesAlwaysNUXCrowdNoiseStrategy : NSObject <FBCrowdNoiseStrategy> {

	FBUserSession* _session;
	id<FBCrowdNoiseModel> _model;
	id<FBLocationServicesAlwaysNUXDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBCrowdNoiseModel> model; 
@property (nonatomic,readonly) double viewMinInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMinInitialVelocityNotable; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNotable; 
@property (nonatomic,readonly) double viewAccelerationNormal; 
@property (nonatomic,readonly) double viewAccelerationNotable; 
@property (nonatomic,readonly) double viewNotableTimeReachFullAmplitude; 
@property (nonatomic,readonly) double viewNotableAssimilationScreenPercent; 
@property (nonatomic,readonly) double viewEndZoneFinalScale; 
@property (nonatomic,readonly) double viewEndZoneScreenPercent; 
@property (nonatomic,readonly) double viewMinWavelength; 
@property (nonatomic,readonly) double viewMaxWavelength; 
@property (nonatomic,readonly) double viewMinAmplitude; 
@property (nonatomic,readonly) double viewMaxAmplitude; 
@property (nonatomic,readonly) unsigned long long viewEquilibriumVisibleWind; 
@property (nonatomic,readonly) double viewFireworkZoneWidthScreenPercent; 
@property (nonatomic,readonly) unsigned long long viewWindKeyFrames; 
@property (nonatomic,readonly) unsigned long long viewDiffuserCapacity; 
@property (nonatomic,readonly) double viewDiffuserPeriod; 
@property (nonatomic,readonly) unsigned long long viewStartingLargestKnownDelta; 
@property (nonatomic,readonly) double controllerMinSubmissionPeriod; 
@property (nonatomic,readonly) double controllerDeltaFlushPeriod; 
@property (nonatomic,readonly) float controllerDropInsignificantDeltaPercentThreshold; 
-(double)controllerDeltaFlushPeriod;
-(float)controllerDropInsignificantDeltaPercentThreshold;
-(double)controllerMinSubmissionPeriod;
-(double)viewAccelerationNotable;
-(unsigned long long)viewDiffuserCapacity;
-(double)viewDiffuserPeriod;
-(double)viewEndZoneScreenPercent;
-(double)viewFireworkZoneWidthScreenPercent;
-(double)viewMaxAmplitude;
-(double)viewMaxInitialVelocityNotable;
-(double)viewMaxWavelength;
-(double)viewMinAmplitude;
-(double)viewMinInitialVelocityNotable;
-(double)viewMinWavelength;
-(double)viewNotableAssimilationScreenPercent;
-(double)viewNotableTimeReachFullAmplitude;
-(unsigned long long)viewStartingLargestKnownDelta;
-(unsigned long long)viewWindKeyFrames;
-(void)generateParticleViewForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)notableColorForIdentifier:(id)arg1 ;
-(double)windHeightForViewSize:(CGSize)arg1 ;
-(double)particleMinInitialSizeForView:(id)arg1 ;
-(double)particleMaxInitialSizeForView:(id)arg1 ;
-(double)particleInitialNotableSizeForView:(id)arg1 ;
-(double)viewMinInitialVelocityNormal;
-(double)viewMaxInitialVelocityNormal;
-(double)viewAccelerationNormal;
-(double)viewEndZoneFinalScale;
-(unsigned long long)viewEquilibriumVisibleWind;
-(id)initWithSession:(id)arg1 dataSource:(id)arg2 ;
-(id<FBCrowdNoiseModel>)model;
@end
