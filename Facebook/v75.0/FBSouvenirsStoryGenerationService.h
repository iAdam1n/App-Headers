/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAssetsLibraryListener.h>
#import <Facebook/FBGbdtClassifierDownloadManagerDelegate.h>
#import <Facebook/FBAppService.h>

@class FBUserSession, FBAssetsLibrary, FBMagicStoriesClassifier, FBGbdtClassifierDownloadManager, NSString;

@interface FBSouvenirsStoryGenerationService : NSObject <FBAssetsLibraryListener, FBGbdtClassifierDownloadManagerDelegate, FBAppService> {

	FBUserSession* _session;
	BOOL _startedFirstIndex;
	double _serviceStartTime;
	FBAssetsLibrary* _assetsLibrary;
	FBMagicStoriesClassifier* _storyClassifier;
	FBGbdtClassifierDownloadManager* _classifierDownloadManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)assetsLibraryDidLoadAssets;
-(void)gbdtClassifierDownloadManager:(id)arg1 didDownloadModelParams:(id)arg2 ;
-(void)gbdtClassifierDownloadManager:(id)arg1 didDownloadFeaturesVector:(id)arg2 ;
-(void)gbdtClassifierDownloadManagerNeedsClassification:(id)arg1 ;
-(void)gbdtClassifierDownloadManagerFailed:(id)arg1 withError:(id)arg2 ;
-(void)_indexAllAssetsInBackgroundWithReason:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
