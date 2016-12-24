/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface SKPLocationManager : NSObject <CLLocationManagerDelegate> {

	/*^block*/id _locationHandler;
	CLLocationManager* _locationManager;

}

@property (nonatomic,copy) id locationHandler;                                 //@synthesize locationHandler=_locationHandler - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestPermissionForLocation:(/*^block*/id)arg1 ;
-(long long)currentLocationPermission;
-(id)init;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)locationHandler;
-(void)setLocationHandler:(id)arg1 ;
@end
