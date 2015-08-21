/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStream.h>
#import <Twitter/TFNTwitterGenericTimelineStream.h>

@class TFNTwitterAccount, NSArray, NSDate, NSError;

@interface TFNTwitterTrendsPlusStream : TFNTwitterStream <TFNTwitterGenericTimelineStream> {

	BOOL _isPendingRefresh;
	BOOL _needsSerialization;
	BOOL _isMinimal;
	BOOL _isLoadingTop;
	TFNTwitterAccount* _account;
	NSArray* _updatedStreamObjects;
	NSDate* _lastUpdated;
	NSError* _loadTopError;
	NSArray* _streamObjects;

}

@property (nonatomic,retain) NSArray * updatedStreamObjects;              //@synthesize updatedStreamObjects=_updatedStreamObjects - In the implementation block
@property (nonatomic,readonly) BOOL isMinimal;                            //@synthesize isMinimal=_isMinimal - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;                      //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,retain) NSError * loadTopError;                      //@synthesize loadTopError=_loadTopError - In the implementation block
@property (assign,nonatomic) BOOL isLoadingTop;                           //@synthesize isLoadingTop=_isLoadingTop - In the implementation block
@property (nonatomic,retain) NSArray * streamObjects;                     //@synthesize streamObjects=_streamObjects - In the implementation block
@property (assign,nonatomic) BOOL needsSerialization;                     //@synthesize needsSerialization=_needsSerialization - In the implementation block
@property (assign,nonatomic) BOOL isPendingRefresh;                       //@synthesize isPendingRefresh=_isPendingRefresh - In the implementation block
-(BOOL)isLoadingTop;
-(NSArray *)streamObjects;
-(BOOL)insertUpdatedStreamObjects;
-(NSError *)loadTopError;
-(BOOL)isMinimal;
-(BOOL)hasUpdatedStreamObjects;
-(id)loadingFailedMessage;
-(void)loadNewerWithSource:(long long)arg1 ;
-(BOOL)loadTopWithSource:(long long)arg1 ;
-(void)setIsPendingRefresh:(BOOL)arg1 ;
-(void)setStreamObjects:(NSArray *)arg1 ;
-(id)initWithAccount:(id)arg1 serializationDictionary:(id)arg2 ;
-(void)setNeedsSerialization:(BOOL)arg1 ;
-(id)itemsToBeSerialized;
-(BOOL)needsSerialization;
-(BOOL)isPendingRefresh;
-(id)serializationDictionaryValue;
-(void)setIsLoadingTop:(BOOL)arg1 ;
-(void)setLoadTopError:(NSError *)arg1 ;
-(BOOL)shouldLoadTopForSource:(long long)arg1 ;
-(void)_didFailLoadWithError:(id)arg1 source:(long long)arg2 ;
-(void)_didLoadTrendsInfo:(id)arg1 source:(long long)arg2 ;
-(BOOL)shouldUpdateFromTrend:(id)arg1 toTrend:(id)arg2 ;
-(void)_postDidChangedNotificationWithName:(id)arg1 type:(long long)arg2 resultCount:(unsigned long long)arg3 source:(long long)arg4 error:(id)arg5 ;
-(NSArray *)updatedStreamObjects;
-(void)setUpdatedStreamObjects:(NSArray *)arg1 ;
-(void)updateObjectsInUpdatedStreamObjects:(id)arg1 loadSource:(long long)arg2 ;
-(id)init;
-(BOOL)isEmpty;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(NSDate *)lastUpdated;
@end

