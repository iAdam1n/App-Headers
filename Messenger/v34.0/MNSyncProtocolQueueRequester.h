/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@protocol MNSyncProtocolQueueDeviceParamsProviding;
@class MNSyncProtocolPublisher, FBUserSession, NSString;

@interface MNSyncProtocolQueueRequester : NSObject <FBSessionClassProvidable> {

	MNSyncProtocolPublisher* _publisher;
	FBUserSession* _session;
	id<MNSyncProtocolQueueDeviceParamsProviding> _deviceParamsProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)requestQueueWithConfig:(id)arg1 withSuccessBlock:(/*^block*/id)arg2 failedBlock:(/*^block*/id)arg3 ;
-(id)initWithPublisher:(id)arg1 session:(id)arg2 deviceParamsProvider:(id)arg3 ;
-(id)_createQueueRequestWithConfig:(id)arg1 ;
-(id)init;
@end

