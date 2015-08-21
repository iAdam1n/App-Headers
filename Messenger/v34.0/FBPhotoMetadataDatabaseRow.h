/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSData;

@interface FBPhotoMetadataDatabaseRow : FBValueObject <NSCopying, NSCoding> {

	BOOL _summaryUseDouble;
	NSString* _objectIdentifier;
	unsigned long long _propertyType;
	unsigned long long _summaryInteger;
	double _summaryDouble;
	NSData* _binaryData;

}

@property (nonatomic,copy,readonly) NSString * objectIdentifier;               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long propertyType;                //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,readonly) BOOL summaryUseDouble;                          //@synthesize summaryUseDouble=_summaryUseDouble - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryInteger;              //@synthesize summaryInteger=_summaryInteger - In the implementation block
@property (nonatomic,readonly) double summaryDouble;                           //@synthesize summaryDouble=_summaryDouble - In the implementation block
@property (nonatomic,copy,readonly) NSData * binaryData;                       //@synthesize binaryData=_binaryData - In the implementation block
-(id)initWithObjectIdentifier:(id)arg1 propertyType:(unsigned long long)arg2 summaryUseDouble:(BOOL)arg3 summaryInteger:(unsigned long long)arg4 summaryDouble:(double)arg5 binaryData:(id)arg6 ;
-(BOOL)summaryUseDouble;
-(double)summaryDouble;
-(unsigned long long)summaryInteger;
-(NSData *)binaryData;
-(unsigned long long)propertyType;
-(NSString *)objectIdentifier;
@end

