/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface GADLocation : NSObject <NSCopying> {

	double _latitude;
	double _longitude;
	double _accuracy;
	NSString* _locationDescription;
	NSDictionary* _dictionaryRepresentation;
	double _timestamp;

}

@property (nonatomic,readonly) BOOL isPreciseLocation; 
@property (nonatomic,readonly) double latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double accuracy;                                  //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,copy) NSString * locationDescription;                       //@synthesize locationDescription=_locationDescription - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isPreciseLocation;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 ;
-(id)initWithLocationDescription:(id)arg1 ;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)accuracy;
-(double)latitude;
-(double)longitude;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
@end

