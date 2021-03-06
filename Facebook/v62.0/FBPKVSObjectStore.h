/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBKeyValueObjectStore.h>

@protocol FBPersistentKeyValueStoreProtocol, OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface FBPKVSObjectStore : NSObject <FBKeyValueObjectStore> {

	id<FBPersistentKeyValueStoreProtocol> _pkvs;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _mostRecentWrites;
	unordered_map<NSString *, std::__1::shared_ptr<int>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::shared_ptr<int> > > >* _keySentinel;
	mutex _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItemForKey:(id)arg1 ;
-(void)fetchObjectForKey:(id)arg1 queue:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(void)storeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_fetchObjectForKey:(id)arg1 queue:(id)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(shared_ptr<int>*)_getSentinelPtrForKey:(id)arg1 ;
-(void)_encodeAndStoreObject:(id)arg1 forKey:(id)arg2 oldSentinelValue:(int)arg3 sentinelPtr:(shared_ptr<int>*)arg4 ;
-(void)_storeData:(id)arg1 forKey:(id)arg2 object:(id)arg3 oldSentinelValue:(int)arg4 sentinelPtr:(shared_ptr<int>*)arg5 ;
-(id)initWithPKVS:(id)arg1 ;
-(id)_encodeObject:(id)arg1 ;
@end

