/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber;

@interface FBGravityGeoLocation : FBGraphQLInput {

	NSNumber* _pulsarRssi;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _horizontalAccuracy;
	NSNumber* _verticalAccuracy;
	NSNumber* _clientLocationTime;
	NSNumber* _clientCurrentTime;

}

@property (nonatomic,copy) NSNumber * pulsarRssi;                      //@synthesize pulsarRssi=_pulsarRssi - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * clientLocationTime;              //@synthesize clientLocationTime=_clientLocationTime - In the implementation block
@property (nonatomic,copy) NSNumber * clientCurrentTime;               //@synthesize clientCurrentTime=_clientCurrentTime - In the implementation block
-(void)setClientCurrentTime:(NSNumber *)arg1 ;
-(void)setClientLocationTime:(NSNumber *)arg1 ;
-(void)setPulsarRssi:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)pulsarRssi;
-(NSNumber *)clientLocationTime;
-(NSNumber *)clientCurrentTime;
-(void)setHorizontalAccuracy:(NSNumber *)arg1 ;
-(void)setVerticalAccuracy:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)verticalAccuracy;
-(NSNumber *)horizontalAccuracy;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end
