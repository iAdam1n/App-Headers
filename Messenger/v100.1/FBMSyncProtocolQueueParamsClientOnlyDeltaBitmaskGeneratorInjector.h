/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNSyncProtocolVersionProviding;
@class FBProviderMapData, MNMessageLiveLocationConfigManager, MNMessageReactionsGating, FBMobileConfigContextManager, NSString;

@interface FBMSyncProtocolQueueParamsClientOnlyDeltaBitmaskGeneratorInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNSyncProtocolVersionProviding> _syncProtocolVersionProvider;
	MNMessageLiveLocationConfigManager* _liveLocationConfigManager;
	MNMessageReactionsGating* _messageReactionsGating;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,readonly) id<MNSyncProtocolVersionProviding> syncProtocolVersionProvider;              //@synthesize syncProtocolVersionProvider=_syncProtocolVersionProvider - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * liveLocationConfigManager;              //@synthesize liveLocationConfigManager=_liveLocationConfigManager - In the implementation block
@property (nonatomic,readonly) MNMessageReactionsGating * messageReactionsGating;                           //@synthesize messageReactionsGating=_messageReactionsGating - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                //@synthesize configManager=_configManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNMessageReactionsGating *)messageReactionsGating;
-(MNMessageLiveLocationConfigManager *)liveLocationConfigManager;
-(id<MNSyncProtocolVersionProviding>)syncProtocolVersionProvider;
@end
