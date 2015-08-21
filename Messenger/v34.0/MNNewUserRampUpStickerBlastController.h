/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNExternalForwardDataFetcherListener.h>
#import <Messenger/MNNewUserRampUpThreadBumpRequestSenderDelegate.h>
#import <Messenger/MNForwardSenderListening.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNNewUserRampUpController.h>

@protocol MNForwardSending, MNNewUserRampUpControllerDelegate;
@class FBAnalytics, NSArray, FBUserSession, MNExternalDataToForwardContentMapper, MNNewUserRampUpThreadBumpRequestSender, NSString;

@interface MNNewUserRampUpStickerBlastController : NSObject <MNExternalForwardDataFetcherListener, MNNewUserRampUpThreadBumpRequestSenderDelegate, MNForwardSenderListening, FBClassProvidable, MNNewUserRampUpController> {

	id<MNForwardSending> _forwardSender;
	FBAnalytics* _analytics;
	NSArray* _selectedContacts;
	FBUserSession* _session;
	MNExternalDataToForwardContentMapper* _externalDataToForwardContentMapper;
	MNNewUserRampUpThreadBumpRequestSender* _threadBumpRequestSender;
	id<MNNewUserRampUpControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNNewUserRampUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipients:(id)arg2 singleRecipientToErrorMap:(id)arg3 batchSendResultInfo:(id)arg4 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)messageForwardSender:(id)arg1 willBeginForwardingMessageToRecipient:(id)arg2 remainingRecipientsCount:(unsigned long long)arg3 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipient:(id)arg2 remainingRecipientsCount:(unsigned long long)arg3 error:(id)arg4 ;
-(void)processUserSelectedContacts:(id)arg1 ;
-(id)initWithForwardSender:(id)arg1 externalDataToForwardContentMapper:(id)arg2 analytics:(id)arg3 session:(id)arg4 ;
-(void)_fetchAndSendStickerToSelectedContacts:(id)arg1 ;
-(void)_sendForwardContent:(id)arg1 ;
-(void)_bumpThreads;
-(void)_completeProcessingWithRecipientCount:(long long)arg1 ;
-(void)_completeProcessingWithError:(id)arg1 ;
-(void)newUserRampUpThreadBumpRequestSender:(id)arg1 didBumpThreadsWithRecipients:(id)arg2 ;
-(void)newUserRampUpThreadBumpRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDelegate:(id<MNNewUserRampUpControllerDelegate>)arg1 ;
-(id<MNNewUserRampUpControllerDelegate>)delegate;
@end

