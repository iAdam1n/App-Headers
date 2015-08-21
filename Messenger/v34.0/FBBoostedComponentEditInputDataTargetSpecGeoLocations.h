/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray;

@interface FBBoostedComponentEditInputDataTargetSpecGeoLocations : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSArray* _countries;
	NSArray* _regionKeys;
	NSArray* _cityKeys;
	NSArray* _zipKeys;
	NSArray* _customLocations;
	NSArray* _locationTypes;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSArray * countries;                              //@synthesize countries=_countries - In the implementation block
@property (nonatomic,copy) NSArray * regionKeys;                             //@synthesize regionKeys=_regionKeys - In the implementation block
@property (nonatomic,copy) NSArray * cityKeys;                               //@synthesize cityKeys=_cityKeys - In the implementation block
@property (nonatomic,copy) NSArray * zipKeys;                                //@synthesize zipKeys=_zipKeys - In the implementation block
@property (nonatomic,copy) NSArray * customLocations;                        //@synthesize customLocations=_customLocations - In the implementation block
@property (nonatomic,copy) NSArray * locationTypes;                          //@synthesize locationTypes=_locationTypes - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSArray *)regionKeys;
-(void)setRegionKeys:(NSArray *)arg1 ;
-(NSArray *)cityKeys;
-(void)setCityKeys:(NSArray *)arg1 ;
-(NSArray *)zipKeys;
-(void)setZipKeys:(NSArray *)arg1 ;
-(NSArray *)customLocations;
-(void)setCustomLocations:(NSArray *)arg1 ;
-(NSArray *)locationTypes;
-(void)setLocationTypes:(NSArray *)arg1 ;
-(void)setCountries:(NSArray *)arg1 ;
-(NSArray *)countries;
@end

