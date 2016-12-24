/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentHandler.h>
#import <Facebook/FBNativeArticleViewControllerDelegate.h>
#import <Facebook/FBNativeArticlePresentationController.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, NSString, FBNativeArticleDurationTracker, FBAnalyticsInfo, FBNativeArticleViewController, NSMutableSet, FBNativeArticleSessionMetadataTracker;

@interface FBNativeArticleStackPresentationController : NSObject <FBIntentHandler, FBNativeArticleViewControllerDelegate, FBNativeArticlePresentationController> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _fallbackIntentHandler;
	BOOL _browserOpened;
	NSString* _articleSessionID;
	FBNativeArticleDurationTracker* _sessionDurationTracker;
	FBAnalyticsInfo* _analyticsInfo;
	FBNativeArticleViewController* _articleOpenedFromFeed;
	NSMutableSet* _openedArticleIDs;
	NSMutableSet* _openedArticleIDsFromOriginalPublisher;
	FBNativeArticleSessionMetadataTracker* _sessionMetadataTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleIntent:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 ;
-(void)_didEnterForeground;
-(void)articleViewControllerDidFinishLoadingContentController:(id)arg1 error:(id)arg2 ;
-(void)presentArticleReaderWithIntent:(id)arg1 ;
-(id)_articleViewControllerFromArticleId:(id)arg1 shareURL:(id)arg2 analyticsInfo:(id)arg3 ;
-(id)_shareHandlerForIntent:(id)arg1 ;
-(void)dealloc;
-(void)_didEnterBackground;
@end
