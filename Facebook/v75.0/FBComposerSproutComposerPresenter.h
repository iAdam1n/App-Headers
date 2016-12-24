/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>

@protocol FBComposerFlowDelegate, FBNavigationCoordinator;
@class NSString, UIView, FBUserSession, FBComposerSproutComposerPresentingSpecifier;

@interface FBComposerSproutComposerPresenter : NSObject <FBComposerFlowDelegate> {

	NSString* _compositionSessionId;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UIView* _presentingView;
	FBUserSession* _session;
	NSString* _sessionIdentifier;
	NSString* _analyticsSourceSurface;
	FBComposerSproutComposerPresentingSpecifier* _specifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)_openComposerWithBootstrapContent:(id)arg1 startingStyleContext:(id)arg2 ;
-(id)bootstrapContentWithAttachments:(id)arg1 traits:(id)arg2 entryPointAnalyticsIdentifier:(id)arg3 ;
-(id)initWithSession:(id)arg1 navigationCoordinatior:(id)arg2 presentingView:(id)arg3 sessionIdentifier:(id)arg4 analyticsSourceSurface:(id)arg5 composerFlowDelegate:(id)arg6 specifier:(id)arg7 ;
-(void)openComposerForFeedPhotosAndVideos;
-(void)openComposerForFeedPhotosOnly;
-(void)openComposerForFeedVideosOnly;
-(void)openComposerForQuestionAndAnswer;
-(void)openComposerForFeedStatus;
-(void)openComposerForBroadcast;
-(void)openComposerForActivity;
-(void)openComposerForLocation;
-(void)openComposerForUserTagging;
-(void)openComposerForMovie;
-(void)openComposerForSellSomething;
-(void)openComposerForAlbum;
-(void)openComposerForAddSponsor;
-(void)openComposerForQuickCamera;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
