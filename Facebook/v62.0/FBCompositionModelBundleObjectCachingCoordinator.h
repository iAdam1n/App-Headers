/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositionModelBundleCache.h>

@protocol FBKeyValueObjectStore;
@class NSMutableDictionary, NSMutableArray;

@interface FBCompositionModelBundleObjectCachingCoordinator : NSObject <FBCompositionModelBundleCache> {

	NSMutableDictionary* _cachedBundlesByCompositionID;
	NSMutableArray* _enqueuedOperations;
	unsigned long long _lifecycleState;
	id<FBKeyValueObjectStore> _objectStore;

}
-(id)initWithObjectStore:(id)arg1 ;
-(void)updateBundleForCompositionID:(id)arg1 bundle:(id)arg2 ;
-(void)clearBundleForCompositionID:(id)arg1 ;
-(void)lookupBundleByCompositionID:(id)arg1 callbackBlock:(/*^block*/id)arg2 ;
-(void)_fetchObjectFromStore;
-(void)applyOperation:(id)arg1 ;
-(void)_successfullyLoadedObject:(id)arg1 ;
-(void)_failedToLoadStoredObject;
@end
