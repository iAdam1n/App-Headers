/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEncryptedChannelManagerSecurePersisting, FBEncryptedChannelManagerSecureChannelRequesting, FBEncryptedChannelManagerApplicationStateMonitoring, FBEncryptedChannelManagerSecureBucketIDGenerating;
#import <Messenger/Messenger-Structs.h>
@class FBEncryptedChannel;

@interface FBEncryptedChannelManager : NSObject {

	unsigned long long _backgroundTask;
	mutex _channelMutex;
	FBEncryptedChannel* _channel;
	id<FBEncryptedChannelManagerSecurePersisting> _securePersistentStore;
	id<FBEncryptedChannelManagerSecureChannelRequesting> _secureChannelRequester;
	id<FBEncryptedChannelManagerApplicationStateMonitoring> _applicationStateMonitor;
	id<FBEncryptedChannelManagerSecureBucketIDGenerating> _bucketIDGenerator;

}
-(void)_requestChannel;
-(void)_persistChannel;
-(id)checkoutChannel;
-(id)initWithSecurePersistentStore:(id)arg1 secureChannelRequester:(id)arg2 applicationStateMonitor:(id)arg3 bucketIDGenerator:(id)arg4 ;
-(id)checkoutChannelForUserAgent:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_endBackgroundTask;
@end
