/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary, FBLiveVideoBroadcastStatusUpdateManager;

@interface FBLiveStatusUpdateService : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _jobs;
	FBLiveVideoBroadcastStatusUpdateManager* _broadcastStatusManager;

}
-(void)_includeDebugInfo;
-(id)_buildCurrentStateDebugInfo;
-(id)registerStoryID:(id)arg1 cacheID:(id)arg2 videoID:(id)arg3 broadcastStatus:(id)arg4 debugContext:(id)arg5 updateCallback:(/*^block*/id)arg6 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
-(void)unregister:(id)arg1 ;
@end
