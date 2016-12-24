/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBGraphQLConnectionSyncStoreListener.h>

@class NSString;

@interface FBGraphQLConnectionSyncStoreListenerAnnouncer : FBAnnouncerBase <FBGraphQLConnectionSyncStoreListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStoreDidReachEnd:(id)arg1 ;
-(void)connectionSyncStoreDidReachStart:(id)arg1 ;
-(void)connectionSyncStoreDidChangeContent:(id)arg1 ;
-(void)connectionSyncStoreDidReplaceCache:(id)arg1 ;
-(void)connectionSyncStore:(id)arg1 willUseFirstCachedResponse:(BOOL)arg2 ;
-(void)connectionSyncStoreDidStartRequest:(id)arg1 ;
-(void)connectionSyncStoreDidFinishRequest:(id)arg1 error:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4 ;
-(void)connectionSyncStoreWillPerformRequest:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
