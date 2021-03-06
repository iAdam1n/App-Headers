/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSDate, NSDictionary, NSArray;

@interface ECCategoryMetadata : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	BOOL _hasPriceSensitiveElement;
	unsigned long long _mode;
	NSString* _categoryID;
	NSMutableDictionary* _properties;
	NSMutableArray* _attributes;
	NSDate* _cacheTime;
	NSString* _eTag;
	NSDate* _eTagTime;

}

@property (nonatomic,retain) NSString * categoryID;                                    //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * properties;                         //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasPriceSensitiveElement;                            //@synthesize hasPriceSensitiveElement=_hasPriceSensitiveElement - In the implementation block
@property (nonatomic,__weak,readonly) NSDictionary * supportedProperties; 
@property (nonatomic,__weak,readonly) NSArray * supportedAttributes; 
@property (nonatomic,retain) NSDate * cacheTime;                                       //@synthesize cacheTime=_cacheTime - In the implementation block
@property (nonatomic,retain) NSString * eTag;                                          //@synthesize eTag=_eTag - In the implementation block
@property (nonatomic,retain) NSDate * eTagTime;                                        //@synthesize eTagTime=_eTagTime - In the implementation block
+(BOOL)metaDataElement:(id)arg1 isSupportedForMode:(unsigned long long)arg2 ;
+(id)newMetadataWithMode:(unsigned long long)arg1 forCategoryID:(id)arg2 ;
+(unsigned long long)modeWithModeString:(id)arg1 ;
+(id)modeStringWithMode:(unsigned long long)arg1 ;
+(id)metadataFromAPIMetadata:(id)arg1 withMode:(unsigned long long)arg2 forCategoryID:(id)arg3 ;
+(long long)version;
-(void)setETag:(NSString *)arg1 ;
-(NSString *)eTag;
-(void)setCategoryID:(NSString *)arg1 ;
-(id)elementByName:(id)arg1 ;
-(BOOL)hasPriceSensitiveElement;
-(BOOL)metaDataElementIsSupported:(id)arg1 ;
-(unsigned long long)fractionalDigitsForMetadataKey:(id)arg1 ;
-(NSArray *)supportedAttributes;
-(NSDate *)eTagTime;
-(void)setCacheTime:(NSDate *)arg1 ;
-(NSDate *)cacheTime;
-(void)addPropertyElement:(id)arg1 ;
-(void)addAttributeElement:(id)arg1 ;
-(void)setHasPriceSensitiveElement:(BOOL)arg1 ;
-(void)setETagTime:(NSDate *)arg1 ;
-(id)propertyNamed:(id)arg1 ;
-(id)attributeNamed:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributes;
-(NSMutableDictionary *)properties;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(NSDictionary *)supportedProperties;
-(NSString *)categoryID;
@end

