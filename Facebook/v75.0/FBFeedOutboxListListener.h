/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedOutboxListListener <NSObject>
@required
-(void)reapedStoriesDueToTimeoutWithNoOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
-(void)reapedStoriesDueToTimeoutWithOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
-(void)feedUpdatedAndNoOutboxStoriesStillBeingDisplayedWithStoriesReapedFromFeedChange:(id)arg1;
-(void)progressAnimationFinishedForStoryRepresentingPublicationWithIdentifier:(id)arg1;
-(void)storyProgressNoLongerVisibleForPublicationWithIdentifier:(id)arg1;
-(void)tappedCancelButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
-(void)tappedErrorButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
-(void)tappedPauseButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
-(void)tappedRetryButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
-(void)tappedReuploadInLowQualityButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;

@end
