/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@class YapCacheItem, NSSet;

@interface YapCache : NSObject {

	CFDictionaryRef cfdict;
	unsigned long long countLimit;
	YapCacheItem* mostRecentCacheItem;
	YapCacheItem* leastRecentCacheItem;
	YapCacheItem* evictedCacheItem;
	NSSet* allowedKeyClasses;
	NSSet* allowedObjectClasses;

}

@property (assign,nonatomic) unsigned long long countLimit; 
@property (nonatomic,copy) NSSet * allowedKeyClasses; 
@property (nonatomic,copy) NSSet * allowedObjectClasses; 
-(id)initWithCountLimit:(unsigned long long)arg1 keyCallbacks:(SCD_Struct_Ya48*)arg2 ;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
-(void)enumerateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateKeysAndObjectsWithBlock:(/*^block*/id)arg1 ;
-(NSSet *)allowedKeyClasses;
-(void)setAllowedKeyClasses:(NSSet *)arg1 ;
-(NSSet *)allowedObjectClasses;
-(void)setAllowedObjectClasses:(NSSet *)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(unsigned long long)countLimit;
@end

