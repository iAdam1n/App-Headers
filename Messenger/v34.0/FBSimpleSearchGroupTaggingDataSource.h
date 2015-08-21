/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSimpleSearchDataSource.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSAttributedString, NSMutableSet, NSMutableArray, NSMutableDictionary, FBKVOController, NSArray, NSSet, NSString;

@interface FBSimpleSearchGroupTaggingDataSource : FBSimpleSearchDataSource {

	FBUserSession* _session;
	NSAttributedString* _groupMembersSectionTitle;
	NSAttributedString* _othersSectionTitle;
	NSMutableSet* _groupMemberAvatars;
	NSMutableArray* _groupMemberQueryResults;
	NSMutableDictionary* _groupMemberQueryResultsCache;
	NSMutableArray* _queryResults;
	FBKVOController* _KVOController;
	id<FBServiceTransactionMutating> _token;
	BOOL _explicitMention;
	BOOL _canTagSelf;
	BOOL _isFetchingGroupMembers;
	unsigned long long _fetchLimit;
	NSArray* _avatarCollections;
	NSSet* _excludedIDs;
	NSString* _authorType;
	NSString* _groupID;

}

@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL explicitMention;                       //@synthesize explicitMention=_explicitMention - In the implementation block
@property (assign,nonatomic) BOOL canTagSelf;                            //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) BOOL isFetchingGroupMembers;              //@synthesize isFetchingGroupMembers=_isFetchingGroupMembers - In the implementation block
@property (nonatomic,copy) NSArray * avatarCollections;                  //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                          //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (nonatomic,copy) NSString * authorType;                        //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * groupID;                           //@synthesize groupID=_groupID - In the implementation block
-(id)createTableViewData:(id)arg1 isIndexAvailable:(BOOL)arg2 ;
-(id)bootstrapSuggestionsForQueryString:(id)arg1 indexReady:(BOOL*)arg2 ;
-(void)dedupeSuggestions:(id)arg1 ;
-(id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(NSArray *)avatarCollections;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(void)_downloadComposerGroupPublishTarget;
-(void)_updateSectionTitleWith:(id)arg1 ;
-(void)_resetTaggableCollectionAvatarState;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)setCanTagSelf:(BOOL)arg1 ;
-(BOOL)isFetchingGroupMembers;
-(BOOL)explicitMention;
-(void)setExplicitMention:(BOOL)arg1 ;
-(id)getNullState;
-(unsigned long long)fetchLimit;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setQueryString:(id)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)arg1 ;
@end

