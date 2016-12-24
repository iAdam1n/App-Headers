/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStateInterface <NSObject>
@required
-(id)headConnectionLocation;
-(id)tailConnectionLocation;
-(id)edgesInChunkAtIndex:(unsigned long long)arg1;
-(id)edgesAtIndexPaths:(id)arg1;
-(id)edgesInAllChunks;
-(unsigned long long)numberOfChunks;
-(void)enumerateEdgesInChunk:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;
-(id)initialConnectionLocation;
-(id)connectionChunkAtIndex:(unsigned long long)arg1;
-(void)enumerateConnectionChunksUsingBlock:(/*^block*/id)arg1;
-(id)connectionStateByRemovingChunksAtIndexes:(id)arg1;
-(void)enumerateEdgesAtIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1;

@end
