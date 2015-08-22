/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterFeatureSwitches.h>
#import <Twitter/NSCoding.h>

@protocol TFNTwitterAuthenticatedScribeDelegate;
@class NSMutableDictionary, NSMutableArray, NSDate, NSMutableSet, TFNTwitterFeatureSwitchesConfig, NSString;

@interface TFNTwitterFeatureSwitchesImpl : NSObject <TFNTwitterFeatureSwitches, NSCoding> {

	NSMutableDictionary* _requireRestartConfig;
	NSMutableArray* _completionBlocks;
	NSDate* _currentRefreshRequestDate;
	NSMutableSet* _scribedImpressions;
	TFNTwitterFeatureSwitchesConfig* _config;
	NSString* _accountID;
	id<TFNTwitterAuthenticatedScribeDelegate> _scribeDelegate;
	TFNTwitterFeatureSwitchesConfig* _pendingConfig;

}

@property (nonatomic,retain) TFNTwitterFeatureSwitchesConfig * config;                                     //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                                       //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterAuthenticatedScribeDelegate> scribeDelegate;              //@synthesize scribeDelegate=_scribeDelegate - In the implementation block
@property (nonatomic,retain) NSDate * currentRefreshRequestDate;                                           //@synthesize currentRefreshRequestDate=_currentRefreshRequestDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                            //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) TFNTwitterFeatureSwitchesConfig * pendingConfig;                              //@synthesize pendingConfig=_pendingConfig - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requireRestartConfig;                                 //@synthesize requireRestartConfig=_requireRestartConfig - In the implementation block
@property (nonatomic,readonly) NSMutableSet * scribedImpressions;                                          //@synthesize scribedImpressions=_scribedImpressions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)featureSwitchesForDevice;
+(id)featureSwitchesForAccount:(id)arg1 ;
+(BOOL)initializeWithContentsOfFile:(id)arg1 forDevice:(id)arg2 isUsingVoiceOver:(BOOL)arg3 signedOutScribeDelegate:(id)arg4 error:(id*)arg5 ;
+(id)scribeDelegateForAccount:(id)arg1 ;
+(id)accountIDForAccount:(id)arg1 ;
+(id)archiveFileNameForAccountID:(id)arg1 ;
+(BOOL)isConfigNewerThanManifestWithFileName:(id)arg1 ;
+(BOOL)isInitialized;
+(void)shutdown;
+(id)manifest;
-(id)unsafePeekStringForKey:(id)arg1 ;
-(void)applyPendingDeviceFeatureSwitches;
-(double)CGFloatForKey:(id)arg1 ;
-(id<TFNTwitterAuthenticatedScribeDelegate>)scribeDelegate;
-(void)setScribeDelegate:(id<TFNTwitterAuthenticatedScribeDelegate>)arg1 ;
-(void)refreshIfNecessaryWithAccount:(id)arg1 ;
-(void)refreshIfNecessaryWithGuestAuthManager:(id)arg1 ;
-(void)applyPendingWithAccount:(id)arg1 ;
-(void)_applyPendingWithAccount:(id)arg1 isLoading:(BOOL)arg2 ;
-(id)initWithAccountID:(id)arg1 scribeDelegate:(id)arg2 ;
-(void)_buildRequireRestartConfig;
-(void)saveToArchive;
-(NSMutableSet *)scribedImpressions;
-(BOOL)updatePendingConfig:(id)arg1 ;
-(void)_refreshCompleted:(BOOL)arg1 forAccount:(id)arg2 ;
-(void)refreshWithAccount:(id)arg1 maxStale:(double)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_refreshWithRequestFactory:(id)arg1 maxStale:(double)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(TFNTwitterFeatureSwitchesConfig *)pendingConfig;
-(NSDate *)currentRefreshRequestDate;
-(void)setCurrentRefreshRequestDate:(NSDate *)arg1 ;
-(/*^block*/id)refreshFeatureSwitchConfigResponseBlockForAccount:(id)arg1 ;
-(void)refreshWithAccount:(id)arg1 maxStale:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldApplyPendingConfig:(BOOL)arg1 ;
-(void)setPendingConfig:(TFNTwitterFeatureSwitchesConfig *)arg1 ;
-(id)_valueForKey:(id)arg1 useSharedQueue:(BOOL)arg2 ;
-(NSMutableDictionary *)requireRestartConfig;
-(id)_impressedValueForKey:(id)arg1 ;
-(void)forceRefreshWithAccount:(id)arg1 ;
-(void)forceRefreshWithGuestAuthManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isInExperimentForKey:(id)arg1 ;
-(BOOL)hasNonDefaultValueForKey:(id)arg1 ;
-(id)secondaryConfigurationForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)_applicationDidEnterBackground;
-(id)stringForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(NSString *)accountID;
-(TFNTwitterFeatureSwitchesConfig *)config;
-(void)setConfig:(TFNTwitterFeatureSwitchesConfig *)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completionBlocks;
-(id)arrayForKey:(id)arg1 ;
-(id)_valueForKey:(id)arg1 ;
@end
