/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, MNThreadSummarySubscribingAnnouncer, NSString;

@interface MNMontageStoreServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDelayer;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;

}

@property (nonatomic,readonly) FBMessagingStore * messagingStore;                                                    //@synthesize messagingStore=_messagingStore - In the implementation block
@property (nonatomic,readonly) FBMessagingStoreDatabaseOpenedDelayer * messagingStoreDelayer;                        //@synthesize messagingStoreDelayer=_messagingStoreDelayer - In the implementation block
@property (nonatomic,readonly) MNThreadSummarySubscribingAnnouncer * threadSummarySubscribingAnnouncer;              //@synthesize threadSummarySubscribingAnnouncer=_threadSummarySubscribingAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMessagingStore *)messagingStore;
-(MNThreadSummarySubscribingAnnouncer *)threadSummarySubscribingAnnouncer;
-(FBMessagingStoreDatabaseOpenedDelayer *)messagingStoreDelayer;
@end

