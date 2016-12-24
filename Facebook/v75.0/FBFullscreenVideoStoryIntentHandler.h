/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPermalinkStoryDownloaderDelegate.h>
#import <Facebook/FBIntentHandler.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, FBPermalinkStoryDownloader, FBVideoDisplayController, FBIntent, NSString;

@interface FBFullscreenVideoStoryIntentHandler : NSObject <FBPermalinkStoryDownloaderDelegate, FBIntentHandler> {

	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	FBPermalinkStoryDownloader* _storyDownloader;
	FBVideoDisplayController* _displayController;
	FBIntent* _intent;
	NSString* _dismissalMenuItemIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleIntent:(id)arg1 ;
-(void)permalinkStoryDownloader:(id)arg1 didFailDownloadWithError:(id)arg2 isCanceled:(BOOL)arg3 ;
-(id)_downloaderForStoryGraphQLID:(id)arg1 ;
-(void)_switchToDismissalMenuItem;
-(void)presentFullScreenPlayerForVideo:(id)arg1 parentStory:(id)arg2 ;
-(void)permalinkStoryDownloaderWillProcessDownload:(id)arg1 ;
-(void)permalinkStoryDownloader:(id)arg1 didCompleteDownloadForStory:(id)arg2 ;
-(void)permalinkStoryDownloaderCouldNotFindStory:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 session:(id)arg2 ;
@end
