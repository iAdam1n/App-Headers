/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGLocationDataSource.h>

@class CLLocation;

@interface IGNearbyLocationDataSource : IGLocationDataSource {

	BOOL _preventEagerFetch;
	CLLocation* _EXIFPhotoLocation;
	CLLocation* _currentUserLocation;

}

@property (nonatomic,retain) CLLocation * EXIFPhotoLocation;                //@synthesize EXIFPhotoLocation=_EXIFPhotoLocation - In the implementation block
@property (nonatomic,retain) CLLocation * currentUserLocation;              //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (assign,nonatomic) BOOL preventEagerFetch;                        //@synthesize preventEagerFetch=_preventEagerFetch - In the implementation block
-(void)onLocationUpdated:(id)arg1 ;
-(void)onLocationDenied:(id)arg1 ;
-(void)setEXIFPhotoLocation:(CLLocation *)arg1 ;
-(void)fetchLocationsOrLocateUser;
-(void)setPreventEagerFetch:(BOOL)arg1 ;
-(void)onLocationFailed:(id)arg1 ;
-(id)activeLocationFromEXIF:(BOOL*)arg1 ;
-(CLLocation *)EXIFPhotoLocation;
-(BOOL)preventEagerFetch;
-(void)dealloc;
-(void)reloadData;
-(void)setCurrentUserLocation:(CLLocation *)arg1 ;
-(CLLocation *)currentUserLocation;
-(id)initWithDelegate:(id)arg1 ;
@end
