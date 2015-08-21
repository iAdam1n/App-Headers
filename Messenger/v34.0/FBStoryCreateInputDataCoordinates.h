/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBStoryCreateInputDataCoordinates : FBGraphQLInput {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSNumber* _accuracy;
	NSNumber* _altitudeAccuracy;
	NSNumber* _heading;
	NSNumber* _speed;
	NSNumber* _timestamp;

}

@property (nonatomic,copy) NSNumber * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy) NSNumber * accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,copy) NSNumber * altitudeAccuracy;              //@synthesize altitudeAccuracy=_altitudeAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * heading;                       //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSNumber * speed;                         //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy) NSNumber * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)altitudeAccuracy;
-(void)setAltitudeAccuracy:(NSNumber *)arg1 ;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(void)setSpeed:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)speed;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setAltitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setHeading:(NSNumber *)arg1 ;
-(NSNumber *)altitude;
-(NSNumber *)accuracy;
-(NSNumber *)heading;
@end

