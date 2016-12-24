/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSTimer, CLLocation, EDSunriseSet, NSString;

@interface AutoThemeManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSTimer* _updateTimer;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation; 
@property (nonatomic,readonly) BOOL isDaylight; 
@property (nonatomic,readonly) EDSunriseSet * sunriseSetToday; 
@property (nonatomic,readonly) EDSunriseSet * sunriseSetTomorrow; 
@property (nonatomic,retain) NSTimer * updateTimer;                            //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL hasAttemptedLocationPermission; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(BOOL)locationIsAuthorized;
-(BOOL)hasAttemptedLocationPermission;
-(void)setHasAttemptedLocationPermission:(BOOL)arg1 ;
-(void)showLocationNeededAlert;
-(EDSunriseSet *)sunriseSetToday;
-(void)updateThemeIfNeeded;
-(EDSunriseSet *)sunriseSetTomorrow;
-(BOOL)attemptToSetEnabled:(BOOL)arg1 withDayTheme:(unsigned long long)arg2 ;
-(BOOL)enabled;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(BOOL)isDaylight;
-(CLLocation *)currentLocation;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end
