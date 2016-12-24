/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBGeocodeAddressStreet, FBGeocodeAddressCity;

@interface FBGeocodeAddress : FBGraphQLInput {

	NSString* _streetNumber;
	FBGeocodeAddressStreet* _street;
	FBGeocodeAddressCity* _city;
	NSString* _streetAddress;

}

@property (nonatomic,copy) NSString * streetNumber;                      //@synthesize streetNumber=_streetNumber - In the implementation block
@property (nonatomic,copy) FBGeocodeAddressStreet * street;              //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) FBGeocodeAddressCity * city;                  //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * streetAddress;                     //@synthesize streetAddress=_streetAddress - In the implementation block
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(NSString *)streetNumber;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setStreetNumber:(NSString *)arg1 ;
-(FBGeocodeAddressStreet *)street;
-(void)setStreet:(FBGeocodeAddressStreet *)arg1 ;
-(void)setCity:(FBGeocodeAddressCity *)arg1 ;
-(FBGeocodeAddressCity *)city;
@end
