/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, CLLocation, UIImage;

@interface WAPlace : NSObject <MKAnnotation> {

	NSObject*<OS_dispatch_group> _infoLoadingGroup;
	NSString* _placeId;
	NSString* _name;
	NSString* _shortAddress;
	NSString* _fullAddress;
	NSString* _urlString;
	NSString* _iconURLString;
	CLLocation* _location;
	double _distance;
	UIImage* _mapThumbnail;
	unsigned long long _source;

}

@property (nonatomic,copy) NSString * placeId;                                 //@synthesize placeId=_placeId - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * shortAddress;                            //@synthesize shortAddress=_shortAddress - In the implementation block
@property (nonatomic,copy) NSString * fullAddress;                             //@synthesize fullAddress=_fullAddress - In the implementation block
@property (nonatomic,copy) NSString * urlString;                               //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * iconURLString;                           //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,retain) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double distance;                                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) UIImage * mapThumbnail;                           //@synthesize mapThumbnail=_mapThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                      //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(void)fetchAppleMapsThumbnailForLocation:(id)arg1 completion:(/*^block*/id)arg2 retryOnFail:(BOOL)arg3 ;
+(void)fetchGoogleMapsThumbnailForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)mapPreviewWithPinOverlay:(id)arg1 ;
+(id)placeWithVCardData:(id)arg1 ;
+(void)initialize;
-(BOOL)placeDetailsFetchNeeded;
-(void)fetchPlaceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortAddress:(NSString *)arg1 ;
-(void)setFullAddress:(NSString *)arg1 ;
-(NSString *)fullAddress;
-(void)fetchFacebookPlaceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)mapThumbnail;
-(void)setMapThumbnail:(UIImage *)arg1 ;
-(BOOL)mapThumbnailFetchNeeded;
-(void)fetchMapThumbnailWithCompletion:(/*^block*/id)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)title;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(NSString *)subtitle;
-(CLLocation *)location;
-(unsigned long long)source;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)shortAddress;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(id)initWithSource:(unsigned long long)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)iconURLString;
@end
