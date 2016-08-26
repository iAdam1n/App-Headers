/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunnerDelegate;
@class MNSecureMessagingStoredProcedureRunner, MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureCallbackSubscriber, MNSecureMessagingMessagingCollectionAddress, NSObject;

@interface MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunner : NSObject {

	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureCallbackSubscriber* _storedProcedureSubscriber;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)runDeviceStatusUpdateOfType:(long long)arg1 ;
-(BOOL)_processResponseReceived:(id)arg1 forRequestType:(long long)arg2 ;
-(id)initWithStoredProcedureRunner:(id)arg1 storedProcedureSubscriber:(id)arg2 localAddress:(id)arg3 queue:(id)arg4 ;
-(void)setDelegate:(id<MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunnerDelegate>)arg1 ;
-(id<MNSecureMessagingRegisteredDeviceStatusUpdateStoredProcedureRunnerDelegate>)delegate;
@end
