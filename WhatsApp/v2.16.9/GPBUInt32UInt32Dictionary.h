/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:06 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32UInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)dictionaryWithValue:(unsigned)arg1 forKey:(unsigned)arg2 ;
+(id)dictionaryWithValues:(const unsigned*)arg1 forKeys:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned long long)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithValues:(const unsigned*)arg1 forKeys:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(BOOL)valueForKey:(unsigned)arg1 value:(unsigned*)arg2 ;
-(void)setValue:(unsigned)arg1 forKey:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(void)removeValueForKey:(unsigned)arg1 ;
-(void)enumerateKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
@end

