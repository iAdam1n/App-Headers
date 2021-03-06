/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>
#import <Facebook/FBGraphQLConnectionControllerNetworkListener.h>
#import <Facebook/FBGraphQLConnectionControllerLoadListener.h>

@protocol OS_dispatch_queue;
@class FBSessionedFeedUDPPrimingManager, FBHttpUpperStack, NSObject, NSMutableDictionary, NSString;

@interface FBFeedUDPPrimingManagerConnectionListener : NSObject <FBStreamListener, FBGraphQLConnectionControllerNetworkListener, FBGraphQLConnectionControllerLoadListener> {

	FBSessionedFeedUDPPrimingManager* _feedUDPPrimingManager;
	FBHttpUpperStack* _requestTransformer;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _needsPacketGeneration;
	NSMutableDictionary* _networkLoadUUIDToBeforeCursor;
	NSString* _pendingLocationIdentifier;
	NSString* _pendingPrimingToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 rawResponse:(id)arg4 responseUUID:(id)arg5 responseStatus:(id)arg6 timestamp:(double)arg7 responseChunkResults:(id)arg8 expectedResponseChunks:(unsigned long long)arg9 userInfo:(id)arg10 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)_setNeedsGQLCCPacketGenerationInController:(id)arg1 primingToken:(id)arg2 locationIdentifier:(id)arg3 ;
-(void)_generateGQLCCPacket;
-(id)initWithFeedUDPPrimingManager:(id)arg1 requestTransformer:(id)arg2 ;
@end

