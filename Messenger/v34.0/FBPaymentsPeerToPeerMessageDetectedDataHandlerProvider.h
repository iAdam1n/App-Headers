/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageDetectedDataHandlerProviding.h>

@class NSString, FBPaymentsPeerToPeerSendFlowController, FBPaymentsPeerToPeerMessageTriggerExperimentContext, FBPaymentsPeerToPeerAnalyticsService, FBPaymentsPeerToPeerFeatureGatingController;

@interface FBPaymentsPeerToPeerMessageDetectedDataHandlerProvider : NSObject <MNMessageDetectedDataHandlerProviding> {

	NSString* _currentUserFBID;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	FBPaymentsPeerToPeerMessageTriggerExperimentContext* _messageTriggerExperimentContext;
	FBPaymentsPeerToPeerAnalyticsService* _analyticsService;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	unsigned long long _maxCharacterLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_truncateStringWithRecipient:(id)arg1 padding:(UIEdgeInsets)arg2 ;
-(id)handlingContextForDetectedData:(id)arg1 withThreadViewModel:(id)arg2 ;
-(BOOL)hasHandlersForDetectedDataHandlingContext:(id)arg1 ;
-(id)handlersForDetectedDataHandlingContext:(id)arg1 ;
-(id)initWithSession:(id)arg1 sendFlowController:(id)arg2 messageTriggerExperimentContext:(id)arg3 analyticsService:(id)arg4 featureGatingController:(id)arg5 ;
-(id)init;
@end
