/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TFSFeatureSwitchesService : NSObject {

	BOOL _initialRefreshWasNotified;
	NSMutableDictionary* _featureSwitchesByAccount;
	NSObject*<OS_dispatch_queue> _featureSwitchesByAccountQueue;
	id _restartObserver;
	id _updateObserver;

}

@property (nonatomic,retain) NSMutableDictionary * featureSwitchesByAccount;                          //@synthesize featureSwitchesByAccount=_featureSwitchesByAccount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> featureSwitchesByAccountQueue;              //@synthesize featureSwitchesByAccountQueue=_featureSwitchesByAccountQueue - In the implementation block
@property (assign,nonatomic) BOOL initialRefreshWasNotified;                                          //@synthesize initialRefreshWasNotified=_initialRefreshWasNotified - In the implementation block
@property (nonatomic,retain) id restartObserver;                                                      //@synthesize restartObserver=_restartObserver - In the implementation block
@property (nonatomic,retain) id updateObserver;                                                       //@synthesize updateObserver=_updateObserver - In the implementation block
+(id)initializedServiceWithContentsOfFile:(id)arg1 forDeviceGuestID:(unsigned long long)arg2 isUsingVoiceOver:(BOOL)arg3 host:(id)arg4 configuration:(id)arg5 error:(out id*)arg6 ;
+(void)shutdown;
-(id)featureSwitchesForAccount:(id)arg1 ;
-(id)host;
-(id)manifest;
-(id)archivePathForAccountID:(id)arg1 ;
-(BOOL)accountID:(id)arg1 hasNonDefaultValueForKey:(id)arg2 ;
-(id)unsafePeekStringForKey:(id)arg1 accountID:(id)arg2 ;
-(BOOL)updateAccountID:(id)arg1 configData:(id)arg2 ;
-(id)queriedFeatureSwitchKeysForRun;
-(id)overriddenFeatureSwitchKeysForRun;
-(id)overriddenFeatureSwitchKeysForTestCase;
-(id)queriedKeysAndValuesForTestCase;
-(id)featureSwitchValueForKey:(id)arg1 accountID:(id)arg2 ;
-(void)overrideRawValue:(id)arg1 forKey:(id)arg2 accountID:(id)arg3 ;
-(void)removeOverrideForKey:(id)arg1 accountID:(id)arg2 ;
-(id)rawFeatureSwitchesDictionaryForAccountID:(id)arg1 ;
-(void)resetFeatureSwitchesForAccountID:(id)arg1 ;
-(void)setFeatureSwitchValue:(id)arg1 forKey:(id)arg2 accountID:(id)arg3 ;
-(void)resetFeatureSwitchValueForKey:(id)arg1 accountID:(id)arg2 ;
-(void)setSecondaryConfiguration:(id)arg1 forKey:(id)arg2 accountID:(id)arg3 ;
-(BOOL)boolForKey:(id)arg1 accountID:(id)arg2 ;
-(double)doubleForKey:(id)arg1 accountID:(id)arg2 ;
-(double)CGFloatForKey:(id)arg1 accountID:(id)arg2 ;
-(long long)integerForKey:(id)arg1 accountID:(id)arg2 ;
-(id)numberForKey:(id)arg1 accountID:(id)arg2 ;
-(id)stringForKey:(id)arg1 accountID:(id)arg2 ;
-(id)arrayForKey:(id)arg1 accountID:(id)arg2 ;
-(void)refreshForAccountID:(id)arg1 timeout:(double)arg2 maxStale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyPendingForAccount:(id)arg1 ;
-(BOOL)accountID:(id)arg1 isInExperimentForKey:(id)arg2 ;
-(id)secondaryConfigurationForKey:(id)arg1 accountID:(id)arg2 ;
-(void)resetImpressionsForAccountID:(id)arg1 ;
-(void)resetImpressions;
-(void)setFeatureSwitchesByAccount:(NSMutableDictionary *)arg1 ;
-(void)setFeatureSwitchesByAccountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRestartObserver:(id)arg1 ;
-(void)setUpdateObserver:(id)arg1 ;
-(id)restartObserver;
-(id)updateObserver;
-(id)_featureSwitchesForAccount:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)featureSwitchesByAccountQueue;
-(NSMutableDictionary *)featureSwitchesByAccount;
-(id)_cachedFeatureSwitchesForAccount:(id)arg1 ;
-(void)_cacheFeatureSwitches:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)preflightAccountID:(id)arg1 ;
-(void)forceRefreshForAccount:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)initialRefreshWasNotified;
-(void)setInitialRefreshWasNotified:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isInitialized;
-(void)shutdown;
@end

