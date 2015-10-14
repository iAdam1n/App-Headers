/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, PTHTweetbotAccount, NSMutableDictionary, NSString, NSDate, PTHTweetbotRateLimit, NSArray;

@interface PTHTweetbotCursor : NSObject <NSCoding> {

	NSMutableArray* _items;
	PTHTweetbotAccount* _account;
	NSMutableDictionary* _loadingTypeCompletionBlocks;
	BOOL _hasOlder;
	BOOL _streaming;
	BOOL _refreshed;
	BOOL _firstTime;
	NSString* _nextCursor;
	long long _sinceTID;
	NSDate* _updateDate;
	long long _gapTID;
	long long _displayTopTID;
	double _displayOffset;
	double _displayOffsetPercentage;
	long long _markedTID;
	long long _syncTID;
	unsigned long long _syncVersion;
	double _syncOffsetPercentage;
	long long _lastReadTID;
	unsigned long long _unreadItemCount;
	NSDate* _lastLoadNewerDate;

}

@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,__weak,readonly) PTHTweetbotRateLimit * rateLimit; 
@property (nonatomic,readonly) BOOL shouldLoadNewer; 
@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy) NSString * nextCursor;                                                //@synthesize nextCursor=_nextCursor - In the implementation block
@property (assign,nonatomic) long long sinceTID;                                                 //@synthesize sinceTID=_sinceTID - In the implementation block
@property (assign,getter=isStreaming,nonatomic) BOOL streaming;                                  //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,retain) NSDate * updateDate;                                                //@synthesize updateDate=_updateDate - In the implementation block
@property (nonatomic,readonly) double lastLoadNewerInterval; 
@property (nonatomic,readonly) BOOL canLoadNewer; 
@property (nonatomic,readonly) double loadNewerInterval; 
@property (getter=isLoadingNewer,nonatomic,readonly) BOOL loadingNewer; 
@property (nonatomic,readonly) BOOL hasOlder; 
@property (getter=isLoadingOlder,nonatomic,readonly) BOOL loadingOlder; 
@property (nonatomic,readonly) BOOL hasGap; 
@property (nonatomic,readonly) long long gapTID;                                                 //@synthesize gapTID=_gapTID - In the implementation block
@property (getter=isLoadingGap,nonatomic,readonly) BOOL loadingGap; 
@property (assign,nonatomic) long long displayTopTID;                                            //@synthesize displayTopTID=_displayTopTID - In the implementation block
@property (assign,nonatomic) double displayOffset;                                               //@synthesize displayOffset=_displayOffset - In the implementation block
@property (assign,nonatomic) double displayOffsetPercentage;                                     //@synthesize displayOffsetPercentage=_displayOffsetPercentage - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PT3 displayPosition; 
@property (assign,nonatomic) long long markedTID;                                                //@synthesize markedTID=_markedTID - In the implementation block
@property (nonatomic,readonly) BOOL canSync; 
@property (assign,nonatomic) long long syncTID;                                                  //@synthesize syncTID=_syncTID - In the implementation block
@property (assign,nonatomic) unsigned long long syncVersion;                                     //@synthesize syncVersion=_syncVersion - In the implementation block
@property (assign,nonatomic) double syncOffsetPercentage;                                        //@synthesize syncOffsetPercentage=_syncOffsetPercentage - In the implementation block
@property (nonatomic,readonly) BOOL hasReadStatus; 
@property (assign,nonatomic) long long lastReadTID;                                              //@synthesize lastReadTID=_lastReadTID - In the implementation block
@property (getter=isRead,nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) unsigned long long unreadItemCount;                               //@synthesize unreadItemCount=_unreadItemCount - In the implementation block
@property (nonatomic,readonly) BOOL needsSort; 
@property (nonatomic,readonly) BOOL shouldReload; 
@property (nonatomic,readonly) BOOL usesCursorPagination; 
@property (nonatomic,readonly) BOOL usesTIDPagination; 
@property (nonatomic,readonly) NSString * requestURLString; 
@property (nonatomic,__weak,readonly) NSMutableDictionary * queryDictionary; 
@property (nonatomic,__weak,readonly) NSMutableDictionary * olderQueryDictionary; 
@property (nonatomic,__weak,readonly) NSMutableDictionary * refreshQueryDictionary; 
@property (nonatomic,__weak,readonly) NSMutableDictionary * gapQueryDictionary; 
@property (nonatomic,retain) NSDate * lastLoadNewerDate;                                         //@synthesize lastLoadNewerDate=_lastLoadNewerDate - In the implementation block
@property (assign,getter=hasRefreshed,nonatomic) BOOL refreshed;                                 //@synthesize refreshed=_refreshed - In the implementation block
@property (assign,getter=isFirstTime,nonatomic) BOOL firstTime;                                  //@synthesize firstTime=_firstTime - In the implementation block
+(unsigned long long)itemSaveCount;
+(Class)itemClass;
-(BOOL)containsTID:(long long)arg1 ;
-(BOOL)shouldLoadNewer;
-(id)itemWithTID:(long long)arg1 ;
-(void)loadNewerIfNeeded:(/*^block*/id)arg1 ;
-(long long)nextTID:(long long)arg1 ;
-(PTHTweetbotRateLimit *)rateLimit;
-(long long)indexOfTID:(long long)arg1 ;
-(void)_loadAllOlder:(/*^block*/id)arg1 ;
-(void)loadAll:(/*^block*/id)arg1 ;
-(unsigned long long)itemCount;
-(void)loadNewer:(/*^block*/id)arg1 ;
-(BOOL)canLoadNewer;
-(BOOL)isLoadingNewer;
-(void)updateLastReadTIDIfNeeded:(long long)arg1 ;
-(long long)lastReadTID;
-(BOOL)hasRefreshed;
-(unsigned long long)unreadItemCount;
-(BOOL)hasGap;
-(long long)gapTID;
-(BOOL)hasOlder;
-(long long)displayTopTID;
-(unsigned long long)_unreadItemCount;
-(BOOL)needsSort;
-(void)setDisplayTopTID:(long long)arg1 ;
-(void)setDisplayOffset:(double)arg1 ;
-(void)setDisplayOffsetPercentage:(double)arg1 ;
-(void)setSyncTID:(long long)arg1 ;
-(void)setSyncOffsetPercentage:(double)arg1 ;
-(long long)syncTID;
-(double)syncOffsetPercentage;
-(double)displayOffsetPercentage;
-(double)lastLoadNewerInterval;
-(void)loadOlder:(/*^block*/id)arg1 ;
-(void)loadGap:(/*^block*/id)arg1 ;
-(BOOL)canAddItem:(id)arg1 ;
-(long long)sinceTID;
-(void)reallyLoadNewer:(/*^block*/id)arg1 ;
-(void)reallyLoadOlder:(/*^block*/id)arg1 ;
-(void)reallyLoadGap:(/*^block*/id)arg1 ;
-(BOOL)hasReadStatus;
-(BOOL)usesTIDPagination;
-(BOOL)canSync;
-(NSString *)requestURLString;
-(void)resetUnreadItemCount;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(id)newItemWithDictionary:(id)arg1 ;
-(void)setSinceTID:(long long)arg1 ;
-(BOOL)usesCursorPagination;
-(void)setNextCursor:(NSString *)arg1 ;
-(void)processItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 type:(int)arg2 block:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)refreshQueryDictionary;
-(id)requestForString:(id)arg1 dictionary:(id)arg2 ;
-(void)sendRequest:(id)arg1 type:(int)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)addCompletionBlock:(/*^block*/id)arg1 forLoadingType:(int)arg2 ;
-(BOOL)isFirstTime;
-(void)setLastLoadNewerDate:(NSDate *)arg1 ;
-(void)setFirstTime:(BOOL)arg1 ;
-(void)setRefreshed:(BOOL)arg1 ;
-(void)sendCompletionForNewItems:(id)arg1 error:(id)arg2 forLoadingType:(int)arg3 ;
-(BOOL)isLoadingType:(int)arg1 ;
-(NSMutableDictionary *)olderQueryDictionary;
-(NSMutableDictionary *)gapQueryDictionary;
-(double)loadNewerInterval;
-(BOOL)isLoadingOlder;
-(BOOL)isLoadingGap;
-(NSString *)nextCursor;
-(double)displayOffset;
-(long long)markedTID;
-(void)setMarkedTID:(long long)arg1 ;
-(unsigned long long)syncVersion;
-(void)setSyncVersion:(unsigned long long)arg1 ;
-(void)setLastReadTID:(long long)arg1 ;
-(NSDate *)lastLoadNewerDate;
-(NSMutableDictionary *)queryDictionary;
-(BOOL)shouldReload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)reset;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)isLoaded;
-(NSString *)uniqueID;
-(BOOL)isStreaming;
-(BOOL)isRead;
-(SCD_Struct_PT3)displayPosition;
-(void)setStreaming:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

