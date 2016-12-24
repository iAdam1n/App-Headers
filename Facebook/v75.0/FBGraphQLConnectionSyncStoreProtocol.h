/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath;


@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@required
-(FBScenePath *)scenePath;
-(void)setScenePath:(id)arg1;
-(void)syncNext:(/*^block*/id)arg1;
-(void)forceRefresh:(/*^block*/id)arg1;
-(BOOL)canSyncMoreNext;
-(unsigned long long)countOfNodes;
-(unsigned long long)indexOfNode:(id)arg1;
-(void)applyFilter:(id)arg1;
-(BOOL)nodeIsSynced:(id)arg1;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1;
-(void)updateNodes:(id)arg1;
-(id)allNodes;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;
-(id)nodeAtIndex:(unsigned long long)arg1;

@end
