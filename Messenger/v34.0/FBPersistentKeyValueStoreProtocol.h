/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBPersistentKeyValueStoreProtocol <FBInvalidating>
@required
-(void)store:(id)arg1 key:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetch:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetch:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)removeItemForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)store:(id)arg1 key:(id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)fetch:(id)arg1 version:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 version:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)fetchFirst:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)fetchFirst:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(id)dataForKey:(id)arg1 modificationDate:(id*)arg2;
-(id)fetchModificationDate:(id)arg1 error:(id*)arg2;
-(void)removeItemForKey:(id)arg1 version:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(id)getAllKeys;
-(void)clear:(/*^block*/id)arg1;

@end
