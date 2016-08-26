/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>
#import <Facebook/FBMSPPayloadHandling.h>

@class FBMSPDataStore, FBAnalytics, FBMSPQueueCreationListenerAnnouncer, NSString;

@interface FBMSPQueueCreationHandler : NSObject <FBViewerContextClassProvidable, FBMSPPayloadHandling> {

	FBMSPDataStore* _dataStore;
	FBAnalytics* _analytics;
	FBMSPQueueCreationListenerAnnouncer* _queueCreationAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 analytics:(id)arg2 ;
-(void)_announceQueueCreatedWithSyncToken:(id)arg1 ;
-(void)handleClientPayload:(id)arg1 ;
-(void)addQueueCreationListener:(id)arg1 ;
-(void)removeQueueCreationListener:(id)arg1 ;
@end
