/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBObjectToDictionaryMapDelegate;
@class NSMutableDictionary, NSSet;

@interface FBObjectToDictionaryMap : NSObject <NSCopying> {

	unsigned long long _key1Options;
	unsigned long long _key2Options;
	NSMutableDictionary* _map;
	unsigned long long _valueOptions;
	BOOL _allowValueReplacements;
	id<FBObjectToDictionaryMapDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSSet * allKeys; 
@property (assign,nonatomic) id<FBObjectToDictionaryMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowValueReplacements;                               //@synthesize allowValueReplacements=_allowValueReplacements - In the implementation block
-(id)initWithKey1Options:(unsigned long long)arg1 key2Options:(unsigned long long)arg2 valueOptions:(unsigned long long)arg3 ;
-(id)_dictionaryForKey1:(id)arg1 ;
-(id)_objectFromDictionary:(id)arg1 forKey2:(id)arg2 ;
-(void)_notifyDelegateDidRemoveObjects:(id)arg1 forKey1:(id)arg2 ;
-(BOOL)containsObjectsForKey1:(id)arg1 ;
-(BOOL)containsObjectForKey1:(id)arg1 key2:(id)arg2 ;
-(id)objectsForKey1:(id)arg1 ;
-(void)removeAllObjectsForKey1:(id)arg1 ;
-(void)removeObjectForKey1:(id)arg1 key2:(id)arg2 ;
-(BOOL)allowValueReplacements;
-(void)setAllowValueReplacements:(BOOL)arg1 ;
-(void)_removeAllObjectsForAllKeys:(BOOL)arg1 ;
-(void)_enumerateDictionary:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyDelegateDidRemoveAllObjectsFromMap:(id)arg1 ;
-(void)removeAllObjectsForAllKeys;
-(void)setDelegate:(id<FBObjectToDictionaryMapDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<FBObjectToDictionaryMapDelegate>)delegate;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey1:(id)arg1 key2:(id)arg2 ;
-(BOOL)setObject:(id)arg1 forKey1:(id)arg2 key2:(id)arg3 ;
@end
