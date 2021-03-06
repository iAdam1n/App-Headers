/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterDefaultStream.h>
#import <Twitter/TFNTwitterPollableStream.h>
#import <Twitter/TFNTwitterLoadableStream.h>

@protocol TFNTwitterTimelineStreamLoader;
@class NSArray, TFNTwitterTimelineChunkManager, NSMutableDictionary, NSError, NSString;

@interface TFNTwitterRichTimelineStream : NSObject <TFNTwitterDefaultStream, TFNTwitterPollableStream, TFNTwitterLoadableStream> {

	id<TFNTwitterTimelineStreamLoader> _streamLoader;
	BOOL _isAtEnd;
	double _pollingInterval;
	TFNTwitterTimelineChunkManager* _timelineChunkManager;
	NSArray* _streamOperators;
	NSMutableDictionary* _notificationHandlers;
	unsigned long long _streamState;
	NSError* _loadTopError;
	NSError* _loadBottomError;
	NSError* _loadGapError;

}

@property (nonatomic,readonly) TFNTwitterTimelineChunkManager * timelineChunkManager;              //@synthesize timelineChunkManager=_timelineChunkManager - In the implementation block
@property (nonatomic,copy) NSArray * streamOperators;                                              //@synthesize streamOperators=_streamOperators - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * notificationHandlers;                             //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                       //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) BOOL isAtEnd;                                                         //@synthesize isAtEnd=_isAtEnd - In the implementation block
@property (nonatomic,retain) NSError * loadTopError;                                               //@synthesize loadTopError=_loadTopError - In the implementation block
@property (nonatomic,retain) NSError * loadBottomError;                                            //@synthesize loadBottomError=_loadBottomError - In the implementation block
@property (nonatomic,retain) NSError * loadGapError;                                               //@synthesize loadGapError=_loadGapError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * streamObjects; 
@property (assign,nonatomic) double pollingInterval;                                               //@synthesize pollingInterval=_pollingInterval - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
-(BOOL)loadBottomWithSource:(long long)arg1 ;
-(NSArray *)streamObjects;
-(NSError *)loadTopError;
-(void)setPollingInterval:(double)arg1 ;
-(BOOL)loadTopWithSource:(long long)arg1 ;
-(BOOL)loadPolling;
-(BOOL)retryForError:(id)arg1 withSource:(long long)arg2 ;
-(BOOL)loadGap:(id)arg1 withSource:(long long)arg2 ;
-(void)handleMemoryWarning;
-(BOOL)loadPosition:(unsigned long long)arg1 source:(long long)arg2 ;
-(id)initWithStreamLoader:(id)arg1 ;
-(void)setStreamOperators:(NSArray *)arg1 ;
-(void)registerNotificationHandler:(id)arg1 forNotificationName:(id)arg2 ;
-(BOOL)isLoadingPosition:(unsigned long long)arg1 ;
-(BOOL)loadPosition:(unsigned long long)arg1 source:(long long)arg2 gapItem:(id)arg3 ;
-(void)setIsAtEnd:(BOOL)arg1 ;
-(TFNTwitterTimelineChunkManager *)timelineChunkManager;
-(NSError *)loadBottomError;
-(void)setLoadTopError:(NSError *)arg1 ;
-(void)setLoadBottomError:(NSError *)arg1 ;
-(NSError *)loadGapError;
-(NSArray *)streamOperators;
-(/*^block*/id)_loadTopResponseBlockWithSource:(long long)arg1 ;
-(void)_validateAndInsertChunks:(id)arg1 updateIndex:(unsigned long long)arg2 ;
-(void)_postUpdateNotification:(id)arg1 source:(long long)arg2 notificationType:(long long)arg3 error:(id)arg4 ;
-(/*^block*/id)_loadBottomResponseBlockWithSource:(long long)arg1 ;
-(/*^block*/id)_loadGapResponseBlockWithGapItem:(id)arg1 source:(long long)arg2 ;
-(void)setLoadGapError:(NSError *)arg1 ;
-(id)errorForPosition:(unsigned long long)arg1 ;
-(id)initWithStreamLoader:(id)arg1 chunkManager:(id)arg2 ;
-(void)unregisterNotificationHandler:(id)arg1 forNotificationName:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isAtEnd;
-(void)_handleNotification:(id)arg1 ;
-(NSMutableDictionary *)notificationHandlers;
-(void)setNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(double)pollingInterval;
-(BOOL)isIdle;
-(void)setStreamState:(unsigned long long)arg1 ;
-(unsigned long long)streamState;
-(void)resetStream;
@end

