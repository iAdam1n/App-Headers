/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface GSDK_PBArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	int _valueType;
	unsigned long long _capacity;
	unsigned long long _count;
	char* _data;

}

@property (nonatomic,readonly) int valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) const void* data; 
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)arrayWithValueType:(int)arg1 ;
+(id)arrayWithValues:(const void*)arg1 count:(unsigned long long)arg2 valueType:(int)arg3 ;
+(id)arrayWithArray:(id)arg1 valueType:(int)arg2 ;
+(id)arrayWithInt32:(int)arg1 ;
+(id)arrayWithInt32s:(int)arg1 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
-(/*function pointer*/void*)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithValueType:(int)arg1 ;
-(unsigned long long)uint64AtIndex:(unsigned long long)arg1 ;
-(id)initWithValues:(const void*)arg1 count:(unsigned long long)arg2 valueType:(int)arg3 ;
-(id)initWithCount:(unsigned long long)arg1 valueType:(int)arg2 ;
-(id)initWithArray:(id)arg1 valueType:(int)arg2 ;
-(id)initWithInt32:(int)arg1 ;
-(void)enumerateInt32sUsingBlock:(/*^block*/id)arg1 ;
-(int)int32AtIndex:(unsigned long long)arg1 ;
-(unsigned)uint32AtIndex:(unsigned long long)arg1 ;
-(id)arrayWithConversion:(/*^block*/id)arg1 ;
-(id)arrayByAppendingArray:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)array;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)data;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(float)floatAtIndex:(unsigned long long)arg1 ;
-(int)valueType;
@end

