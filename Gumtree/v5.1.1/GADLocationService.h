/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, GADLocation, NSObject, NSString;

@interface GADLocationService : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	GADLocation* _location;
	NSObject*<OS_dispatch_queue> _locationDataQueue;
	BOOL _featureEnabled;
	BOOL _publisherAuthorized;

}

@property (nonatomic,copy,readonly) GADLocation * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setFeatureEnabled:(BOOL)arg1 ;
-(void)setPublisherAuthorized:(BOOL)arg1 ;
-(id)init;
-(GADLocation *)location;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)disable;
-(void)startUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)updateLocation;
@end

