/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNDirectMessageInboxImpl, TFNDirectMessageModel, TFNTwitterSearchTypeaheadStore, NSArray;

@interface TFNDirectMessageSuggestionsDataSource : NSObject {

	BOOL _inboxCacheNeedsUpdate;
	BOOL _searchPrefetchCacheNeedsUpdate;
	TFNDirectMessageInboxImpl* _inbox;
	TFNDirectMessageModel* _directMessageModel;
	TFNTwitterSearchTypeaheadStore* _searchTypeaheadStore;
	NSArray* _inboxCache;
	NSArray* _searchPrefetchCache;
	NSArray* _existingUsers;

}

@property (nonatomic,readonly) TFNDirectMessageInboxImpl * inbox;                                  //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,readonly) TFNDirectMessageModel * directMessageModel;                         //@synthesize directMessageModel=_directMessageModel - In the implementation block
@property (nonatomic,readonly) TFNTwitterSearchTypeaheadStore * searchTypeaheadStore;              //@synthesize searchTypeaheadStore=_searchTypeaheadStore - In the implementation block
@property (nonatomic,retain) NSArray * inboxCache;                                                 //@synthesize inboxCache=_inboxCache - In the implementation block
@property (nonatomic,retain) NSArray * searchPrefetchCache;                                        //@synthesize searchPrefetchCache=_searchPrefetchCache - In the implementation block
@property (assign,nonatomic) BOOL inboxCacheNeedsUpdate;                                           //@synthesize inboxCacheNeedsUpdate=_inboxCacheNeedsUpdate - In the implementation block
@property (assign,nonatomic) BOOL searchPrefetchCacheNeedsUpdate;                                  //@synthesize searchPrefetchCacheNeedsUpdate=_searchPrefetchCacheNeedsUpdate - In the implementation block
@property (nonatomic,retain) NSArray * existingUsers;                                              //@synthesize existingUsers=_existingUsers - In the implementation block
+(unsigned long long)defaultMaxResults;
-(NSArray *)existingUsers;
-(TFNDirectMessageInboxImpl *)inbox;
-(id)suggestionsWithLimit:(unsigned long long)arg1 sortType:(long long)arg2 filterBlock:(/*^block*/id)arg3 ;
-(void)_inboxDidAddConversation:(id)arg1 ;
-(void)_inboxDidRemoveConversation:(id)arg1 ;
-(void)_inboxDidReset:(id)arg1 ;
-(TFNDirectMessageModel *)directMessageModel;
-(BOOL)inboxCacheNeedsUpdate;
-(void)_refreshInboxConversationsCache;
-(BOOL)searchPrefetchCacheNeedsUpdate;
-(void)_refreshSearchTypeaheadPrefetchCacheWithLimit:(unsigned long long)arg1 ;
-(NSArray *)inboxCache;
-(NSArray *)searchPrefetchCache;
-(void)_inboxDidPaginateBackward:(id)arg1 ;
-(TFNTwitterSearchTypeaheadStore *)searchTypeaheadStore;
-(void)_prefetchDidUpdate:(id)arg1 ;
-(void)setInboxCache:(NSArray *)arg1 ;
-(void)_observeInboxUpdates;
-(void)setInboxCacheNeedsUpdate:(BOOL)arg1 ;
-(void)setSearchPrefetchCache:(NSArray *)arg1 ;
-(void)_observeSearchTypeaheadUpdates;
-(void)setSearchPrefetchCacheNeedsUpdate:(BOOL)arg1 ;
-(id)initWithInbox:(id)arg1 searchTypeaheadStore:(id)arg2 directMessageModel:(id)arg3 existingUsers:(id)arg4 ;
-(void)setExistingUsers:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
@end

