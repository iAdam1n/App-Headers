/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>
#import <UIKit/UIActivityItemSource.h>

@class NSMutableArray, NSArray, NSAttributedString, NSString, PTHTweetbotBoundingBox, NSURL, NSDate, PTHTweetbotPlace, PTHTweetbotUser, NSNumber, NSOrderedSet, PTHTweetbotCursor;

@interface PTHTweetbotStatus : PTHTweetbotObject <UIActivityItemSource> {

	NSMutableArray* _refreshBlocks;
	BOOL _mentionsCurrentUser;
	BOOL _quotesCurrentUser;
	BOOL _favorited;
	BOOL _retweeted;
	BOOL _possiblySensitive;
	BOOL _missing;
	BOOL _refreshing;
	NSArray* _entities;
	NSAttributedString* _attributedText;
	NSString* _expandedURLText;
	PTHTweetbotBoundingBox* _boundingBox;
	NSString* _sourceText;
	NSURL* _sourceURL;
	NSDate* _createdAt;
	NSString* _text;
	long long _retweetedStatusTID;
	long long _replyStatusTID;
	long long _replyUserTID;
	unsigned long long _favoriteCount;
	unsigned long long _retweetCount;
	unsigned long long _replyCount;
	unsigned long long _quoteCount;
	NSString* _source;
	PTHTweetbotPlace* _place;
	NSString* _locationName;
	PTHTweetbotUser* _user;
	PTHTweetbotUser* _retweetedByUser;
	PTHTweetbotStatus* _quotedStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * entities;                                               //@synthesize entities=_entities - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) BOOL refreshing;                              //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,readonly) NSNumber * originalTIDValue; 
@property (nonatomic,readonly) NSDate * createdAt;                                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long retweetedStatusTID;                                   //@synthesize retweetedStatusTID=_retweetedStatusTID - In the implementation block
@property (nonatomic,readonly) long long originalTID; 
@property (nonatomic,readonly) long long replyStatusTID;                                       //@synthesize replyStatusTID=_replyStatusTID - In the implementation block
@property (nonatomic,readonly) long long replyUserTID;                                         //@synthesize replyUserTID=_replyUserTID - In the implementation block
@property (nonatomic,readonly) BOOL mentionsCurrentUser;                                       //@synthesize mentionsCurrentUser=_mentionsCurrentUser - In the implementation block
@property (nonatomic,readonly) BOOL quotesCurrentUser;                                         //@synthesize quotesCurrentUser=_quotesCurrentUser - In the implementation block
@property (assign,getter=isFavorited,nonatomic) BOOL favorited;                                //@synthesize favorited=_favorited - In the implementation block
@property (assign,nonatomic) unsigned long long favoriteCount;                                 //@synthesize favoriteCount=_favoriteCount - In the implementation block
@property (assign,getter=isRetweeted,nonatomic) BOOL retweeted;                                //@synthesize retweeted=_retweeted - In the implementation block
@property (assign,nonatomic) unsigned long long retweetCount;                                  //@synthesize retweetCount=_retweetCount - In the implementation block
@property (assign,nonatomic) unsigned long long replyCount;                                    //@synthesize replyCount=_replyCount - In the implementation block
@property (assign,nonatomic) unsigned long long quoteCount;                                    //@synthesize quoteCount=_quoteCount - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedText;                            //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,__weak,readonly) NSString * decodedText; 
@property (nonatomic,__weak,readonly) NSString * decodedTextByStrippingMentions; 
@property (nonatomic,readonly) NSString * expandedURLText;                                     //@synthesize expandedURLText=_expandedURLText - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceText;                                     //@synthesize sourceText=_sourceText - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                                              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) PTHTweetbotBoundingBox * boundingBox;                           //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) PTHTweetbotPlace * place;                                       //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) NSString * locationName;                                        //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,readonly) BOOL isRetweet; 
@property (nonatomic,readonly) BOOL canRetweet; 
@property (nonatomic,readonly) BOOL canUnretweet; 
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isReplyToSelf; 
@property (nonatomic,readonly) BOOL isReplyToCurrentUser; 
@property (nonatomic,readonly) BOOL isFromCurrentUser; 
@property (nonatomic,readonly) PTHTweetbotUser * user;                                         //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) long long userTID; 
@property (nonatomic,readonly) PTHTweetbotUser * retweetedByUser;                              //@synthesize retweetedByUser=_retweetedByUser - In the implementation block
@property (nonatomic,readonly) long long retweetedByUserTID; 
@property (nonatomic,__weak,readonly) NSOrderedSet * mentionedUsers; 
@property (nonatomic,readonly) BOOL hasMedia; 
@property (getter=isPossiblySensitive,nonatomic,readonly) BOOL possiblySensitive;              //@synthesize possiblySensitive=_possiblySensitive - In the implementation block
@property (nonatomic,__weak,readonly) NSURL * twitterURL; 
@property (nonatomic,__weak,readonly) NSURL * favstarURL; 
@property (nonatomic,__weak,readonly) NSString * emailHTML; 
@property (nonatomic,__weak,readonly) NSArray * replyScreenNames; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * retweetsCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * favoritesCursor; 
@property (getter=isMissing,nonatomic,readonly) BOOL missing;                                  //@synthesize missing=_missing - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatus * quotedStatus;                               //@synthesize quotedStatus=_quotedStatus - In the implementation block
+(id)statusFromDescriptor:(id)arg1 ;
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
+(id)newWithAccount:(id)arg1 tid:(long long)arg2 ;
+(void)postDraft:(id)arg1 progress:(/*^block*/id)arg2 result:(/*^block*/id)arg3 ;
+(void)lookupIfNeeded:(id)arg1 result:(/*^block*/id)arg2 ;
+(void)lookup:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)loadConversation:(/*^block*/id)arg1 ;
-(void)loadReplyThreads:(/*^block*/id)arg1 ;
-(void)_addReplyStatus:(id)arg1 statuses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addRepliesForStatus:(id)arg1 statuses:(id)arg2 statusesByReplyStatusTID:(id)arg3 ;
-(void)_loadFirstLevelReplies:(/*^block*/id)arg1 ;
-(id)_createReplyThreadsFromPossibleReplies:(id)arg1 ;
-(void)loadReplies:(/*^block*/id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)newDetailViewController;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(NSString *)decodedText;
-(NSString *)decodedTextByStrippingMentions;
-(unsigned long long)favoriteCount;
-(PTHTweetbotCursor *)favoritesCursor;
-(void)refreshIfNeeded:(/*^block*/id)arg1 ;
-(long long)userTID;
-(BOOL)hasString:(id)arg1 ;
-(BOOL)mentionsCurrentUser;
-(long long)replyUserTID;
-(long long)replyStatusTID;
-(void)destroy:(/*^block*/id)arg1 ;
-(NSString *)expandedURLText;
-(BOOL)isFromCurrentUser;
-(PTHTweetbotCursor *)retweetsCursor;
-(NSArray *)replyScreenNames;
-(BOOL)isFavorited;
-(void)setFavorited:(BOOL)arg1 ;
-(BOOL)isRetweet;
-(NSURL *)favstarURL;
-(BOOL)canRetweet;
-(void)retweet:(/*^block*/id)arg1 ;
-(BOOL)canUnretweet;
-(void)unretweet:(/*^block*/id)arg1 ;
-(void)favorite:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)retweetedByUser;
-(PTHTweetbotStatus *)quotedStatus;
-(id)attributedText:(BOOL)arg1 ;
-(BOOL)isMissing;
-(BOOL)isRetweeted;
-(long long)retweetedByUserTID;
-(NSString *)emailHTML;
-(BOOL)isReplyToSelf;
-(void)unfavorite:(/*^block*/id)arg1 ;
-(long long)originalTID;
-(void)updateFromDictionary:(id)arg1 ;
-(void)_refresh:(id)arg1 error:(id)arg2 ;
-(void)setFavoriteCount:(unsigned long long)arg1 ;
-(BOOL)isReplyToCurrentUser;
-(BOOL)_updateFromDictionary:(id)arg1 ;
-(void)_updateCountsFromDictionary:(id)arg1 ;
-(void)_loadSourceInfo;
-(NSNumber *)originalTIDValue;
-(void)_activityDidUpdate;
-(void)setReplyCount:(unsigned long long)arg1 ;
-(void)setQuoteCount:(unsigned long long)arg1 ;
-(NSOrderedSet *)mentionedUsers;
-(long long)retweetedStatusTID;
-(BOOL)quotesCurrentUser;
-(void)setRetweeted:(BOOL)arg1 ;
-(unsigned long long)replyCount;
-(unsigned long long)quoteCount;
-(BOOL)isPossiblySensitive;
-(PTHTweetbotUser *)user;
-(void)setEntities:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)source;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(PTHTweetbotBoundingBox *)boundingBox;
-(BOOL)isRefreshing;
-(PTHTweetbotPlace *)place;
-(void)setPlace:(PTHTweetbotPlace *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)locationName;
-(unsigned long long)retweetCount;
-(void)setRetweetCount:(unsigned long long)arg1 ;
-(BOOL)isReply;
-(BOOL)hasMedia;
-(NSArray *)entities;
-(NSDate *)createdAt;
-(void)refresh:(/*^block*/id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(NSString *)sourceText;
-(void)setRefreshing:(BOOL)arg1 ;
-(NSURL *)twitterURL;
@end
