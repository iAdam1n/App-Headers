/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNModalPresentation, MNAlertControllerPresenting, MNSaveAttachmentControlling, MNConfirmationViewPresenting;
@class FBProviderMapData, NSMutableDictionary, FBUserSession, MNMontageViewModelSubscriptionService, MNPhotoViewImageDownloadController, MNAppMessageAttachmentUtils, MNCDNProfileImageDownloader, MNThreadParticipantNameFormatter, FBMThreadMessageSender, MNClippedProfileImageLoader, MNPeopleCellFactory, MNThreadUpdateRunningService, MNMessageSendNotEligibleAlertController, MNVideoAttachmentPrefetcher, MNMessageSendProgressSubscriptionCenter, FBMLoggedInUserInfoManager, MNMontageNuxSeenManager, NSString;

@interface MNMontageViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	NSMutableDictionary* _montageAudienceManagerMap;
	FBUserSession* _session;
	MNMontageViewModelSubscriptionService* _montageViewModelSubscriptionService;
	MNPhotoViewImageDownloadController* _photoViewImageDownloadController;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBMThreadMessageSender* _threadMessageSender;
	MNClippedProfileImageLoader* _clippedProfileImageLoader;
	id<MNModalPresentation> _modalPresenter;
	MNPeopleCellFactory* _peopleCellFactory;
	MNThreadUpdateRunningService* _threadSummaryUpdateService;
	MNMessageSendNotEligibleAlertController* _messageSendNotEligibleAlertController;
	id<MNAlertControllerPresenting> _alertControllerPresenter;
	id<MNSaveAttachmentControlling> _saveAttachmentController;
	MNVideoAttachmentPrefetcher* _videoAttachmentPrefetcher;
	MNMessageSendProgressSubscriptionCenter* _sendProgressSubscriptionCenter;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNMontageNuxSeenManager* _montageNuxSeenManager;
	id<MNConfirmationViewPresenting> _confirmationViewPresenter;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMontageViewModelSubscriptionService * montageViewModelSubscriptionService;                  //@synthesize montageViewModelSubscriptionService=_montageViewModelSubscriptionService - In the implementation block
@property (nonatomic,readonly) MNPhotoViewImageDownloadController * photoViewImageDownloadController;                        //@synthesize photoViewImageDownloadController=_photoViewImageDownloadController - In the implementation block
@property (nonatomic,readonly) MNAppMessageAttachmentUtils * attachmentUtils;                                                //@synthesize attachmentUtils=_attachmentUtils - In the implementation block
@property (nonatomic,readonly) MNCDNProfileImageDownloader * profileImageDownloader;                                         //@synthesize profileImageDownloader=_profileImageDownloader - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                                             //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) FBMThreadMessageSender * threadMessageSender;                                                 //@synthesize threadMessageSender=_threadMessageSender - In the implementation block
@property (nonatomic,readonly) MNClippedProfileImageLoader * clippedProfileImageLoader;                                      //@synthesize clippedProfileImageLoader=_clippedProfileImageLoader - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                                       //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNPeopleCellFactory * peopleCellFactory;                                                      //@synthesize peopleCellFactory=_peopleCellFactory - In the implementation block
@property (nonatomic,readonly) MNThreadUpdateRunningService * threadSummaryUpdateService;                                    //@synthesize threadSummaryUpdateService=_threadSummaryUpdateService - In the implementation block
@property (nonatomic,readonly) MNMessageSendNotEligibleAlertController * messageSendNotEligibleAlertController;              //@synthesize messageSendNotEligibleAlertController=_messageSendNotEligibleAlertController - In the implementation block
@property (nonatomic,readonly) id<MNAlertControllerPresenting> alertControllerPresenter;                                     //@synthesize alertControllerPresenter=_alertControllerPresenter - In the implementation block
@property (nonatomic,readonly) id<MNSaveAttachmentControlling> saveAttachmentController;                                     //@synthesize saveAttachmentController=_saveAttachmentController - In the implementation block
@property (nonatomic,readonly) MNVideoAttachmentPrefetcher * videoAttachmentPrefetcher;                                      //@synthesize videoAttachmentPrefetcher=_videoAttachmentPrefetcher - In the implementation block
@property (nonatomic,readonly) MNMessageSendProgressSubscriptionCenter * sendProgressSubscriptionCenter;                     //@synthesize sendProgressSubscriptionCenter=_sendProgressSubscriptionCenter - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                         //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) MNMontageNuxSeenManager * montageNuxSeenManager;                                              //@synthesize montageNuxSeenManager=_montageNuxSeenManager - In the implementation block
@property (nonatomic,readonly) id<MNConfirmationViewPresenting> confirmationViewPresenter;                                   //@synthesize confirmationViewPresenter=_confirmationViewPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(MNPhotoViewImageDownloadController *)photoViewImageDownloadController;
-(id<MNAlertControllerPresenting>)alertControllerPresenter;
-(MNMontageViewModelSubscriptionService *)montageViewModelSubscriptionService;
-(id)nonCachedComposeViewController;
-(id)nonCachedActionSheetPresenter;
-(FBMThreadMessageSender *)threadMessageSender;
-(MNMessageSendNotEligibleAlertController *)messageSendNotEligibleAlertController;
-(MNCDNProfileImageDownloader *)profileImageDownloader;
-(id)montageAudienceManagerWithIdentifier:(id)arg1 ;
-(MNPeopleCellFactory *)peopleCellFactory;
-(id<MNSaveAttachmentControlling>)saveAttachmentController;
-(id)nonCachedMontageAudienceSettingsViewController;
-(MNThreadUpdateRunningService *)threadSummaryUpdateService;
-(MNAppMessageAttachmentUtils *)attachmentUtils;
-(MNClippedProfileImageLoader *)clippedProfileImageLoader;
-(id<MNConfirmationViewPresenting>)confirmationViewPresenter;
-(id)forwardSenderProvider;
-(MNMontageNuxSeenManager *)montageNuxSeenManager;
-(id)nonCachedForwardFlowControllerFactory;
-(id)nonCachedSuggestedContactsRetriever;
-(MNMessageSendProgressSubscriptionCenter *)sendProgressSubscriptionCenter;
-(MNVideoAttachmentPrefetcher *)videoAttachmentPrefetcher;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(FBUserSession *)session;
@end
