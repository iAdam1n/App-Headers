/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet;

@interface FBMutableSortedSet : NSObject <NSFastEnumeration> {

	/*^block*/id _comparator;
	NSMutableOrderedSet* _orderedSet;

}

@property (nonatomic,copy) NSMutableOrderedSet * orderedSet;              //@synthesize orderedSet=_orderedSet - In the implementation block
+(id)sortedSetWithComparator:(/*^block*/id)arg1 ;
-(id)popLastObject;
-(unsigned long long)indexOfObjectComparedSameTo:(id)arg1 ;
-(id)objectComparedSameTo:(id)arg1 ;
-(id)popFirstObject;
-(void)setOrderedSet:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB110*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)orderedSet;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end
