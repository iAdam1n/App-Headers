/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSOrderedSet;

@interface FBAggregatedEntitiesAtRange : NSObject {

	NSNumber* _offset;
	NSNumber* _length;
	NSOrderedSet* _sampleEntities;

}

@property (nonatomic,copy) NSNumber * offset;                          //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) NSNumber * length;                          //@synthesize length=_length - In the implementation block
@property (nonatomic,copy) NSOrderedSet * sampleEntities;              //@synthesize sampleEntities=_sampleEntities - In the implementation block
+(id)graphQLTypeName;
+(id)entityName;
-(void)setSampleEntities:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)sampleEntities;
-(NSNumber *)length;
-(void)setOffset:(NSNumber *)arg1 ;
-(NSNumber *)offset;
-(void)setLength:(NSNumber *)arg1 ;
@end
