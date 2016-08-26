/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBLocationManagerWifiScan : FBGraphQLInput {

	NSNumber* _ageMs;
	NSString* _hardwareAddress;
	NSNumber* _rssiDbm;
	NSString* _networkName;
	NSNumber* _frequencyMhz;

}

@property (nonatomic,copy) NSNumber * ageMs;                        //@synthesize ageMs=_ageMs - In the implementation block
@property (nonatomic,copy) NSString * hardwareAddress;              //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (nonatomic,copy) NSNumber * rssiDbm;                      //@synthesize rssiDbm=_rssiDbm - In the implementation block
@property (nonatomic,copy) NSString * networkName;                  //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,copy) NSNumber * frequencyMhz;                 //@synthesize frequencyMhz=_frequencyMhz - In the implementation block
-(NSString *)hardwareAddress;
-(void)setAgeMs:(NSNumber *)arg1 ;
-(void)setRssiDbm:(NSNumber *)arg1 ;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)ageMs;
-(NSNumber *)rssiDbm;
-(NSNumber *)frequencyMhz;
-(void)setFrequencyMhz:(NSNumber *)arg1 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
@end
