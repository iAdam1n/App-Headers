/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGoodwillPinnedUnitStateListener.h>

@protocol FBGoodwillPinnedUnitDataControllerDelegate;
@class FBUserSession, FBPersistentCache, NSString, FBGoodwillPinnedUnitClashUnit, FBMemCustomizedStory;

@interface FBGoodwillPinnedUnitDataController : NSObject <FBGoodwillPinnedUnitStateListener> {

	id<FBGoodwillPinnedUnitDataControllerDelegate> _delegate;
	FBUserSession* _session;
	FBPersistentCache* _dataCache;
	NSString* _analyticsModule;
	FBGoodwillPinnedUnitClashUnit* _pinnedUnitClashUnit;
	BOOL _hasMarkedViewed;
	FBMemCustomizedStory* _currentModel;

}

@property (nonatomic,readonly) FBMemCustomizedStory * currentModel;              //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedViewed;                             //@synthesize hasMarkedViewed=_hasMarkedViewed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pinnedUnitStateDidChange:(long long)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 analyticsModule:(id)arg3 ;
-(void)unitWasViewedForMinimumVPVTime;
-(void)unitWasManuallyHidden;
-(void)attemptRefreshWithAllowCache:(BOOL)arg1 ;
-(void)validateGreetingMode;
-(BOOL)hasMarkedViewed;
-(void)dealloc;
-(FBMemCustomizedStory *)currentModel;
-(void)setCurrentModel:(FBMemCustomizedStory *)arg1 ;
@end
