/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol FBMSPLocalPayloadHandling;
@class FBProviderMapData, MNCrossProcessDiskCommunicationAdapterService, MNSPDataStore, FBAnalytics, NSString;

@interface MNNotificationServiceSerializedDeltaProcessingServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNCrossProcessDiskCommunicationAdapterService* _diskCommunicationService;
	MNSPDataStore* _spDataStore;
	FBAnalytics* _analytics;
	id<FBMSPLocalPayloadHandling> _payloadLocalHandler;

}

@property (nonatomic,readonly) MNCrossProcessDiskCommunicationAdapterService * diskCommunicationService;              //@synthesize diskCommunicationService=_diskCommunicationService - In the implementation block
@property (nonatomic,readonly) MNSPDataStore * spDataStore;                                                           //@synthesize spDataStore=_spDataStore - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                               //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) id<FBMSPLocalPayloadHandling> payloadLocalHandler;                                     //@synthesize payloadLocalHandler=_payloadLocalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNSPDataStore *)spDataStore;
-(FBAnalytics *)analytics;
-(MNCrossProcessDiskCommunicationAdapterService *)diskCommunicationService;
-(id<FBMSPLocalPayloadHandling>)payloadLocalHandler;
@end
