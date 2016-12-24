/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBReactPerfLoggerSessionData : NSObject {

	BOOL _viewDidAppearAnimated;
	BOOL _earlyUIFlushEnabled;
	BOOL _useCustomJSCLibrary;
	BOOL _useCxxBridge;
	BOOL _useNativeFetchingForPersistedQueries;
	unsigned long long _ttiProfileMarker;
	unsigned long long _initialResidentMemory;
	unsigned long long _contentDidAppearResidentMemory;
	NSString* _bridgeStartupType;
	double _bridgeStartupTime;
	NSDictionary* _jsPerformanceLoggerEvents;
	long long _bridgeNativeRequiresCount;
	long long _totalNativeRequiresCount;
	double _initial;
	double _viewWillAppear;
	double _viewDidAppear;
	double _contentDidAppear;
	NSString* _tag;

}

@property (assign,nonatomic) unsigned long long ttiProfileMarker;                            //@synthesize ttiProfileMarker=_ttiProfileMarker - In the implementation block
@property (assign,nonatomic) unsigned long long initialResidentMemory;                       //@synthesize initialResidentMemory=_initialResidentMemory - In the implementation block
@property (assign,nonatomic) unsigned long long contentDidAppearResidentMemory;              //@synthesize contentDidAppearResidentMemory=_contentDidAppearResidentMemory - In the implementation block
@property (nonatomic,copy) NSString * bridgeStartupType;                                     //@synthesize bridgeStartupType=_bridgeStartupType - In the implementation block
@property (assign,nonatomic) double bridgeStartupTime;                                       //@synthesize bridgeStartupTime=_bridgeStartupTime - In the implementation block
@property (nonatomic,copy) NSDictionary * jsPerformanceLoggerEvents;                         //@synthesize jsPerformanceLoggerEvents=_jsPerformanceLoggerEvents - In the implementation block
@property (assign,nonatomic) long long bridgeNativeRequiresCount;                            //@synthesize bridgeNativeRequiresCount=_bridgeNativeRequiresCount - In the implementation block
@property (assign,nonatomic) long long totalNativeRequiresCount;                             //@synthesize totalNativeRequiresCount=_totalNativeRequiresCount - In the implementation block
@property (assign,nonatomic) double initial;                                                 //@synthesize initial=_initial - In the implementation block
@property (assign,nonatomic) double viewWillAppear;                                          //@synthesize viewWillAppear=_viewWillAppear - In the implementation block
@property (assign,nonatomic) double viewDidAppear;                                           //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppearAnimated;                                     //@synthesize viewDidAppearAnimated=_viewDidAppearAnimated - In the implementation block
@property (assign,nonatomic) double contentDidAppear;                                        //@synthesize contentDidAppear=_contentDidAppear - In the implementation block
@property (assign,nonatomic) BOOL earlyUIFlushEnabled;                                       //@synthesize earlyUIFlushEnabled=_earlyUIFlushEnabled - In the implementation block
@property (assign,nonatomic) BOOL useCustomJSCLibrary;                                       //@synthesize useCustomJSCLibrary=_useCustomJSCLibrary - In the implementation block
@property (assign,nonatomic) BOOL useCxxBridge;                                              //@synthesize useCxxBridge=_useCxxBridge - In the implementation block
@property (assign,nonatomic) BOOL useNativeFetchingForPersistedQueries;                      //@synthesize useNativeFetchingForPersistedQueries=_useNativeFetchingForPersistedQueries - In the implementation block
@property (nonatomic,copy) NSString * tag;                                                   //@synthesize tag=_tag - In the implementation block
-(BOOL)useCxxBridge;
-(BOOL)useNativeFetchingForPersistedQueries;
-(void)setUseCxxBridge:(BOOL)arg1 ;
-(void)setUseNativeFetchingForPersistedQueries:(BOOL)arg1 ;
-(BOOL)useCustomJSCLibrary;
-(id)formatDataForAnalytics;
-(unsigned long long)ttiProfileMarker;
-(void)setTtiProfileMarker:(unsigned long long)arg1 ;
-(unsigned long long)initialResidentMemory;
-(void)setInitialResidentMemory:(unsigned long long)arg1 ;
-(unsigned long long)contentDidAppearResidentMemory;
-(void)setContentDidAppearResidentMemory:(unsigned long long)arg1 ;
-(NSString *)bridgeStartupType;
-(void)setBridgeStartupType:(NSString *)arg1 ;
-(double)bridgeStartupTime;
-(void)setBridgeStartupTime:(double)arg1 ;
-(NSDictionary *)jsPerformanceLoggerEvents;
-(void)setJsPerformanceLoggerEvents:(NSDictionary *)arg1 ;
-(long long)bridgeNativeRequiresCount;
-(void)setBridgeNativeRequiresCount:(long long)arg1 ;
-(long long)totalNativeRequiresCount;
-(void)setTotalNativeRequiresCount:(long long)arg1 ;
-(void)setViewWillAppear:(double)arg1 ;
-(BOOL)viewDidAppearAnimated;
-(void)setViewDidAppearAnimated:(BOOL)arg1 ;
-(double)contentDidAppear;
-(void)setContentDidAppear:(double)arg1 ;
-(BOOL)earlyUIFlushEnabled;
-(void)setEarlyUIFlushEnabled:(BOOL)arg1 ;
-(void)setUseCustomJSCLibrary:(BOOL)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(double)viewWillAppear;
-(double)viewDidAppear;
-(void)setInitial:(double)arg1 ;
-(double)initial;
-(void)setViewDidAppear:(double)arg1 ;
@end
