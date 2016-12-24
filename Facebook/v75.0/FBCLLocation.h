/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Facebook/FBLocationUpdate.h>

@class NSDate, CLLocation, FBCLWifiNetwork, FBBluetoothDataList;

@interface FBCLLocation : NSObject <NSCoding, FBLocationUpdate> {

	CLLocation* _location;
	FBCLWifiNetwork* _connectedWifi;
	FBBluetoothDataList* _bluetoothDataList;

}

@property (nonatomic,readonly) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) FBCLWifiNetwork * connectedWifi;                      //@synthesize connectedWifi=_connectedWifi - In the implementation block
@property (nonatomic,readonly) FBBluetoothDataList * bluetoothDataList;              //@synthesize bluetoothDataList=_bluetoothDataList - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(id)createWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
+(id)createWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
-(id)initWithLocation:(id)arg1 connectedWifi:(id)arg2 bluetoothDataList:(id)arg3 ;
-(FBCLWifiNetwork *)connectedWifi;
-(FBBluetoothDataList *)bluetoothDataList;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(double)speed;
-(id)dictionaryRepresentation;
-(CLLocation *)location;
-(double)altitude;
-(double)course;
-(CLLocationCoordinate2D)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
@end
