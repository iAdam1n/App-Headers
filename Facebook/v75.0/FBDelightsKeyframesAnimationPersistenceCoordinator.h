/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPersistentKeyValueStore, FBDelightsKeyframesAnimationMemoryCache;

@interface FBDelightsKeyframesAnimationPersistenceCoordinator : NSObject {

	FBPersistentKeyValueStore* _store;
	FBDelightsKeyframesAnimationMemoryCache* _memoryCache;

}
-(id)initWithSession:(id)arg1 memoryCache:(id)arg2 ;
-(void)fetchKeyframesAnimationWithName:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)storeKeyframesAnimation:(id)arg1 withName:(id)arg2 ;
@end
