/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/BITDomain.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface BITEventData : BITDomain <NSCoding> {

	NSString* _envelopeTypeName;
	NSString* _dataTypeName;
	NSNumber* _version;
	NSDictionary* _properties;
	NSDictionary* _measurements;

}

@property (nonatomic,copy,readonly) NSString * envelopeTypeName;              //@synthesize envelopeTypeName=_envelopeTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataTypeName;                  //@synthesize dataTypeName=_dataTypeName - In the implementation block
@property (nonatomic,retain) NSDictionary * measurements;                     //@synthesize measurements=_measurements - In the implementation block
-(id)serializeToDictionary;
-(NSString *)dataTypeName;
-(NSString *)envelopeTypeName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)properties;
-(NSDictionary *)measurements;
-(void)setMeasurements:(NSDictionary *)arg1 ;
@end
