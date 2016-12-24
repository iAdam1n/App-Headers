/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComposerPublicationProgressDisplayListener.h>

@protocol FBComposerFlowDelegate;
@class FBUserSession, FBMemGroup, FBPublicationProgressOverlayDisplayer, UIViewController, NSString;

@interface FBGroupsAlbumCreationManager : NSObject <FBComposerFlowDelegate, FBComposerPublicationProgressDisplayListener> {

	FBUserSession* _session;
	FBMemGroup* _group;
	FBPublicationProgressOverlayDisplayer* _publicationDisplayer;
	UIViewController* _hostingViewController;
	id<FBComposerFlowDelegate> _composerFlowDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2 ;
-(void)dismissButtonTappedForPublisherData:(id)arg1 ;
-(void)retryButtonTappedForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1 ;
-(void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2 ;
-(void)_showPublicationWithIdentifier:(id)arg1 ;
-(void)composerFinishedPublishingWithResponse:(id)arg1 ;
-(id)initWithSession:(id)arg1 group:(id)arg2 hostingViewController:(id)arg3 composerFlowDelegate:(id)arg4 ;
-(void)handleAlbumCreationFlowPresentation;
@end
