/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStream.h>
#import <Twitter/TFNTwitterGenericTimelineStream.h>

@protocol TFNTwitterGenericTimelineStreamTFNTwitterTimelinePlistSerialization;
@class TFNTwitterStream, TFNTwitterUniversalDiscoverStream, NSString;

@interface TFNTwitterUniversalDiscoverTrendsStream : TFNTwitterStream <TFNTwitterGenericTimelineStream> {

	BOOL _isPendingRefresh;
	BOOL _trendsPlusSearchEntryWithDiscoEnabled;
	BOOL _specialEventPivotEnabled;
	BOOL _pendingTrendsRequest;
	BOOL _pendingDiscoRequest;
	TFNTwitterStream*<TFNTwitterGenericTimelineStream>*<TFNTwitterTimelinePlistSerialization> _trendsStream;
	TFNTwitterUniversalDiscoverStream* _discoverStream;
	NSString* _specialEventPivotEventID;
	NSString* _specialEventPivotTitle;
	NSString* _specialEventPivotQuery;

}

@property (nonatomic,readonly) TFNTwitterStream*<TFNTwitterGenericTimelineStream>*<TFNTwitterTimelinePlistSerialization> trendsStream;              //@synthesize trendsStream=_trendsStream - In the implementation block
@property (nonatomic,readonly) TFNTwitterUniversalDiscoverStream * discoverStream;                                                                  //@synthesize discoverStream=_discoverStream - In the implementation block
@property (assign,getter=isTrendsPlusSearchEntryWithDiscoEnabled,nonatomic) BOOL trendsPlusSearchEntryWithDiscoEnabled;                             //@synthesize trendsPlusSearchEntryWithDiscoEnabled=_trendsPlusSearchEntryWithDiscoEnabled - In the implementation block
@property (assign,getter=isSpecialEventPivotEnabled,nonatomic) BOOL specialEventPivotEnabled;                                                       //@synthesize specialEventPivotEnabled=_specialEventPivotEnabled - In the implementation block
@property (nonatomic,retain) NSString * specialEventPivotEventID;                                                                                   //@synthesize specialEventPivotEventID=_specialEventPivotEventID - In the implementation block
@property (nonatomic,retain) NSString * specialEventPivotTitle;                                                                                     //@synthesize specialEventPivotTitle=_specialEventPivotTitle - In the implementation block
@property (nonatomic,retain) NSString * specialEventPivotQuery;                                                                                     //@synthesize specialEventPivotQuery=_specialEventPivotQuery - In the implementation block
@property (assign,nonatomic) BOOL pendingTrendsRequest;                                                                                             //@synthesize pendingTrendsRequest=_pendingTrendsRequest - In the implementation block
@property (assign,nonatomic) BOOL pendingDiscoRequest;                                                                                              //@synthesize pendingDiscoRequest=_pendingDiscoRequest - In the implementation block
@property (assign,nonatomic) BOOL needsSerialization; 
@property (assign,nonatomic) BOOL isPendingRefresh;                                                                                                 //@synthesize isPendingRefresh=_isPendingRefresh - In the implementation block
+(id)t1_universalDiscoverTrendsStreamWithAccount:(id)arg1 ;
-(BOOL)isTrendsPlusSearchEntryWithDiscoEnabled;
-(void)setTrendsPlusSearchEntryWithDiscoEnabled:(BOOL)arg1 ;
-(void)setSpecialEventPivotEnabled:(BOOL)arg1 ;
-(NSString *)specialEventPivotEventID;
-(void)setSpecialEventPivotEventID:(NSString *)arg1 ;
-(NSString *)specialEventPivotQuery;
-(void)setSpecialEventPivotQuery:(NSString *)arg1 ;
-(void)setSpecialEventPivotTitle:(NSString *)arg1 ;
-(void)_streamDidUpdate:(id)arg1 ;
-(id)streamObjects;
-(void)loadNewerWithSource:(long long)arg1 ;
-(BOOL)loadTopWithSource:(long long)arg1 ;
-(id)initWithAccount:(id)arg1 serializationDictionary:(id)arg2 trendsStreamType:(unsigned long long)arg3 ;
-(id)tfn_debugStrings;
-(void)setIsPendingRefresh:(BOOL)arg1 ;
-(void)clearAndReloadStreamWithSource:(long long)arg1 ;
-(TFNTwitterStream*<TFNTwitterGenericTimelineStream>*<TFNTwitterTimelinePlistSerialization>)trendsStream;
-(unsigned long long)trendsStreamType;
-(id)initWithAccount:(id)arg1 serializationDictionary:(id)arg2 ;
-(void)setNeedsSerialization:(BOOL)arg1 ;
-(id)itemsToBeSerialized;
-(BOOL)needsSerialization;
-(BOOL)isPendingRefresh;
-(id)serializationDictionaryValue;
-(BOOL)isSpecialEventPivotEnabled;
-(NSString *)specialEventPivotTitle;
-(void)_addTrendsStreamType:(unsigned long long)arg1 serializationDictionary:(id)arg2 ;
-(void)setPendingTrendsRequest:(BOOL)arg1 ;
-(void)refreshTrendsWithSource:(long long)arg1 ;
-(TFNTwitterUniversalDiscoverStream *)discoverStream;
-(BOOL)pendingTrendsRequest;
-(BOOL)pendingDiscoRequest;
-(void)setPendingDiscoRequest:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)replaceObject:(id)arg1 withObject:(id)arg2 ;
@end
