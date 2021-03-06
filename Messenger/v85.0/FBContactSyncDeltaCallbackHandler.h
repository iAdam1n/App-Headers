/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactSyncDeltaListener, FBContactSyncUserProfileImageCaching;
@class FBAnalytics;

@interface FBContactSyncDeltaCallbackHandler : NSObject {

	id<FBContactSyncDeltaListener> _listener;
	FBAnalytics* _analytics;
	id<FBContactSyncUserProfileImageCaching> _profileImageCachingRunner;

}
-(void)_setDeltaCallbackFunctionWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(id)initWithOmnistore:(id)arg1 listener:(id)arg2 collectionName:(id)arg3 analytics:(id)arg4 profileImageCachingRunner:(id)arg5 ;
@end

