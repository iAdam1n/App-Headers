/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WALinkedListNode, NSMutableDictionary;

@interface WALinkedList : NSObject {

	WALinkedListNode* _sentinel;
	NSMutableDictionary* _tokenNodeMap;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)removeObjectWithToken:(unsigned)arg1 ;
-(void)checkNilInput:(id)arg1 ;
-(void)addObjectToFront:(id)arg1 ;
-(void)checkBoundsForIndex:(unsigned long long)arg1 ;
-(id)objectForToken:(unsigned)arg1 ;
-(unsigned)markNode:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)iter;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
@end

