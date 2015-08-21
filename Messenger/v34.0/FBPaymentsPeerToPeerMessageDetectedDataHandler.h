/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSendFlowControllerDelegate.h>
#import <Messenger/MNMessageDetectedDataHandling.h>

@class NSString, NSDecimalNumber, FBMUser, FBMGroupThreadKey, FBPaymentsPeerToPeerSendFlowController, FBPaymentsPeerToPeerAnalyticsService, NSMutableDictionary;

@interface FBPaymentsPeerToPeerMessageDetectedDataHandler : NSObject <FBPaymentsPeerToPeerSendFlowControllerDelegate, MNMessageDetectedDataHandling> {

	NSString* _localizedTitle;
	NSDecimalNumber* _initialAmount;
	FBMUser* _recipient;
	FBMGroupThreadKey* _groupThreadKey;
	long long _peopleCountInThread;
	FBPaymentsPeerToPeerSendFlowController* _sendFlowController;
	FBPaymentsPeerToPeerAnalyticsService* _analyticsService;
	NSMutableDictionary* _completionBlockForAttachment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
-(void)_dispatchHandlingResult:(id)arg1 forPaymentAttachmentWithAnalyticsUUID:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 recipient:(id)arg2 initialAmount:(id)arg3 groupThreadKey:(id)arg4 peopleCountInThread:(long long)arg5 sendFlowController:(id)arg6 analyticsService:(id)arg7 ;
-(id)init;
-(NSString *)localizedTitle;
@end

