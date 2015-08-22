/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSFastEnumeration.h>

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
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_JK1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)orderedSet;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end
