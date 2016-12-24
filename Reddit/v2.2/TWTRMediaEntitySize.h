/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TWTRMediaEntitySize : NSObject <NSCoding> {

	NSString* _name;
	unsigned long long _resizingMode;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long resizingMode;              //@synthesize resizingMode=_resizingMode - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
+(id)mediaEntitySizesWithJSONDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 resizingMode:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isEqualToMediaEntitySize:(id)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)name;
-(unsigned long long)resizingMode;
@end
