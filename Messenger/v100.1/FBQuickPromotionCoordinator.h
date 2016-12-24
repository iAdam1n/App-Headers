/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBQPPromotionEventHandling.h>

@protocol FBQuickPromotionActionHandler;
@class FBUserSession, NSMutableDictionary, UIApplication, FBQuickPromotionDebugLogger, FBQuickPromotionFiltersHelper, FBNuxConfigurationProfile, FBNuxCoordinator, NSString;

@interface FBQuickPromotionCoordinator : NSObject <FBQPPromotionEventHandling> {

	FBUserSession* _session;
	id<FBQuickPromotionActionHandler> _actionHandler;
	NSMutableDictionary* _promotionIDPresenterMap;
	NSMutableDictionary* _imageCache;
	mutex _imageCacheLock;
	UIApplication* _application;
	FBQuickPromotionDebugLogger* _qpDebugLogger;
	FBQuickPromotionFiltersHelper* _filtersHelper;
	FBNuxConfigurationProfile* _configurationProfile;

}

@property (nonatomic,readonly) FBNuxCoordinator * nuxCoordinator; 
@property (nonatomic,readonly) FBNuxConfigurationProfile * configurationProfile;              //@synthesize configurationProfile=_configurationProfile - In the implementation block
@property (nonatomic,readonly) FBQuickPromotionDebugLogger * qpDebugLogger;                   //@synthesize qpDebugLogger=_qpDebugLogger - In the implementation block
@property (nonatomic,readonly) id<FBQuickPromotionActionHandler> actionHandler;               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) FBQuickPromotionFiltersHelper * filtersHelper;                 //@synthesize filtersHelper=_filtersHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBNuxCoordinator *)nuxCoordinator;
-(id)bestPromotionForTrigger:(id)arg1 withContext:(id)arg2 ;
-(void)resetActivePromotion:(id)arg1 ;
-(id)newBannerViewControllerForTrigger:(id)arg1 withContext:(id)arg2 ;
-(id)bestPromotionForTrigger:(id)arg1 ;
-(BOOL)triggerHasPromotion:(id)arg1 withContext:(id)arg2 ;
-(id)newBannerViewControllerForTrigger:(id)arg1 ;
-(id)lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 promotionID:(id)arg3 ;
-(unsigned long long)occurrenceCountForEvent:(id)arg1 nuxID:(id)arg2 promotionID:(id)arg3 ;
-(BOOL)promotion:(id)arg1 hadEvent:(id)arg2 withinTimeInterval:(double)arg3 ;
-(FBNuxConfigurationProfile *)configurationProfile;
-(FBQuickPromotionFiltersHelper *)filtersHelper;
-(id)_bestPromotionForTrigger:(id)arg1 withContext:(id)arg2 ;
-(id)_presenterForTrigger:(id)arg1 withTriggerContext:(id)arg2 ;
-(id)triggerWithHighestPriority:(id)arg1 withContext:(id)arg2 ;
-(void)_logEvent:(id)arg1 promotion:(id)arg2 extra:(id)arg3 ;
-(id)_getPresenterForPromotion:(id)arg1 ;
-(BOOL)imageCacheExist:(id)arg1 ;
-(BOOL)needFetchingImage:(id)arg1 ;
-(void)imageCacheSet:(id)arg1 ;
-(void)imageCacheClear:(id)arg1 ;
-(void)promotionDidDisappear:(id)arg1 ;
-(void)promotion:(id)arg1 shouldLogNuxEvent:(id)arg2 extra:(id)arg3 ;
-(BOOL)promotion:(id)arg1 shouldHandleAction:(id)arg2 withTriggerContext:(id)arg3 ;
-(id)initWithSession:(id)arg1 debugLogger:(id)arg2 actionHandler:(id)arg3 configurationProfile:(id)arg4 application:(id)arg5 ;
-(id)triggerWithHighestPriority:(id)arg1 ;
-(id)lastOccurrenceTimeForEvent:(id)arg1 promotion:(id)arg2 ;
-(BOOL)fetchImageIfNotInCache:(id)arg1 ;
-(FBQuickPromotionDebugLogger *)qpDebugLogger;
-(id<FBQuickPromotionActionHandler>)actionHandler;
@end
