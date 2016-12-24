/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLiveLocationOutgoingListener <NSObject>
@required
-(void)startedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 expirationTime:(id)arg3;
-(void)resumedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 expirationTime:(id)arg4;
-(void)stoppedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 source:(long long)arg4;

@end
