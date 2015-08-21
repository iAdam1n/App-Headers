/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSString;

@interface PTHLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _block;
	unsigned long long _locationUpdates;
	double _cachedInterval;
	int _searchType;
	double _desiredAccuracy;
	double _searchTimeout;
	unsigned long long _maxLocationUpdates;
	CLLocation* _location;

}

@property (assign,nonatomic) int searchType;                                     //@synthesize searchType=_searchType - In the implementation block
@property (assign,nonatomic) double desiredAccuracy;                             //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (assign,nonatomic) double searchTimeout;                               //@synthesize searchTimeout=_searchTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long maxLocationUpdates;              //@synthesize maxLocationUpdates=_maxLocationUpdates - In the implementation block
@property (getter=isBusy,nonatomic,readonly) BOOL busy; 
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)busyError;
-(void)_foundBestLocation;
-(unsigned long long)maxLocationUpdates;
-(void)setMaxLocationUpdates:(unsigned long long)arg1 ;
-(double)desiredAccuracy;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(CLLocation *)location;
-(double)searchTimeout;
-(void)search:(/*^block*/id)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(int)searchType;
-(void)setSearchTimeout:(double)arg1 ;
-(BOOL)isBusy;
@end

