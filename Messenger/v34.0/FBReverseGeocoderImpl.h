/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBMThread, CLGeocoder, FBReverseGeocoderCache, FBCurrentCountryManager;

@interface FBReverseGeocoderImpl : NSObject {

	FBMThread* _thread;
	CLGeocoder* _reverseGeocoder;
	FBReverseGeocoderCache* _reverseGeocoderCache;
	FBCurrentCountryManager* _currentCountryManager;

}

@property (nonatomic,retain) FBMThread * thread;                                           //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) CLGeocoder * reverseGeocoder;                                 //@synthesize reverseGeocoder=_reverseGeocoder - In the implementation block
@property (nonatomic,retain) FBReverseGeocoderCache * reverseGeocoderCache;                //@synthesize reverseGeocoderCache=_reverseGeocoderCache - In the implementation block
@property (nonatomic,retain) FBCurrentCountryManager * currentCountryManager;              //@synthesize currentCountryManager=_currentCountryManager - In the implementation block
+(id)geocoderWithReverseGeocoderCache:(id)arg1 currentCountryManager:(id)arg2 ;
-(void)setReverseGeocoder:(CLGeocoder *)arg1 ;
-(void)setReverseGeocoderCache:(FBReverseGeocoderCache *)arg1 ;
-(void)setCurrentCountryManager:(FBCurrentCountryManager *)arg1 ;
-(id)displayStringForPlacemark:(id)arg1 userPlacemark:(id)arg2 forceShort:(BOOL)arg3 ;
-(FBCurrentCountryManager *)currentCountryManager;
-(void)cancelPlacemarkRequest;
-(void)getPlacemarkStringForLocation:(id)arg1 userLocation:(id)arg2 forceShort:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(CLGeocoder *)reverseGeocoder;
-(FBReverseGeocoderCache *)reverseGeocoderCache;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(FBMThread *)thread;
-(void)setThread:(FBMThread *)arg1 ;
@end

