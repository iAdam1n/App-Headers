/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableArray;

@interface FBFlattenedArrayController : NSObject {

	NSMutableArray* _chunks;

}
-(BOOL)hasChunkBoundaryAfterObjectAtIndex:(unsigned long long)arg1 ;
-(id)underlyingIndexPathForIndex:(unsigned long long)arg1 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)insertChunkWithObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)removeChunksAtIndexes:(id)arg1 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)mergeChunkAtIndexWithPrecedingChunk:(unsigned long long)arg1 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)insertObjectsAtIndexPaths:(id)arg1 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)removeObjectsAtIndexPaths:(id)arg1 ;
-(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)replaceObjectsAtIndexPaths:(id)arg1 ;
-(unsigned long long)countForChunksInRange:(NSRange)arg1 ;
-(NSRange)_locationForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_countOfObjectsBeforeChunkAtIndex:(unsigned long long)arg1 ;
-(id)_processObjects:(id)arg1 withChunkMap:(const map<unsigned long, NSIndexPath *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSIndexPath *> > >*)arg2 chunkIndex:(unsigned long long)arg3 countOfObjectsBeforeChunk:(unsigned long long)arg4 changeType:(unsigned long long)arg5 intoChangeList:(vector<FBFlattenedArrayControllerChange, std::__1::allocator<FBFlattenedArrayControllerChange> >*)arg6 ;
-(void)_enumerateChunkedSortedIndexPaths:(id)arg1 order:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)allObjects;
-(unsigned long long)chunkCount;
@end
