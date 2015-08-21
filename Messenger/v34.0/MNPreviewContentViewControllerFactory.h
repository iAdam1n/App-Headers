/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBMobileConfigContext, FBProvider;
@class FBUserSession, FBMobileConfigFactory, FBMPhotoViewImageDownloadController, NSMutableDictionary, MNPhotoImageRequester, MNComposerTabOrderExperimentContext, MNComposerMoreTabPlatformSampleExperimentContext, NSString;

@interface MNPreviewContentViewControllerFactory : NSObject <FBClassProvidable> {

	FBUserSession* _session;
	FBMobileConfigFactory* _mobileConfigFactory;
	id<FBMobileConfigContext> _composerKitContext;
	FBMPhotoViewImageDownloadController* _photoDownloadController;
	NSMutableDictionary* _controllers;
	NSMutableDictionary* _fetchers;
	MNPhotoImageRequester* _imageRequester;
	id<FBProvider> _recentContentFetcherProvider;
	MNComposerTabOrderExperimentContext* _recentContentExperiment;
	MNComposerMoreTabPlatformSampleExperimentContext* _moreTabPlatformSampleExperiment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)previewContentViewControllerForAppID:(id)arg1 preferedPreviewHeight:(double)arg2 ;
-(BOOL)previewContentAvailableForAppID:(id)arg1 preferedPreviewHeight:(double)arg2 ;
-(id)initWithSession:(id)arg1 mobileConfigFactory:(id)arg2 photoDownloadController:(id)arg3 imageRequester:(id)arg4 recentContentFetcherProvider:(id)arg5 ;
-(id)_fetcherForAppID:(id)arg1 previewHeight:(double)arg2 ;
-(id)_newPreviewContentViewControllerForAppID:(id)arg1 previewHeight:(double)arg2 ;
-(id)_newContentFetcherForAppID:(id)arg1 previewHeight:(double)arg2 ;
-(void)_initRecentContentExperimentContextIfNecessary;
-(void)_initPlatformSampleExperimentContextIfNecessary;
-(id)composerKitContext;
@end

