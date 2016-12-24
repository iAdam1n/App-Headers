/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStoreSimpleDeleteController.h>

@class FBUserSession, NSMapTable, NSMutableArray, NSMutableDictionary, FBMediaSetStoreManagerListenerAnnouncer, NSString;

@interface FBMediaSetStoreManager : NSObject <FBGraphQLConnectionStoreSimpleDeleteController> {

	FBUserSession* _session;
	NSMapTable* _storeMap;
	NSMutableArray* _deletedFilters;
	NSMutableDictionary* _tmpDeletedFiltersByMediaSetID;
	FBMediaSetStoreManagerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionStoreSimple:(id)arg1 deleteNodesWithGraphQLIDs:(id)arg2 ;
-(void)deleteMediaWithID:(id)arg1 ;
-(void)deleteMediaWithIDs:(id)arg1 ;
-(id)_filterMediaObjects:(id)arg1 ;
-(id)mediaSetStoreWithRequestProvider:(id)arg1 networkRequestThresholdInSeconds:(int)arg2 alwaysUseFirstCachedResponse:(BOOL)arg3 initialMediaObjects:(id)arg4 filterInitialMediaObjects:(BOOL)arg5 ;
-(id)_edgeStoreWithMediaSetID:(id)arg1 initialMediaObjects:(id)arg2 filterInitialMediaObjects:(BOOL)arg3 requestProvider:(id)arg4 ;
-(id)_allDeletedMediaIDs;
-(id)mediaArrayStoreWithMedia:(id)arg1 filterInitialMediaObjects:(BOOL)arg2 ;
-(id)mediaSetStoreWithRequestProvider:(id)arg1 networkRequestThresholdInSeconds:(int)arg2 alwaysUseFirstCachedResponse:(BOOL)arg3 initialMediaObjects:(id)arg4 ;
-(void)temporaryDeleteMediaWithIDS:(id)arg1 forMediaSetID:(id)arg2 ;
-(void)clearTemporaryDeletedMediaForMediaSetID:(id)arg1 ;
-(void)shouldRefreshMediaNodes:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
