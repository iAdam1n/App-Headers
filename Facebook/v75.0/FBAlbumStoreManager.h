/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreSimpleDeleteController.h>

@class FBUserSession, NSMapTable, NSMutableArray, FBAlbumStoreManagerListenerAnnouncer, FBAlbumStoreEdgeHandler, NSString;

@interface FBAlbumStoreManager : NSObject <FBGraphQLConnectionStoreSimpleDeleteController> {

	FBUserSession* _session;
	NSMapTable* _storeMap;
	NSMutableArray* _deletedFilters;
	FBAlbumStoreManagerListenerAnnouncer* _announcer;
	FBAlbumStoreEdgeHandler* _edgeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)albumStoreWithRequestProvider:(id)arg1 networkRequestThresholdInSeconds:(int)arg2 alwaysUseFirstCachedResponse:(BOOL)arg3 initialAlbums:(id)arg4 ;
-(void)deleteAlbumsWithIDs:(id)arg1 ;
-(void)_applyDeleteFilters;
-(id)_edgeStoreWithInitialNodes:(id)arg1 requestProvider:(id)arg2 ;
-(id)_allDeletedAlbumIds;
-(void)graphQLConnectionStoreSimple:(id)arg1 deleteNodesWithGraphQLIDs:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
