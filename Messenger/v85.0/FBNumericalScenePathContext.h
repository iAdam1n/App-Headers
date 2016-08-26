/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScenePathContext.h>

@class NSMapTable;

@interface FBNumericalScenePathContext : FBScenePathContext {

	NSMapTable* _indexToPath;
	NSMapTable* _indexToHolder;
	unordered_map<unsigned long, unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _pathToIndex;
	unsigned long long _maxRelevantSiblingDistance;
	mutex _lock;

}
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 maxRelevantSiblingDistance:(unsigned long long)arg3 ;
-(void)updateActiveIndex:(unsigned long long)arg1 ;
-(id)pathForIndex:(unsigned long long)arg1 ;
-(id)_holderForIndex:(unsigned long long)arg1 ;
-(void)invalidateIndex:(unsigned long long)arg1 ;
-(float)distanceBetweenChildPath:(unsigned long long)arg1 andSibling:(unsigned long long)arg2 ;
@end
