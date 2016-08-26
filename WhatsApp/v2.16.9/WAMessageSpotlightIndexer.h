/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex;

@interface WAMessageSpotlightIndexer : NSObject {

	CSSearchableIndex* _searchIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchIndex;              //@synthesize searchIndex=_searchIndex - In the implementation block
-(void)unindexMessagesWithJID:(id)arg1 ;
-(void)unindexAllMessages;
-(void)unindexMessageWithUniqueKey:(id)arg1 ;
-(void)resetStatusOfAllMessagesInContext:(id)arg1 ;
-(void)reindexSpotlightIDs:(id)arg1 inContext:(id)arg2 ;
-(id)searchableItemForMessage:(id)arg1 ;
-(id)searchIDForUniqueKey:(id)arg1 ;
-(long long)indexMessagesOfCount:(unsigned long long)arg1 inContext:(id)arg2 ;
-(void)resetStatusOfMessagesInChatSession:(id)arg1 inContext:(id)arg2 ;
-(id)init;
-(CSSearchableIndex *)searchIndex;
-(void)setSearchIndex:(CSSearchableIndex *)arg1 ;
@end
