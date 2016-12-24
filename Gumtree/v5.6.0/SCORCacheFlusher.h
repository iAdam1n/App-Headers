/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCORTaskExecutor, SCORStorage, SCOROfflineCache;

@interface SCORCacheFlusher : NSObject {

	long long _cacheFlushInterval;
	SCORTaskExecutor* _taskExecutor;
	SCORStorage* _storage;
	SCOROfflineCache* _offlineCache;
	long long _timerId;
	long long _timerInterval;
	BOOL _isForeground;

}
-(void)scheduleFlush;
-(void)restartTimer;
-(id)initWithCacheFlushInterval:(long long)arg1 taskExecutor:(id)arg2 storage:(id)arg3 offlineCache:(id)arg4 ;
-(void)dealloc;
-(void)flush;
-(void)reset;
-(void)stop;
-(void)start;
-(long long)timer;
-(void)releaseTimer;
-(BOOL)foreground;
@end
