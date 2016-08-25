/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSURLRequest, NSString, NSMutableString, CSCore;

@interface CSOfflineCache : NSObject {

	int _maxBatchSize;
	NSMutableArray* _arrayOfCacheFiles;
	NSURLRequest* _request;
	NSString* _url;
	int _flushesInARow;
	double _lastFlushDate;
	double _lastFailDate;
	NSString* _c12;
	NSString* _c1;
	NSString* _ns_ap_an;
	NSString* _ns_ap_pn;
	NSString* _ns_ap_device;
	NSString* _ns_ak;
	NSMutableString* _concatedProcessedEvents;
	CSCore* core;
	int maxSize;
	int maxFlushesInARow;
	int minutesToRetry;
	int expiryInDays;

}

@property (retain) NSString * url;                    //@synthesize url=_url - In the implementation block
@property (assign) int maxSize; 
@property (assign) int maxBatchSize; 
@property (assign) int maxFlushesInARow; 
@property (assign) int minutesToRetry; 
@property (assign) int expiryInDays; 
-(void)removeExpiredCacheFiles;
-(void)releaseCommonLabels;
-(id)getNewestCacheFilePath;
-(int)measurementCountIn:(id)arg1 ;
-(int)getCacheFilesCount;
-(id)getArrayOfCacheFileNames;
-(id)getFolderPath;
-(BOOL)removeCacheFile:(id)arg1 dropMeasurements:(BOOL)arg2 ;
-(void)incrementDroppedMeasurements:(int)arg1 ;
-(BOOL)isAutomaticFlushAllowed;
-(BOOL)isFlushingAllowed;
-(id)requestWithAllCachedMeasurements;
-(BOOL)removeNewestFile;
-(void)destroyPreviousRequest;
-(void)updateLastMeasurementProcessedTimestamp;
-(BOOL)availableConnection;
-(id)createFlushingURL;
-(id)getXMLBody;
-(id)getEventsFormatted;
-(id)getXMLHeader;
-(id)newestEventBatch;
-(id)removeLabelWithName:(id)arg1 fromEvent:(id)arg2 ;
-(void)processCommonLabelsInEvent:(id)arg1 ;
-(BOOL)isTimestampExpired:(id)arg1 ;
-(BOOL)deleteOldestCacheFile;
-(void)createNewCacheFileWithEvent:(id)arg1 ;
-(id)getOldestCacheFilePath;
-(BOOL)isFirstMeasurementExpired:(id)arg1 ;
-(id)getValueFromLabelWithName:(id)arg1 fromEvent:(id)arg2 ;
-(BOOL)automaticFlush;
-(void)saveMeasurement:(id)arg1 ;
-(id)initWithCore:(id)arg1 ;
-(void)setMaxFlushesInARow:(int)arg1 ;
-(void)setMinutesToRetry:(int)arg1 ;
-(void)setExpiryInDays:(int)arg1 ;
-(int)maxFlushesInARow;
-(int)minutesToRetry;
-(int)expiryInDays;
-(void)dealloc;
-(int)count;
-(NSString *)url;
-(BOOL)flush;
-(BOOL)isEmpty;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)save:(id)arg1 ;
-(void)setMaxBatchSize:(int)arg1 ;
-(int)maxBatchSize;
-(BOOL)removeAllEvents;
@end

