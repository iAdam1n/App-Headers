/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBGraphQLConsistentLookasideCache : NSObject {

	shared_ptr<facebook::mobile::graphql::FragmentDescriptionCache>* _lookupFragmentCache;
	int _lookupFragmentCacheCycles;
	shared_ptr<facebook::mobile::graphstore::AsyncMutationAwareGraphStore>* _asyncStore;

}
-(id)addConsistentFieldUpdateObserver:(id)arg1 selector:(SEL)arg2 forObject:(id)arg3 includingFieldsQueriedInFieldSet:(const FBGraphQLFieldSet*)arg4 ;
-(void)cacheConsistentFieldsInMemModel:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cacheConsistentFieldsInResponse:(id)arg1 toQuery:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cacheConsistentFieldsInMemModels:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateWithConsistentValuesForFieldsInResponse:(id)arg1 toQuery:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)addConsistentFieldUpdateObserver:(id)arg1 selector:(SEL)arg2 forObject:(id)arg3 forTreeShape:(shared_ptr<facebook::mobile::graphstore::TreeShape>*)arg4 ;
-(void)updateWithConsistentValues:(id)arg1 forFields:(const FBGraphQLFieldSet*)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cacheConsistentFieldsInMemModel:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 forQuery:(id)arg4 ;
-(void)cacheConsistentFieldsInMutationPayload:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 forMutationName:(id)arg4 ;
-(id)addConsistentFieldUpdateObserver:(id)arg1 selector:(SEL)arg2 forFragment:(id)arg3 ;
-(id)cacheConsistentFieldsInMutation:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithGraphStore:(shared_ptr<facebook::mobile::graphstore::AsyncMutationAwareGraphStore>*)arg1 ;
-(const shared_ptr<facebook::mobile::graphstore::AsyncMutationAwareGraphStore>*)_asyncStore;
-(void)_cacheConsistentFieldsInMemModelsImpl:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 forPublisher:(const PublisherRequest*)arg4 ;
-(BOOL)_validateMemModel:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_cacheConsistentFieldsInSources:(vector<std::__1::shared_ptr<const facebook::mobile::graphstore::NodeSource>, std::__1::allocator<std::__1::shared_ptr<const facebook::mobile::graphstore::NodeSource> > >*)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 forPublisher:(const PublisherRequest*)arg4 ;
-(id)_addConsistentFieldUpdateObserver:(id)arg1 selector:(SEL)arg2 callerId:(id)arg3 onTree:(shared_ptr<facebook::mobile::graphstore::Tree>*)arg4 resultClass:(Class)arg5 resultTreeShape:(shared_ptr<facebook::mobile::graphstore::TreeShape>*)arg6 ;
-(void)cacheConsistentFieldsInMemModels:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 forQuery:(id)arg4 ;
-(void)_maybeClearLookupCache;
-(id)_addConsistentFieldUpdateObserver:(id)arg1 selector:(SEL)arg2 callerId:(id)arg3 onModel:(id)arg4 ;
-(void)cacheConsistentFieldsInFragments:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

