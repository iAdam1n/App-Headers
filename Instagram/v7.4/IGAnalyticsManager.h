/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSRegularExpression;

@interface IGAnalyticsManager : NSObject {

	BOOL _cachedRequestSamplingFlag;
	NSRegularExpression* _cdnSuffixRegex;

}

@property (assign,nonatomic) BOOL cachedRequestSamplingFlag;                    //@synthesize cachedRequestSamplingFlag=_cachedRequestSamplingFlag - In the implementation block
@property (nonatomic,retain) NSRegularExpression * cdnSuffixRegex;              //@synthesize cdnSuffixRegex=_cdnSuffixRegex - In the implementation block
-(void)updateCachedRequestSamplingFlag;
-(void)appDidLaunch:(id)arg1 ;
-(void)exploreFollowPeopleOpened:(id)arg1 ;
-(void)exploreRecommendPeopleSkip:(id)arg1 ;
-(void)exploreRecommendPeopleFollow:(id)arg1 ;
-(void)mediaUploadFailed:(id)arg1 ;
-(void)shareServiceChanged:(id)arg1 ;
-(void)willShareMedia:(id)arg1 ;
-(void)saveOriginalPhotosSettingChanged:(id)arg1 ;
-(void)privatePostsSettingChanged:(id)arg1 ;
-(void)autoplayVideoSettingChanged:(id)arg1 ;
-(void)preloadVideoSettingChanged:(id)arg1 ;
-(void)logDeviceInformation;
-(void)onCameraRollInitialized;
-(void)onPhotoPermissionsPrompted:(id)arg1 ;
-(void)onPushPermissionPrompted:(id)arg1 ;
-(void)onLocationAuthorizationStatusAuthorized:(id)arg1 ;
-(void)onLocationAuthorizationStatusDenied:(id)arg1 ;
-(void)onLocationPermissionInstructionsPrompted:(id)arg1 ;
-(void)onLocationUpdated:(id)arg1 ;
-(void)onLocationDenied:(id)arg1 ;
-(void)videoCacheAccess:(id)arg1 ;
-(void)imageCacheAccess:(id)arg1 ;
-(void)onUserLoginCompleted:(id)arg1 ;
-(void)onNetworkRequest:(id)arg1 ;
-(void)viewDidPullToRefresh:(id)arg1 ;
-(void)feedDidScrollToBottom:(id)arg1 ;
-(void)handleUserIDUpdated:(id)arg1 ;
-(void)handleFacebookIDUpdated:(id)arg1 ;
-(void)logTimeSpent;
-(void)onCommentDeleteButtonTapped:(id)arg1 ;
-(void)onCommentSwipeToDelete:(id)arg1 ;
-(void)onCommentUndoAlertBarTapped:(id)arg1 ;
-(void)onCommentBulkDeleteOperation:(id)arg1 ;
-(void)mediaLoaderRequestDidFail:(id)arg1 ;
-(void)onInAppBrowserBack:(id)arg1 ;
-(void)onInAppBrowserForward:(id)arg1 ;
-(void)onInAppBrowserLoadURL:(id)arg1 ;
-(void)onInAppBrowserLoadURLError:(id)arg1 ;
-(void)onInAppBrowserPageLoaded:(id)arg1 ;
-(void)setCachedRequestSamplingFlag:(BOOL)arg1 ;
-(BOOL)cachedRequestSamplingFlag;
-(BOOL)shouldRecordRequest:(id)arg1 ;
-(id)labelForRequestIfInstrumented:(id)arg1 ;
-(BOOL)isInternalAPIUrl:(id)arg1 ;
-(id)labelForInternalAPIUrl:(id)arg1 ;
-(BOOL)isCDNURL:(id)arg1 ;
-(id)cdnSuffixFromPath:(id)arg1 ;
-(BOOL)isInstagramURL:(id)arg1 ;
-(NSRegularExpression *)cdnSuffixRegex;
-(void)onPermalinkOpen:(id)arg1 ;
-(void)onPermalinkClosed:(id)arg1 ;
-(void)onExploreFetched:(id)arg1 ;
-(void)setCdnSuffixRegex:(NSRegularExpression *)arg1 ;
-(void)dealloc;
-(id)init;
@end
