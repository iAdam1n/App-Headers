/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBPlacesMapRegion : NSObject <NSCopying> {

	double _north;
	double _west;
	double _south;
	double _east;

}

@property (nonatomic,readonly) double north;              //@synthesize north=_north - In the implementation block
@property (nonatomic,readonly) double west;               //@synthesize west=_west - In the implementation block
@property (nonatomic,readonly) double south;              //@synthesize south=_south - In the implementation block
@property (nonatomic,readonly) double east;               //@synthesize east=_east - In the implementation block
-(id)initWithEast:(double)arg1 south:(double)arg2 west:(double)arg3 north:(double)arg4 ;
-(double)_validLongitude:(double)arg1 ;
-(double)_validLatitude:(double)arg1 ;
-(double)south;
-(double)west;
-(SCD_Struct_FB47)coordinateRegion;
-(id)initWithGeoRectangle:(id)arg1 ;
-(id)centerLocation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_FB47)arg1 ;
-(id)initWithMapRect:(SCD_Struct_FB53)arg1 ;
-(CLLocationCoordinate2D)centerCoordinate;
-(SCD_Struct_FB53)mapRect;
-(double)east;
-(double)north;
@end
