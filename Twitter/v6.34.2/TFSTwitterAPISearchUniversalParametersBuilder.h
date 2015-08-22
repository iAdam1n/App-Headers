/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray, TNLParameterCollection;

@interface TFSTwitterAPISearchUniversalParametersBuilder : NSObject {

	BOOL _allowPromotedContent;
	BOOL _getClusters;
	NSString* _query;
	NSString* _querySource;
	NSString* _UILang;
	NSString* _dataLookupID;
	NSString* _queryRewriteID;
	NSString* _previousCursor;
	NSString* _nextCursor;
	NSString* _timezoneName;
	NSString* _eventID;
	NSString* _clusterID;
	NSString* _cardsPlatformID;
	NSString* _filter;
	NSString* _timelineType;
	NSString* _modules;
	NSString* _experiments;
	NSNumber* _count;
	NSNumber* _sinceTime;
	NSNumber* _untilTime;
	NSNumber* _nearLatitude;
	NSNumber* _nearLongitude;
	unsigned long long _resultType;
	NSArray* _pinnedTweetIDs;
	NSArray* _enabledVerticals;

}

@property (nonatomic,copy) NSString * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * querySource;                               //@synthesize querySource=_querySource - In the implementation block
@property (nonatomic,copy) NSString * UILang;                                    //@synthesize UILang=_UILang - In the implementation block
@property (nonatomic,copy) NSString * dataLookupID;                              //@synthesize dataLookupID=_dataLookupID - In the implementation block
@property (nonatomic,copy) NSString * queryRewriteID;                            //@synthesize queryRewriteID=_queryRewriteID - In the implementation block
@property (nonatomic,copy) NSString * previousCursor;                            //@synthesize previousCursor=_previousCursor - In the implementation block
@property (nonatomic,copy) NSString * nextCursor;                                //@synthesize nextCursor=_nextCursor - In the implementation block
@property (nonatomic,copy) NSString * timezoneName;                              //@synthesize timezoneName=_timezoneName - In the implementation block
@property (nonatomic,copy) NSString * eventID;                                   //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                 //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * cardsPlatformID;                           //@synthesize cardsPlatformID=_cardsPlatformID - In the implementation block
@property (nonatomic,copy) NSString * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) NSString * timelineType;                              //@synthesize timelineType=_timelineType - In the implementation block
@property (nonatomic,copy) NSString * modules;                                   //@synthesize modules=_modules - In the implementation block
@property (nonatomic,copy) NSString * experiments;                               //@synthesize experiments=_experiments - In the implementation block
@property (nonatomic,copy) NSNumber * count;                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSNumber * sinceTime;                                 //@synthesize sinceTime=_sinceTime - In the implementation block
@property (nonatomic,copy) NSNumber * untilTime;                                 //@synthesize untilTime=_untilTime - In the implementation block
@property (nonatomic,copy) NSNumber * nearLatitude;                              //@synthesize nearLatitude=_nearLatitude - In the implementation block
@property (nonatomic,copy) NSNumber * nearLongitude;                             //@synthesize nearLongitude=_nearLongitude - In the implementation block
@property (assign,nonatomic) unsigned long long resultType;                      //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSArray * pinnedTweetIDs;                           //@synthesize pinnedTweetIDs=_pinnedTweetIDs - In the implementation block
@property (nonatomic,retain) NSArray * enabledVerticals;                         //@synthesize enabledVerticals=_enabledVerticals - In the implementation block
@property (assign,nonatomic) BOOL allowPromotedContent;                          //@synthesize allowPromotedContent=_allowPromotedContent - In the implementation block
@property (assign,nonatomic) BOOL getClusters;                                   //@synthesize getClusters=_getClusters - In the implementation block
@property (nonatomic,readonly) TNLParameterCollection * parameters; 
+(id)_stringFromBOOL:(BOOL)arg1 ;
+(id)_stringForTwitterSearchResultType:(unsigned long long)arg1 ;
-(NSArray *)enabledVerticals;
-(void)setEnabledVerticals:(NSArray *)arg1 ;
-(NSString *)clusterID;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setAllowPromotedContent:(BOOL)arg1 ;
-(NSString *)timezoneName;
-(NSNumber *)sinceTime;
-(NSNumber *)untilTime;
-(void)setTimezoneName:(NSString *)arg1 ;
-(NSArray *)pinnedTweetIDs;
-(void)setSinceTime:(NSNumber *)arg1 ;
-(void)setUntilTime:(NSNumber *)arg1 ;
-(void)setPinnedTweetIDs:(NSArray *)arg1 ;
-(BOOL)allowPromotedContent;
-(void)setNextCursor:(NSString *)arg1 ;
-(void)setPreviousCursor:(NSString *)arg1 ;
-(NSString *)previousCursor;
-(NSString *)nextCursor;
-(NSString *)experiments;
-(void)setExperiments:(NSString *)arg1 ;
-(NSString *)modules;
-(NSNumber *)nearLatitude;
-(NSNumber *)nearLongitude;
-(NSString *)querySource;
-(void)setQuerySource:(NSString *)arg1 ;
-(NSString *)UILang;
-(void)setUILang:(NSString *)arg1 ;
-(NSString *)dataLookupID;
-(void)setDataLookupID:(NSString *)arg1 ;
-(NSString *)queryRewriteID;
-(void)setQueryRewriteID:(NSString *)arg1 ;
-(NSString *)cardsPlatformID;
-(void)setCardsPlatformID:(NSString *)arg1 ;
-(void)setTimelineType:(NSString *)arg1 ;
-(void)setModules:(NSString *)arg1 ;
-(void)setNearLatitude:(NSNumber *)arg1 ;
-(void)setNearLongitude:(NSNumber *)arg1 ;
-(BOOL)getClusters;
-(void)setGetClusters:(BOOL)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(NSNumber *)count;
-(id)init;
-(NSString *)query;
-(void)setFilter:(NSString *)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSString *)timelineType;
-(TNLParameterCollection *)parameters;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSString *)filter;
-(unsigned long long)resultType;
@end
