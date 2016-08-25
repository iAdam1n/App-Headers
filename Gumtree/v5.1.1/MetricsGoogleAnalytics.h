/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAITracker;
@class NSString, NSDictionary;

@interface MetricsGoogleAnalytics : NSObject {

	BOOL _debug;
	BOOL _ivSessionRunning;
	NSString* _identifier;
	NSString* _currentScreen;
	NSString* _previousScreen;
	id<GAITracker> _tracker;
	NSDictionary* _sessionDimensions;
	NSDictionary* _hitDimensions;

}

@property (nonatomic,retain) id<GAITracker> tracker;                        //@synthesize tracker=_tracker - In the implementation block
@property (assign,nonatomic) BOOL ivSessionRunning;                         //@synthesize ivSessionRunning=_ivSessionRunning - In the implementation block
@property (nonatomic,retain) NSDictionary * sessionDimensions;              //@synthesize sessionDimensions=_sessionDimensions - In the implementation block
@property (nonatomic,retain) NSDictionary * hitDimensions;                  //@synthesize hitDimensions=_hitDimensions - In the implementation block
@property (nonatomic,retain) NSString * previousScreen;                     //@synthesize previousScreen=_previousScreen - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL debug;                                    //@synthesize debug=_debug - In the implementation block
@property (nonatomic,retain) NSString * currentScreen;                      //@synthesize currentScreen=_currentScreen - In the implementation block
+(id)trackingIndexForCustomDimension:(id)arg1 ;
+(id)customDimensionIndexMap;
+(id)notificationCDDict;
+(id)trueCatID:(id)arg1 ;
+(id)dimensionsWithCategoryID:(id)arg1 withLocation:(id)arg2 ;
+(id)dimensionsFromPostParameters:(id)arg1 ;
+(id)createGACustomDimensions:(id)arg1 ;
+(void)attachDimensions:(id)arg1 toBuilder:(id)arg2 ;
+(id)dimensionsFromAd:(id)arg1 ;
+(id)dimensionsFromDataProvider:(id)arg1 orSearchParams:(id)arg2 ;
+(id)dimensionsFromPages:(id)arg1 andSearchParameters:(id)arg2 ;
+(id)internalMeasurementNames;
+(id)customDimensionNameMap;
+(unsigned long long)enumForHitType:(id)arg1 ;
+(id)ecommerceMeasurementMap;
+(void)setSharedAnalytics:(id)arg1 ;
+(void)GAFirstLaunchCleanup;
+(id)sharedAnalytics;
-(id<GAITracker>)tracker;
-(void)setTracker:(id<GAITracker>)arg1 ;
-(NSString *)previousScreen;
-(NSString *)currentScreen;
-(id)builderForEventWithAction:(id)arg1 withLabel:(id)arg2 ;
-(void)GATrackECommerceEventWithBuilder:(id)arg1 ;
-(void)setPreviousScreen:(NSString *)arg1 ;
-(BOOL)ivSessionRunning;
-(void)setIvSessionRunning:(BOOL)arg1 ;
-(NSDictionary *)sessionDimensions;
-(NSDictionary *)hitDimensions;
-(void)setHitDimensions:(NSDictionary *)arg1 ;
-(id)arrayForDimensions:(id)arg1 ;
-(void)writeToLogAnalyticsIdentifier:(id)arg1 andObject:(id)arg2 ;
-(void)setSessionDimensions:(NSDictionary *)arg1 ;
-(void)createDebugLogForCustomSessionDimensions:(id)arg1 ;
-(id)standardDimensions;
-(void)createDebugLogWithGAIBuilder:(id)arg1 ;
-(void)GATrackView:(id)arg1 withDimensions:(id)arg2 ;
-(id)builderForEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 withDimensions:(id)arg4 forScreen:(id)arg5 ;
-(void)GATrackSocial:(id)arg1 withAction:(id)arg2 withDimensions:(id)arg3 ;
-(id)JSONOutputForObject:(id)arg1 ;
-(void)writeObjectToLog:(id)arg1 withTag:(id)arg2 ;
-(id)buildDebugOutputWithGAIBuilder:(id)arg1 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 withSearchParameters:(id)arg4 ;
-(void)GAStartTrackingData;
-(void)GAFlushTrackingData;
-(void)GAStopTrackingData;
-(BOOL)GAIsDimensionSetForKey:(id)arg1 ;
-(void)GAAddCustomHitDimensions:(id)arg1 ;
-(void)GASetCustomSessionDimensions:(id)arg1 ;
-(void)GASetUserID:(id)arg1 ;
-(void)GASetABTestGroup:(id)arg1 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 forScreen:(id)arg4 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 withAd:(id)arg4 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 withPostParameters:(id)arg4 ;
-(void)GATrackEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 withSearchParameters:(id)arg4 forScreen:(id)arg5 ;
-(void)GATrackNIEventWithCategory:(id)arg1 withAction:(id)arg2 withLabel:(id)arg3 ;
-(void)GATrackView:(id)arg1 withPostParameters:(id)arg2 ;
-(void)GATrackView:(id)arg1 withSearchParameters:(id)arg2 withDataProvider:(id)arg3 ;
-(void)GATrackView:(id)arg1 withAd:(id)arg2 ;
-(void)GATrackView:(id)arg1 ;
-(void)GATrackView:(id)arg1 withPages:(id)arg2 withSearchParameters:(id)arg3 ;
-(void)GATrackSocial:(id)arg1 withAction:(id)arg2 ;
-(void)GATrackSocial:(id)arg1 withAction:(id)arg2 withAd:(id)arg3 ;
-(void)setCurrentScreen:(NSString *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isRunning;
-(BOOL)debug;
-(void)setRunning:(BOOL)arg1 ;
@end

