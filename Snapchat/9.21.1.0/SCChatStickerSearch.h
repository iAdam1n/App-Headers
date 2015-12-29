//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EGODatabase, EGODatabaseStatement, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface SCChatStickerSearch : NSObject
{
    EGODatabase *_database;
    NSMutableSet *_publishedStickerPackIds;
    NSMutableDictionary *_stickerPriorities;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    EGODatabaseStatement *_stickerTagInsertion;
    EGODatabaseStatement *_stickerTagTableDeletion;
    EGODatabaseStatement *_stickerTagSearchByStringMatching;
    EGODatabaseStatement *_stickerSynonymInsertion;
    EGODatabaseStatement *_stickerSynonymTableDeletion;
    EGODatabaseStatement *_stickerSynonymSearchByStringMatching;
    long long _maxSearchResults;
    id <SCChatStickerSearchDelegate> _delegate;
    NSArray *_searchResults;
}

@property(readonly, copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <SCChatStickerSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showSynoymTableContent;
- (void)_showTagTableContent;
- (id)_generateWordWithSynonym:(id)arg1;
- (id)_replaceSynonymsWithText:(id)arg1;
- (void)searchStickersWithText:(id)arg1;
- (void)_insertSynonyms:(id)arg1;
- (void)_insertTags:(id)arg1;
- (void)_retryFetchingMetadataWithSearchPack:(id)arg1;
- (void)_updateDatabaseWithResponseDictionary:(id)arg1;
- (void)_fetchStickerSearchMetadataWithSearchPack:(id)arg1;
- (long long)_fetchLocalStickerSearchPackVersion;
- (void)updateWithSearchPack:(id)arg1;
- (void)addActivePackId:(id)arg1;
- (void)addSticker:(id)arg1 priority:(id)arg2;
- (void)_setupDatabase;
- (id)initWithDelegate:(id)arg1;

@end
