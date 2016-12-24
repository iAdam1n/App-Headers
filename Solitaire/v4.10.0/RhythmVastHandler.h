/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RhythmVideoSession, RhythmVideoMedia, RhythmVideoAdMedia, NSString, NSMutableArray, NSMutableDictionary;

@interface RhythmVastHandler : NSObject {

	RhythmVideoSession* videoSession;
	RhythmVideoMedia* media;
	RhythmVideoAdMedia* currentAd;
	NSString* currentAdElementType;
	NSMutableArray* currentTrackingUrls;
	NSMutableArray* adElementContainer;
	NSMutableArray* xmlsResponseArray;
	NSString* adId;
	NSString* requestId;
	NSString* contentId;
	NSString* contentUrl;
	long long levels;
	long long maxLevel;
	NSString* adRequestUrl;
	BOOL maxLevelSet;
	NSMutableDictionary* vastTrackingUrls;
	NSMutableArray* errorUrls;
	NSMutableArray* creativeViewTrackingUrls;
	NSMutableArray* startTrackingUrls;
	NSMutableArray* firstQuartileTrackingUrls;
	NSMutableArray* midpointTrackingUrls;
	NSMutableArray* thirdQuartileTrackingUrls;
	NSMutableArray* completeTrackingUrls;
	NSMutableArray* closeTrackingUrls;
	NSMutableArray* skipTrackingUrls;
	NSMutableArray* pauseTrackingUrls;
	NSMutableArray* resumeTrackingUrls;
	NSMutableArray* impressionUrls;
	NSMutableArray* thirdPartyClickTrackingUrls;
	NSString* thirdPartyClickThroughUrl;
	NSString* overlayUrl;
	float overlayFade;
	BOOL isProcessing;
	BOOL overlayUrlSet;
	BOOL skippable;

}

@property (assign) BOOL isProcessing; 
@property (assign) BOOL skippable; 
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)skippable;
-(void)processVASTTrackingURLs:(id)arg1 ;
-(id)getMediaFileUrlFromMediaFiles:(id)arg1 ;
-(double)getDurationFromString:(id)arg1 ;
-(id)authenticateUrl:(id)arg1 ;
-(void)getImpressionAndErrorUrlsFromElement:(id)arg1 ;
-(void)parseInlineResponse:(id)arg1 ;
-(void)parseWrapperResponse:(id)arg1 ;
-(id)initWithData:(id)arg1 MaxWrapperLevels:(long long)arg2 ;
-(void)setIsProcessing:(BOOL)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)returnValue;
-(void)dealloc;
-(BOOL)isProcessing;
@end
