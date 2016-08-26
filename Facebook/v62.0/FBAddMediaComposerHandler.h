/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerPublisherStatusListener.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBProfilePictureControllerResponderForwarder.h>

@protocol FBAddMediaComposerHandlerDelegate, FBNavigationCoordinator;
@class FBMemAlbum, FBProfilePicturePickerController, FBProfilePictureControllerResponder, FBPublisherManager, FBUserSession, NSMutableDictionary, UINavigationController, NSString;

@interface FBAddMediaComposerHandler : NSObject <FBComposerPublisherStatusListener, FBComposerFlowDelegate, FBProfilePictureControllerResponderForwarder> {

	FBMemAlbum* _album;
	FBProfilePicturePickerController* _profilePicturePickerController;
	FBProfilePictureControllerResponder* _profilePictureControllerResponder;
	FBPublisherManager* _publisherManager;
	FBUserSession* _session;
	NSMutableDictionary* _eventFilters;
	id<FBAddMediaComposerHandlerDelegate> _delegate;
	UINavigationController* _navigationController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	BOOL _postingAsPage;
	BOOL _needsToNavigateToUsersTimeline;
	BOOL _shouldShowSurveyWhenComposerCompleted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composerHandlerForAlbum:(id)arg1 delegate:(id)arg2 navigationCoordinator:(id)arg3 navigationController:(id)arg4 postingAsPage:(BOOL)arg5 session:(id)arg6 ;
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)profilePicturePickerDidUploadPic:(id)arg1 ;
-(void)profilePicturePickerDidCancel:(id)arg1 ;
-(void)showMediaUploadViewWithSurveyAfterComposerCompleted:(BOOL)arg1 ;
-(id)initWithAlbum:(id)arg1 delegate:(id)arg2 navigationCoordinator:(id)arg3 navigationController:(id)arg4 postingAsPage:(BOOL)arg5 session:(id)arg6 ;
-(void)_coverPhotoDidFinishUploading:(id)arg1 ;
-(void)_showCoverPhotoUploadFlow;
-(void)_showProfilePhotoUploadFlow;
-(void)_showMediaUploadViewForRegularAlbumFlow;
-(void)dealloc;
@end
