/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemSearchCombinedResultsEdge, NSArray, FBMemGraphSearchQuery, NSString, UIImage, FBUserSession;

@interface FBSearchResultsBootstrapEntityModuleModel : NSObject {

	FBMemSearchCombinedResultsEdge* _serverModuleEdge;
	NSArray* _mergedEntities;
	FBMemGraphSearchQuery* _seeMoreQuery;
	unsigned long long _mergeState;
	NSArray* _simpleSearchSuggestions;
	NSString* _title;
	UIImage* _icon;
	NSString* _keyword;
	FBUserSession* _session;

}

@property (nonatomic,copy,readonly) NSString * keyword;                                        //@synthesize keyword=_keyword - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeState;                                  //@synthesize mergeState=_mergeState - In the implementation block
@property (nonatomic,readonly) FBMemSearchCombinedResultsEdge * serverModuleEdge; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * seeMoreQuery; 
@property (nonatomic,copy,readonly) NSArray * simpleSearchSuggestions;                         //@synthesize simpleSearchSuggestions=_simpleSearchSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mergedEntities; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                 //@synthesize icon=_icon - In the implementation block
+(id)_filterSuggestionsToSingleResultType:(id)arg1 ;
+(id)_titleFromSuggestions:(id)arg1 ;
+(id)_iconFromSuggestions:(id)arg1 ;
+(id)_mergeInResultEdges:(id)arg1 toSuggestions:(id)arg2 ;
+(unsigned long long*)_unifiedResultTypeForSuggestions:(id)arg1 ;
+(id)finalizedModelFromModel:(id)arg1 ;
+(id)mergedForNativeTemplatesFromModel:(id)arg1 ;
+(id)mergeInModuleEdge:(id)arg1 toModel:(id)arg2 ;
-(FBMemGraphSearchQuery *)seeMoreQuery;
-(id)initWithSimpleSearchSuggestions:(id)arg1 mergedEntities:(id)arg2 seeMoreQuery:(id)arg3 serverModuleEdge:(id)arg4 mergeState:(unsigned long long)arg5 keyword:(id)arg6 session:(id)arg7 ;
-(unsigned long long)mergeState;
-(BOOL)supportsMerging;
-(NSArray *)simpleSearchSuggestions;
-(id)initWithSimpleSearchSuggestions:(id)arg1 supportMerging:(BOOL)arg2 keyword:(id)arg3 session:(id)arg4 ;
-(NSArray *)mergedEntities;
-(FBMemSearchCombinedResultsEdge *)serverModuleEdge;
-(id)roleForLogging;
-(NSString *)title;
-(UIImage *)icon;
-(unsigned long long)resultType;
-(FBUserSession *)session;
-(NSString *)keyword;
@end
