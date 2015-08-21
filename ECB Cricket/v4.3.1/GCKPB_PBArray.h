/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <ECBCricketApp/NSCopying.h>
#import <ECBCricketApp/NSMutableCopying.h>
#import <ECBCricketApp/NSFastEnumeration.h>

@interface GCKPB_PBArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

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
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithObject:(id)arg1 ;
-(/*function pointer*/void*)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithValues:(const void*)arg1 count:(unsigned long long)arg2 valueType:(int)arg3 ;
-(id)initWithCount:(unsigned long long)arg1 valueType:(int)arg2 ;
-(id)initWithValueType:(int)arg1 ;
-(id)initWithArray:(id)arg1 valueType:(int)arg2 ;
-(id)initWithInt32:(int)arg1 ;
-(void)enumerateInt32sUsingBlock:(/*^block*/id)arg1 ;
-(int)int32AtIndex:(unsigned long long)arg1 ;
-(unsigned)uint32AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)uint64AtIndex:(unsigned long long)arg1 ;
-(id)arrayWithConversion:(/*^block*/id)arg1 ;
-(id)arrayByAppendingArray:(id)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GC15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
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
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(float)floatAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(int)valueType;
@end

