/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache, FBDiskCache;

@interface FBLayeredCache : NSObject {

	FBCache* _memoryCache;
	FBDiskCache* _diskCache;

}
-(id)initWithMemoryCache:(id)arg1 diskCache:(id)arg2 ;
-(void)cacheData:(id)arg1 forKey:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cacheData:(id)arg1 forKey:(id)arg2 extra:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)clear:(/*^block*/id)arg1 ;
-(id)dataForKey:(id)arg1 ;
@end
