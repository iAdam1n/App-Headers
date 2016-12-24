/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSMutableArray, NSString;

@interface TGLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	double _lastLocationUpdateTime;
	NSMutableArray* _targets;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (retain) CLLocation * currentLocation;                               //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign) double lastLocationUpdateTime;                              //@synthesize lastLocationUpdateTime=_lastLocationUpdateTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * targets;                         //@synthesize targets=_targets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestLocation:(id)arg1 ;
-(void)cancelLocationRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setTargets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)targets;
-(double)lastLocationUpdateTime;
-(void)setLastLocationUpdateTime:(double)arg1 ;
@end
