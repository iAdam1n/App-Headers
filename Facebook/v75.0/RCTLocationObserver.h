/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTEventEmitter.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString;

@interface RCTLocationObserver : RCTEventEmitter <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSDictionary* _lastLocationEvent;
	NSMutableArray* _pendingRequests;
	BOOL _observingLocation;
	UIEdgeInsets _observerOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__1830;
+(id)__rct_export__1972;
+(id)__rct_export__2103;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)beginLocationUpdatesWithDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2 ;
-(void)getCurrentPosition:(UIEdgeInsets)arg1 withSuccessCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)timeout:(id)arg1 ;
-(void)startObserving:(UIEdgeInsets)arg1 ;
-(void)stopObserving;
@end
