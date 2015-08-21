/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSMutableCopying.h>
#import <Messenger/NSFastEnumeration.h>

@interface FBOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >* _map;
	/*^block*/id _comparator;

}
-(id)initWithDictionary:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 comparator:(/*^block*/id)arg3 ;
-(id)initWithMapAndComparator:(map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >*)arg1 comparator:(/*^block*/id)arg2 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_JK1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

