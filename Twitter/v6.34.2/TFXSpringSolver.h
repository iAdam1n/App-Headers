/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface TFXSpringSolver : NSObject {

	BOOL _updatingConstants;
	double _zeta;
	double _omega0;
	double _position;
	double _velocity;
	double _springPosition;
	double _springConstant;
	double _dampingConstant;
	double _mass;
	double _stabilityTimeStep;
	double _stabilityPrecision;

}

@property (assign,nonatomic) double position;                        //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double velocity;                        //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double springPosition;                  //@synthesize springPosition=_springPosition - In the implementation block
@property (assign,nonatomic) double springConstant;                  //@synthesize springConstant=_springConstant - In the implementation block
@property (assign,nonatomic) double dampingConstant;                 //@synthesize dampingConstant=_dampingConstant - In the implementation block
@property (assign,nonatomic) double mass;                            //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double dampingRatio; 
@property (assign,nonatomic) double naturalFrequency; 
@property (assign,nonatomic) double stabilityTimeStep;               //@synthesize stabilityTimeStep=_stabilityTimeStep - In the implementation block
@property (assign,nonatomic) double stabilityPrecision;              //@synthesize stabilityPrecision=_stabilityPrecision - In the implementation block
+(id)spring;
-(void)setDampingRatio:(double)arg1 ;
-(void)setNaturalFrequency:(double)arg1 ;
-(void)setSpringPosition:(double)arg1 ;
-(double)timeUntilStable;
-(double)positionAtTime:(double)arg1 ;
-(void)setStabilityPrecision:(double)arg1 ;
-(double)velocityAtTime:(double)arg1 ;
-(double)springPosition;
-(BOOL)isStable;
-(void)updatePhysicalConstants;
-(void)setSpringConstant:(double)arg1 ;
-(void)setDampingConstant:(double)arg1 ;
-(void)updateSpringConstants;
-(BOOL)isStableAtTime:(double)arg1 ;
-(double)kineticEnergyAtTime:(double)arg1 ;
-(double)potentialEnergyAtTime:(double)arg1 ;
-(double)dampingRatio;
-(double)naturalFrequency;
-(double)accelerationAtTime:(double)arg1 ;
-(double)springConstant;
-(double)dampingConstant;
-(double)stabilityTimeStep;
-(void)setStabilityTimeStep:(double)arg1 ;
-(double)stabilityPrecision;
-(id)init;
-(void)setVelocity:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(double)velocity;
-(double)mass;
@end
