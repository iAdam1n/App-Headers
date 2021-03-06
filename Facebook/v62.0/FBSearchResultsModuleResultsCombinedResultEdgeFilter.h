/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreEdgeFiltering.h>

@class FBUserSession, FBSearchResultsConfig, NSMutableDictionary, NSString;

@interface FBSearchResultsModuleResultsCombinedResultEdgeFilter : NSObject <FBGraphQLConnectionStoreEdgeFiltering> {

	FBUserSession* _session;
	FBSearchResultsConfig* _config;
	NSMutableDictionary* _invalidEdges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isValidEdge:(id)arg1 ;
-(BOOL)_isValidModuleEdge:(id)arg1 ;
-(BOOL)_isValidResultEdge:(id)arg1 ;
-(BOOL)_shouldBypassFilterWithInvalidEdge:(id)arg1 errorMessage:(id)arg2 ;
-(id)filteredEdgesFromEdgesToBeAdded:(id)arg1 atChunkIndex:(unsigned long long)arg2 state:(id)arg3 locationType:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 invalidEdges:(id)arg3 ;
@end

