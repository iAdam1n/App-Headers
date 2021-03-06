/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBLocationManagerLocation : FBGraphQLInput {

	NSNumber* _ageMs;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _accuracyMeters;
	NSNumber* _speedMetersPerSecond;
	NSNumber* _altitudeMeters;
	NSNumber* _altitudeAccuracyMeters;
	NSNumber* _bearingDegrees;

}

@property (nonatomic,copy) NSNumber * ageMs;                               //@synthesize ageMs=_ageMs - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * accuracyMeters;                      //@synthesize accuracyMeters=_accuracyMeters - In the implementation block
@property (nonatomic,copy) NSNumber * speedMetersPerSecond;                //@synthesize speedMetersPerSecond=_speedMetersPerSecond - In the implementation block
@property (nonatomic,copy) NSNumber * altitudeMeters;                      //@synthesize altitudeMeters=_altitudeMeters - In the implementation block
@property (nonatomic,copy) NSNumber * altitudeAccuracyMeters;              //@synthesize altitudeAccuracyMeters=_altitudeAccuracyMeters - In the implementation block
@property (nonatomic,copy) NSNumber * bearingDegrees;                      //@synthesize bearingDegrees=_bearingDegrees - In the implementation block
-(void)setBearingDegrees:(NSNumber *)arg1 ;
-(NSNumber *)bearingDegrees;
-(NSNumber *)accuracyMeters;
-(NSNumber *)speedMetersPerSecond;
-(NSNumber *)altitudeMeters;
-(NSNumber *)altitudeAccuracyMeters;
-(void)setAccuracyMeters:(NSNumber *)arg1 ;
-(void)setSpeedMetersPerSecond:(NSNumber *)arg1 ;
-(void)setAltitudeMeters:(NSNumber *)arg1 ;
-(void)setAltitudeAccuracyMeters:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)ageMs;
-(void)setAgeMs:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end

