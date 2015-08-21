/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGStorableObject.h>
#import <Instagram/IGStoredObject.h>

@class CLLocation, NSString, NSNumber;

@interface IGLocation : IGStorableObject <IGStoredObject> {

	CLLocation* _locationCoord;
	NSString* _name;
	NSString* _streetAddress;
	NSNumber* _externalID;
	NSString* _externalSource;
	NSString* _foursquareV2ID;
	NSString* _facebookPlacesID;
	NSString* _externalIDSource;

}

@property (retain) CLLocation * locationCoord;                      //@synthesize locationCoord=_locationCoord - In the implementation block
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * streetAddress;                          //@synthesize streetAddress=_streetAddress - In the implementation block
@property (retain) NSNumber * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (retain) NSString * externalIDSource;                     //@synthesize externalIDSource=_externalIDSource - In the implementation block
@property (copy) NSString * externalSource;                         //@synthesize externalSource=_externalSource - In the implementation block
@property (copy) NSString * foursquareV2ID;                         //@synthesize foursquareV2ID=_foursquareV2ID - In the implementation block
@property (copy) NSString * facebookPlacesID;                       //@synthesize facebookPlacesID=_facebookPlacesID - In the implementation block
@property (readonly) long long locationType; 
@property (copy,readonly) NSString * detailsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
+(id)unmanagedLocationWithDictionary:(id)arg1 ;
+(id)loggingIdsForLocations:(id)arg1 ;
+(id)getRaindropPlacesFromLocations:(id)arg1 ;
-(NSString *)externalSource;
-(NSString *)streetAddress;
-(id)loggingId;
-(int)loggingPlaceSource;
-(CLLocation *)locationCoord;
-(void)fetchAdditionalInfo;
-(NSString *)foursquareV2ID;
-(NSString *)facebookPlacesID;
-(void)setLocationCoord:(CLLocation *)arg1 ;
-(void)setStreetAddress:(NSString *)arg1 ;
-(void)setExternalSource:(NSString *)arg1 ;
-(void)setExternalIDSource:(NSString *)arg1 ;
-(void)setFoursquareV2ID:(NSString *)arg1 ;
-(void)setFacebookPlacesID:(NSString *)arg1 ;
-(void)openInMaps;
-(NSString *)externalIDSource;
-(void)setExternalID:(NSNumber *)arg1 ;
-(NSNumber *)externalID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSString *)detailsString;
-(BOOL)updateWithDictionary:(id)arg1 ;
-(long long)locationType;
@end

