/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGFeedItemTrackingManager : NSObject
+(id)currentModule;
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 userInfo:(id)arg3 ;
+(id)sponsoredFeedItemTracker;
+(id)trackerForFeedItem:(id)arg1 ;
+(id)trackingTokenStringTypeForPost:(id)arg1 ;
+(id)trackingTokenStringForPost:(id)arg1 ;
+(BOOL)useNoLatencyLoggingForPost:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 ;
+(void)removeFeedItem:(id)arg1 ;
+(BOOL)allowSponsoredPostForFeedItem:(id)arg1 ;
+(BOOL)allowOrganicTrackingForFeedItem:(id)arg1 ;
+(id)organicFeedItemTracker;
+(BOOL)allowExploreTrackingForFeedItem:(id)arg1 ;
+(id)exploreFeedItemTracker;
+(BOOL)isMainFeed;
+(BOOL)isCommentingFromMainFeed;
+(id)websiteClickLinkForFeedItem:(id)arg1 ;
-(void)commentButtonTapped:(id)arg1 ;
-(void)surveyWillAppear:(id)arg1 ;
-(void)surveyAnswered:(id)arg1 ;
-(void)surveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftSurveyWillAppear:(id)arg1 ;
-(void)brandLiftQuestionAnswered:(id)arg1 ;
-(void)brandLiftSurveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftQuestionDidDismiss:(id)arg1 ;
-(void)didFinishBrowsingWebview:(id)arg1 ;
-(void)feedItemHideReasonSelected:(id)arg1 ;
-(void)commentPosted:(id)arg1 ;
-(void)feedItemLiked:(id)arg1 ;
-(void)feedItemUnliked:(id)arg1 ;
-(void)feedItemDidAppear:(id)arg1 ;
-(void)feedItemViewingStarted:(id)arg1 ;
-(void)feedItemDidDisappear:(id)arg1 ;
-(void)feedItemUserTapped:(id)arg1 ;
-(void)feedItemLocationTapped:(id)arg1 ;
-(void)feedItemURLTapped:(id)arg1 ;
-(void)headerLabelTapped:(id)arg1 ;
-(void)moreButtonTapped:(id)arg1 ;
-(void)feedItemsDidUpdate:(id)arg1 ;
-(void)videoCompleted:(id)arg1 ;
-(void)feedItemReportInappropriate:(id)arg1 ;
-(void)didViewStoreProduct:(id)arg1 ;
-(void)didTakeDirectResponseAction:(id)arg1 ;
-(void)didTapHeaderTitle:(id)arg1 ;
-(void)didTapHeaderImage:(id)arg1 ;
-(void)didTapMedia:(id)arg1 ;
-(void)videoShouldStartPlaying:(id)arg1 ;
-(void)videoStarted:(id)arg1 ;
-(void)videoUnpaused:(id)arg1 ;
-(void)videoTapped:(id)arg1 ;
-(void)videoPaused:(id)arg1 ;
-(void)analyticsNoLatencyUploadSuccess:(id)arg1 ;
-(void)includeVideoMetadataFromNotification:(id)arg1 intoEvent:(id)arg2 ;
-(id)stringForVideoPlaybackReason:(long long)arg1 ;
-(id)stringForVideoStopReason:(long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

