/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber;

@interface FBBuffer : NSObject {

	NSMutableDictionary* _store;
	unsigned long long _keyOrder;
	unsigned long long _objectOrder;
	long long _removalKeyIndex;
	unsigned long long _count;
	NSNumber* _maxCount;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSNumber * maxCount;                       //@synthesize maxCount=_maxCount - In the implementation block
-(id)initWithKeyOrder:(unsigned long long)arg1 objectOrder:(unsigned long long)arg2 ;
-(id)removeObject;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(NSNumber *)maxCount;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setMaxCount:(NSNumber *)arg1 ;
@end
