/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSMutableDictionary, NSObject, WASpotlightPictureManager, NSString;

@interface WASpotlightManager : NSObject <CSSearchableIndexDelegate> {

	CSSearchableIndex* _searchIndex;
	NSMutableDictionary* _registeredIndexers;
	/*^block*/id _resetAllBlock;
	NSObject*<OS_dispatch_queue> _queue;
	WASpotlightPictureManager* _pictureManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WASpotlightPictureManager * pictureManager;              //@synthesize pictureManager=_pictureManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)context:(id)arg1 containsUnindexedSpotlightItemsOfType:(Class)arg2 ;
+(id)prepareSharedManagerWithResetAction:(/*^block*/id)arg1 ;
+(BOOL)isCoreSpotlightEnabled;
+(id)sharedManager;
-(void)registerIndexer:(id)arg1 ;
-(id)mapIdentifiers:(id)arg1 ;
-(WASpotlightPictureManager *)pictureManager;
-(void)removeItemsInDomain:(id)arg1 ;
-(id)initWithResetAction:(/*^block*/id)arg1 ;
-(void)removeAllItemsAndResetIndexes:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
@end
