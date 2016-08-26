/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsAndMLEPlacePickerNearbyFetcherDelegate, FBLocationManagerSubscription;
@class FBNearbyCache, NSDate, NSString, CLLocation, NSTimer, FBNearbyDataSet;

@interface FBEventsAndMLEPlacePickerNearbyFetcher : NSObject {

	FBNearbyCache* _nearbyCache;
	NSDate* _lastLocationDate;
	unsigned long long _lifeEventType;
	NSString* _schoolType;
	CLLocation* _lastLocation;
	CLLocation* _photoLocation;
	long long _trackingMode;
	id<FBEventsAndMLEPlacePickerNearbyFetcherDelegate> _delegate;
	id<FBLocationManagerSubscription> _locationSubscription;
	NSTimer* _locationFallbackTimer;
	FBNearbyDataSet* _nearbyDataSet;

}

@property (assign,nonatomic,__weak) id<FBEventsAndMLEPlacePickerNearbyFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBLocationManagerSubscription> locationSubscription;                          //@synthesize locationSubscription=_locationSubscription - In the implementation block
@property (nonatomic,retain) NSTimer * locationFallbackTimer;                                                 //@synthesize locationFallbackTimer=_locationFallbackTimer - In the implementation block
@property (nonatomic,retain) FBNearbyDataSet * nearbyDataSet;                                                 //@synthesize nearbyDataSet=_nearbyDataSet - In the implementation block
@property (assign,nonatomic) long long trackingMode;                                                          //@synthesize trackingMode=_trackingMode - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                                       //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) CLLocation * photoLocation;                                                      //@synthesize photoLocation=_photoLocation - In the implementation block
-(void)cancelFetch;
-(void)setLocationSubscription:(id<FBLocationManagerSubscription>)arg1 ;
-(id<FBLocationManagerSubscription>)locationSubscription;
-(BOOL)isFetchingPlaces;
-(void)setPhotoLocation:(CLLocation *)arg1 ;
-(void)setTrackingMode:(long long)arg1 ;
-(void)_fetchNearbyDatasetWithQuery:(id)arg1 withSearchType:(long long)arg2 withLocation:(id)arg3 ;
-(void)_unregisterLocationManagerAndCancelFallbackTimer;
-(void)setLocationFallbackTimer:(NSTimer *)arg1 ;
-(id)_trackedLocation;
-(id)initWithNearbyCache:(id)arg1 delegate:(id)arg2 ;
-(NSTimer *)locationFallbackTimer;
-(id)initWithNearbyCache:(id)arg1 delegate:(id)arg2 lifeEventType:(unsigned long long)arg3 schoolType:(id)arg4 ;
-(void)updateWithPhoto:(id)arg1 ;
-(FBNearbyDataSet *)nearbyDataSet;
-(BOOL)hasFetchedLocation;
-(void)clearNearbyAndLocationCache;
-(CLLocation *)photoLocation;
-(void)clearNearbyCache;
-(void)setNearbyDataSet:(FBNearbyDataSet *)arg1 ;
-(void)fetchNearbyPlacesWithQuery:(id)arg1 withSearchType:(long long)arg2 shouldRefreshLocation:(BOOL)arg3 ;
-(void)setDelegate:(id<FBEventsAndMLEPlacePickerNearbyFetcherDelegate>)arg1 ;
-(id<FBEventsAndMLEPlacePickerNearbyFetcherDelegate>)delegate;
-(long long)trackingMode;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
@end
