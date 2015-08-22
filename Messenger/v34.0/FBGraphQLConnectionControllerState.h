/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStateInterface.h>

@class FBGraphQLConnectionStoreState, FBGraphQLConnectionLocation, NSArray, NSString;

@interface FBGraphQLConnectionControllerState : NSObject <FBGraphQLConnectionStateInterface> {

	FBGraphQLConnectionStoreState* _storeState;
	FBGraphQLConnectionLocation* _initialLocation;
	NSArray* _chunks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)connectionChunkAtIndex:(unsigned long long)arg1 ;
-(void)enumerateConnectionChunksUsingBlock:(/*^block*/id)arg1 ;
-(id)initialConnectionLocation;
-(id)headConnectionLocation;
-(id)tailConnectionLocation;
-(unsigned long long)numberOfChunks;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
-(id)tailLocation;
-(id)edgesInAllChunks;
-(id)stateByUpdatingLocation:(id)arg1 ;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgesAtIndexPaths:(id)arg1 ;
-(id)headLocation;
-(void)enumerateEdgesInChunk:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesAtIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)edgesInChunkAtIndex:(unsigned long long)arg1 ;
-(id)chunkAtIndex:(unsigned long long)arg1 ;
-(id)initWithStoreState:(id)arg1 ;
-(id)stateByUpdatingStoreState:(id)arg1 ;
-(id)storeLocationForLocation:(id)arg1 ;
-(id)locationForCursor:(id)arg1 ;
-(id)initWithStoreState:(id)arg1 initialLocation:(id)arg2 chunks:(id)arg3 ;
-(id)afterLocationPriorToBeforeLocation:(id)arg1 ;
-(id)beforeLocationFollowingAfterLocation:(id)arg1 ;
-(id)storeState;
-(id)init;
-(id)initialLocation;
@end
