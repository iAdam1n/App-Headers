/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary, FBLiveVideoBroadcastStatusUpdateManager;

@interface FBLiveStatusUpdateService : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _jobs;
	FBLiveVideoBroadcastStatusUpdateManager* _broadcastStatusManager;

}
-(id)registerStoryID:(id)arg1 cacheID:(id)arg2 videoID:(id)arg3 broadcastStatus:(id)arg4 debugContext:(id)arg5 updateCallback:(/*^block*/id)arg6 ;
-(BOOL)didVideoTransition:(id)arg1 ;
-(void)_includeDebugInfo;
-(id)_buildCurrentStateDebugInfo;
-(void)unregister:(id)arg1 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
