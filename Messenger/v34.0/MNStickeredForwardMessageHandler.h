/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPlatformShareDataLoadListener.h>
#import <Messenger/MNForwardMessageViewControllerDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNUserSettings, FBUserSession, MNForwardMessageViewController, MNForwardMessageViewControllerFactory, FBPlatformActionShareProcessor, MNContactsRetrieverSimpleLogger, FBMPhotoMediaAttachmentFactory, NSString;

@interface MNStickeredForwardMessageHandler : NSObject <FBPlatformShareDataLoadListener, MNForwardMessageViewControllerDelegate, FBSessionClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	id<FBProvider> _inboxSuggestedContactsRetrieverProvider;
	MNUserSettings* _userSettings;
	FBUserSession* _session;
	MNForwardMessageViewController* _forwardMessageViewController;
	MNForwardMessageViewControllerFactory* _forwardMessageViewControllerFactory;
	FBPlatformActionShareProcessor* _platformActionShareProcessor;
	MNContactsRetrieverSimpleLogger* _contactsRetrieversSimpleLogger;
	BOOL _presentingForwardMessageViewController;
	FBMPhotoMediaAttachmentFactory* _photoMediaAttachmentFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)platformLoadedRef:(id)arg1 ;
-(void)platformLoadedActionType:(id)arg1 actionParameters:(id)arg2 actionPropertyToCreatedObjectType:(id)arg3 ;
-(void)platformLoadedOGMediaAttachmentsForUpload:(id)arg1 ogMediaAttachmentsForDisplay:(id)arg2 ;
-(void)platformLoadedTaggedUsers:(id)arg1 ;
-(void)platformLoadedPlace:(id)arg1 placeIsUserSelected:(BOOL)arg2 ;
-(void)platformLoadedRobotext:(id)arg1 ;
-(void)platformLoadedAppAttribution:(id)arg1 ;
-(void)platformLoadedImageAttachments:(id)arg1 ;
-(void)platformLoadedVideoAttachment:(id)arg1 ;
-(BOOL)forwardMessageViewControllerShouldHandleForwardWithRecipientInfo:(id)arg1 ;
-(void)forwardMessageViewController:(id)arg1 willForwardMessageWithRecipientInfo:(id)arg2 forwardContent:(id)arg3 ;
-(BOOL)forwardMessageViewControllerShouldShowSentMessageConfirmation:(id)arg1 ;
-(void)forwardMessageViewControllerDidCancel:(id)arg1 ;
-(void)forwardMessageViewController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(BOOL)forwardMessageViewControllerShouldShowCancelButton:(id)arg1 ;
-(BOOL)forwardMessageViewControllerShouldShowCancelButtonDuringSending:(id)arg1 ;
-(void)_handleNavigationForForwardToSingleRecipient:(id)arg1 ;
-(void)_handleNavigationForForwardToManyRecipients:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 forwardMessageViewControllerFactory:(id)arg3 inboxSuggestedContactsRetrieverProvider:(id)arg4 userSettings:(id)arg5 session:(id)arg6 analytics:(id)arg7 photoMediaAttachmentFactory:(id)arg8 ;
-(void)_presentForwardMessageViewControllerWithPhotoAttachments:(id)arg1 ;
-(void)_setupForwardMessageViewControllerWithDataFetcher:(id)arg1 ;
-(void)presentForwardMessageViewControllerFromURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)platformLoadedSharedLink:(id)arg1 ;
-(void)dealloc;
@end

