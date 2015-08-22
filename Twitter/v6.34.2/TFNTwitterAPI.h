/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterAuthenticatedAPIRequest.h>

@class NSString, TFNTwitterAccount, TFNTwitterAPICredentials, TFNTwitterAPIConfiguration;

@interface TFNTwitterAPI : NSObject <TFNTwitterAuthenticatedAPIRequest> {

	NSString* _apiRoot;
	TFNTwitterAccount* _authenticateWithAccount;
	TFNTwitterAPICredentials* _authenticateWithCredentials;
	/*^block*/id _responseBlock;
	/*^block*/id _progressBlock;
	unsigned long long _backgroundTaskIdentifier;
	TFNTwitterAPIConfiguration* _configuration;
	BOOL _requireSystemAuth;
	BOOL _allowPartialAuth;
	BOOL _useInRequestOAuth;
	unsigned long long _authType;

}

@property (assign,nonatomic) BOOL requireSystemAuth;                   //@synthesize requireSystemAuth=_requireSystemAuth - In the implementation block
@property (assign,nonatomic) BOOL allowPartialAuth;                    //@synthesize allowPartialAuth=_allowPartialAuth - In the implementation block
@property (assign,nonatomic) BOOL useInRequestOAuth;                   //@synthesize useInRequestOAuth=_useInRequestOAuth - In the implementation block
@property (assign,nonatomic) unsigned long long authType;              //@synthesize authType=_authType - In the implementation block
@property (nonatomic,copy) id responseBlock;                           //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,copy) id progressBlock;                           //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultHeaders;
+(id)cardDataWithJSONDictionary:(id)arg1 ;
+(id)typeaheadParameterForCacheUpdateDate:(id)arg1 ;
+(id)_typeaheadDefaultHeaders;
+(id)typeaheadParameterForResultType:(long long)arg1 ;
+(id)_typeaheadParameterForSourceType:(unsigned long long)arg1 ;
+(id)stringForTwitterSearchResultType:(unsigned long long)arg1 ;
+(id)scribeEndpointURL;
+(id)mentionsResponseParserQueue;
+(id)_cachedAdvertisingInformationIfAvailable;
+(id)baseRequestWithPartialURL:(id)arg1 parameters:(id)arg2 multiPartFormData:(id)arg3 apiRoot:(id)arg4 ;
+(id)_baseRequestWithPartialURL:(id)arg1 parameters:(id)arg2 multiPartFormData:(id)arg3 apiRoot:(id)arg4 ;
+(id)baseRequest;
+(void)loadResultDictionaryWithAccount:(id)arg1 richTimelineData:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)baseRequestWithPartialURL:(id)arg1 parameters:(id)arg2 apiRoot:(id)arg3 ;
+(id)userAgentProvider;
+(void)setUserAgentProvider:(id)arg1 ;
+(id)requestWithAPIRoot:(id)arg1 configuration:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
+(id)defaultApiRoot;
+(id)defaultUploadApiV11Root;
+(id)defaultDmApiV11Root;
+(id)authenticatedRequestWithAPIRoot:(id)arg1 account:(id)arg2 credentials:(id)arg3 configuration:(id)arg4 responseBlock:(/*^block*/id)arg5 ;
+(id)authenticatedRequestWithAPIRoot:(id)arg1 account:(id)arg2 configuration:(id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)appTokenExchange;
-(void)postChallengeResponseForRequestWithID:(id)arg1 withChallengeResponse:(id)arg2 ;
-(void)deleteChallengeResponse:(id)arg1 ;
-(void)getActiveLoginChallenge;
-(void)canRegisterForLoginVerification:(id)arg1 ;
-(void)registerForLoginVerification:(id)arg1 keyHash:(id)arg2 count:(id)arg3 ;
-(void)unregisterForLoginVerification:(BOOL)arg1 publicKey:(id)arg2 ;
-(void)fetchMomentsGuideWithHydrationCount:(unsigned long long)arg1 ;
-(void)fetchPivotCapsulesForMomentID:(id)arg1 ;
-(void)subscribeToMomentID:(id)arg1 ;
-(void)unsubscribeFromMomentID:(id)arg1 ;
-(void)_handleMomentsGuideRequest:(id)arg1 ;
-(void)_handleMomentCapsuleRequest:(id)arg1 ;
-(void)_handleSubscriptionRequest:(id)arg1 ;
-(void)_handlePivotRequest:(id)arg1 ;
-(void)fetchMomentCapsuleForMomentID:(id)arg1 hydrationCount:(unsigned long long)arg2 ;
-(void)getNewsDetailsForNewsId:(id)arg1 country:(id)arg2 language:(id)arg3 ;
-(void)getTopNewsForCountry:(id)arg1 language:(id)arg2 ;
-(void)guestActivate;
-(void)reverseAuthRequestToken;
-(void)reverseAuthAccessTokenWithReverseAuthParameters:(id)arg1 ;
-(void)unwrapURLAsUserClick:(id)arg1 ;
-(void)_unwrapWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(void)expandURLSlugs:(id)arg1 ;
-(void)addPostalAddress:(id)arg1 ;
-(/*^block*/id)adsAccountsResponseBlock;
-(void)adsAccounts;
-(void)profileSpotlightForUserID:(id)arg1 ;
-(/*^block*/id)profileSpotlightResponseBlock;
-(id)profileSpotlightWithJSONData:(id)arg1 error:(id*)arg2 ;
-(void)_getSignatureForParameters:(id)arg1 ;
-(void)getPaymentProfiles;
-(void)getSignatureForOffersCreditCard:(id)arg1 ;
-(void)addCommercePhoneNumber:(id)arg1 ;
-(void)getSignatureForAddingBillingAddress:(id)arg1 toCreditCard:(id)arg2 ;
-(void)addBillingAddress:(id)arg1 toCreditCard:(id)arg2 signature:(id)arg3 timestamp:(id)arg4 ;
-(void)getSignatureForPaymentMethodCreditCard:(id)arg1 andAddPostalAddress:(id)arg2 includeEmailAddress:(BOOL)arg3 emailAddress:(id)arg4 ;
-(void)addCreditCard:(id)arg1 signature:(id)arg2 timestamp:(id)arg3 storeForRedemption:(BOOL)arg4 ;
-(void)deletePaymentProfiles;
-(void)createContactEmail:(id)arg1 ;
-(void)getProductInfo:(id)arg1 forShippingAddress:(id)arg2 allowUnconfirmedEmail:(BOOL)arg3 ;
-(void)authorizePurchaseOfProduct:(id)arg1 withCreditCard:(id)arg2 ;
-(void)createCart:(id)arg1 ;
-(void)purchaseWithCart:(id)arg1 ;
-(void)getPurchaseHistoryPagedFrom:(id)arg1 ;
-(void)getPurchaseRecord:(id)arg1 ;
-(void)getOfferDetails:(id)arg1 ;
-(void)saveOffer:(id)arg1 ;
-(void)dismissSuggestsInfo:(id)arg1 statusIDNumber:(id)arg2 ;
-(void)getSuggestsTimelineForUpCursor:(id)arg1 downCursor:(id)arg2 count:(id)arg3 source:(long long)arg4 retryConfiguration:(id)arg5 ;
-(/*^block*/id)_suggestsResponseBlockWithNetworkOperation:(id)arg1 ;
-(/*^block*/id)_suggestsAttemptResponseBlockWithNetworkOperation:(id)arg1 ;
-(void)phoneSignupStartVerificationWithPhoneNumber:(id)arg1 simCountryCode:(id)arg2 enableNotifications:(BOOL)arg3 ;
-(void)completeVerificationWithPhoneNumber:(id)arg1 token:(id)arg2 enableNotifications:(BOOL)arg3 ;
-(void)completeSMSUnlockAccountWithPhoneNumber:(id)arg1 pin:(id)arg2 ;
-(void)phoneSignupCompleteVerificationWithPhoneNumber:(id)arg1 pin:(id)arg2 ;
-(void)registerPhoneNumber:(id)arg1 withTextMessage:(id)arg2 sendNumericPin:(BOOL)arg3 enableNotifications:(BOOL)arg4 ;
-(void)unregisterPhoneNumberWithPassword:(id)arg1 ;
-(void)startSMSUnlockAccountWithPhoneNumber:(id)arg1 ;
-(void)businessProfileForUserID:(id)arg1 ;
-(/*^block*/id)businessProfilesResponseBlock;
-(/*^block*/id)_promptSuggestionResponseBlock;
-(/*^block*/id)_multiPromptSuggestionResponseBlock;
-(/*^block*/id)_promptActionResponseBlock;
-(void)_promptSuggested:(id)arg1 withError:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)_multiPromptSuggested:(id)arg1 withError:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)getPromptSuggestion:(id)arg1 ;
-(void)getMultiPromptSuggestion:(id)arg1 ;
-(void)recordAction:(unsigned long long)arg1 forPrompt:(id)arg2 ;
-(/*^block*/id)_profileTweetsResponseBlock;
-(void)getProfileTweetsTimelineForUser:(id)arg1 upCursor:(id)arg2 downCursor:(id)arg3 source:(long long)arg4 referralSource:(id)arg5 includePromotedContent:(BOOL)arg6 ;
-(id)cardPreviewRequestWithComposerText:(id)arg1 ;
-(void)_requestDidComplete:(id)arg1 ;
-(void)fetchInstallReferral;
-(void)unfollowCustomTimeline:(id)arg1 ;
-(void)followCustomTimeline:(id)arg1 ;
-(void)customTimeline:(id)arg1 addStatus:(id)arg2 ;
-(void)customTimelineStatuses:(id)arg1 minPosition:(id)arg2 maxPosition:(id)arg3 count:(id)arg4 ;
-(void)customTimelineWithID:(id)arg1 ;
-(void)customTimelinesOwnedByUserID:(id)arg1 cursor:(id)arg2 ;
-(void)customTimelinesFollowedByUserID:(id)arg1 cursor:(id)arg2 ;
-(id)appTrackingDictionary:(id)arg1 ;
-(void)appEventTrackingWithParameters:(id)arg1 ;
-(/*^block*/id)_appEventTrackingResponseBlock;
-(void)deleteMediaTagsFromStatus:(id)arg1 mediaIDs:(id)arg2 userIDs:(id)arg3 ;
-(id)_errorForMediaUploadRequestFailure:(id)arg1 errorCode:(long long)arg2 uploadInfo:(id)arg3 ;
-(id)_mediaUploadWithMultipartFormData:(id)arg1 dataSize:(unsigned long long)arg2 ;
-(id)mediaUploadInitSessionWithSize:(unsigned long long)arg1 mimeType:(id)arg2 ;
-(id)mediaUploadAppendSessionWithMediaID:(id)arg1 segmentData:(id)arg2 segmentIndex:(long long)arg3 segmentSize:(unsigned long long)arg4 totalSize:(unsigned long long)arg5 start:(unsigned long long)arg6 end:(unsigned long long)arg7 retryPolicyProvider:(id)arg8 ;
-(id)mediaUploadFinalizeSessionWithMediaID:(id)arg1 size:(unsigned long long)arg2 ;
-(id)mediaUploadWithPath:(id)arg1 type:(long long)arg2 size:(unsigned long long)arg3 ;
-(id)mediaUploadWithData:(id)arg1 type:(long long)arg2 ;
-(id)trendsPlusRequestParameters;
-(id)_trendModules;
-(void)_v1_1_GET:(id)arg1 parameters:(id)arg2 headers:(id)arg3 serializationBlock:(/*^block*/id)arg4 ;
-(void)trendsPlus;
-(void)createUserMuteForUserID:(id)arg1 username:(id)arg2 expiry:(id)arg3 ;
-(void)deleteUserMuteForUserID:(id)arg1 username:(id)arg2 ;
-(void)listMutedUserIDsWithCursor:(id)arg1 includeExpiry:(BOOL)arg2 polling:(BOOL)arg3 ;
-(void)listMutedUsersWithCursor:(id)arg1 includeStatuses:(BOOL)arg2 includeExpiry:(BOOL)arg3 polling:(BOOL)arg4 ;
-(void)translationForStatusID:(id)arg1 language:(id)arg2 ;
-(void)blobstoreUploadToAppBucket:(id)arg1 contentType:(id)arg2 filepath:(id)arg3 filesize:(unsigned long long)arg4 expiresAt:(id)arg5 ;
-(void)productPageWithID:(id)arg1 ;
-(void)handleUserStreamEvent:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(id)openUserStreamWithTrack:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(void)recommendationsForUsersSimilarToUserID:(id)arg1 orUsername:(id)arg2 limit:(id)arg3 excluded:(id)arg4 displayLocation:(id)arg5 ;
-(void)recommendationsForUsersSimilarToUserID:(id)arg1 orUsername:(id)arg2 limit:(id)arg3 referralSource:(id)arg4 excluded:(id)arg5 displayLocation:(id)arg6 ;
-(void)extendedProfileForUsername:(id)arg1 ;
-(void)lookupUsersWithIDs:(id)arg1 ;
-(void)lookupUsersWithUsernames:(id)arg1 ;
-(void)categoryForSlug:(id)arg1 country:(id)arg2 ;
-(void)categoryForSlug:(id)arg1 language:(id)arg2 country:(id)arg3 ;
-(void)searchUsers:(id)arg1 count:(id)arg2 ;
-(void)emailAvailability:(id)arg1 ;
-(void)usernameAvailability:(id)arg1 fullName:(id)arg2 email:(id)arg3 ;
-(void)screenNameSuggestionWithFullName:(id)arg1 email:(id)arg2 username:(id)arg3 ;
-(void)suggestedDeviceFollowForUserID:(id)arg1 ;
-(void)userWithUsername:(id)arg1 ;
-(void)phoneNumberAvailability:(id)arg1 simCountryCode:(id)arg2 ;
-(void)userWithID:(id)arg1 ;
-(void)suggestedUsersForCategory:(id)arg1 language:(id)arg2 country:(id)arg3 ;
-(void)phoneInfo;
-(void)friendsForUserID:(id)arg1 cursor:(id)arg2 count:(id)arg3 type:(id)arg4 ;
-(void)_userRecommendationsResponse:(id)arg1 ;
-(void)_phoneNumberAvailabilityRequest:(id)arg1 simCountryCode:(id)arg2 ;
-(void)_bulkLookupUsersByParameter:(id)arg1 withValues:(id)arg2 ;
-(void)friendsForUserID:(id)arg1 cursor:(id)arg2 ;
-(void)friendsForUserID:(id)arg1 cursor:(id)arg2 count:(id)arg3 ;
-(void)friendsForUsername:(id)arg1 cursor:(id)arg2 ;
-(void)followersForUserID:(id)arg1 cursor:(id)arg2 ;
-(void)followersForUsername:(id)arg1 cursor:(id)arg2 ;
-(void)verifiedFollowersForUserID:(id)arg1 cursor:(id)arg2 ;
-(void)deviceFollowingForUserID:(id)arg1 cursor:(id)arg2 ;
-(void)deviceFollowingIDsForUserID:(id)arg1 cursor:(id)arg2 ;
-(void)suggestionCategoriesForLanguage:(id)arg1 country:(id)arg2 ;
-(void)categoryForSlug:(id)arg1 ;
-(void)suggestedUsersForCategory:(id)arg1 ;
-(void)uploadAndMatchContacts:(id)arg1 ;
-(void)reverseAddressBookLookup;
-(void)derivedInfo;
-(void)typeaheadPrefetchedTopicsWithMaxResults:(unsigned long long)arg1 lastCacheUpdate:(id)arg2 filter:(BOOL)arg3 ;
-(void)typeaheadPrefetchedUsersWithMaxResults:(unsigned long long)arg1 lastCacheUpdate:(id)arg2 ;
-(void)typeaheadPrefetchedOneClicks;
-(void)typeaheadSuggestionsForQuery:(id)arg1 resultType:(long long)arg2 forSource:(unsigned long long)arg3 maxResults:(id)arg4 filter:(BOOL)arg5 ;
-(id)_trendTypesForModuleOptions:(unsigned long long)arg1 ;
-(void)trendLocationsAt:(id)arg1 ;
-(void)trendsAtLocationWithID:(id)arg1 options:(unsigned long long)arg2 excludePromotedContent:(BOOL)arg3 ;
-(void)userTimelineForUsername:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 referralSource:(id)arg5 promotedContent:(BOOL)arg6 ;
-(void)userTimelineForUserID:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 referralSource:(id)arg5 promotedContent:(BOOL)arg6 ;
-(void)mediaTimelineWithUserID:(id)arg1 username:(id)arg2 count:(id)arg3 sinceID:(id)arg4 maxID:(id)arg5 ;
-(void)statusWithID:(id)arg1 ;
-(void)conversationForStatusWithID:(id)arg1 since:(id)arg2 max:(id)arg3 count:(id)arg4 ;
-(void)suggestedTimelineForTweetID:(id)arg1 userID:(id)arg2 impressionID:(id)arg3 conversation:(id)arg4 showPromoted:(BOOL)arg5 ;
-(void)userTimelineForUsername:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 polling:(BOOL)arg5 referralSource:(id)arg6 promotedContent:(BOOL)arg7 ;
-(id)_tweetRetryPolicyProvider;
-(/*^block*/id)_statusSendResponseBlock:(id)arg1 ;
-(/*^block*/id)_tweetAttemptResponseBlock:(id)arg1 ;
-(/*^block*/id)_statusDestroyResponseBlock;
-(void)friendsTimelineSinceID:(id)arg1 maxID:(id)arg2 count:(id)arg3 polling:(BOOL)arg4 ;
-(void)updateWithComposition:(id)arg1 timeout:(double)arg2 ;
-(void)destroyStatus:(id)arg1 ;
-(void)reportStatusAsSpam:(id)arg1 spamType:(id)arg2 blockUser:(BOOL)arg3 ;
-(void)statusesWithIDs:(id)arg1 ;
-(void)reportSpamUserID:(id)arg1 impressionID:(id)arg2 shouldBlockUser:(BOOL)arg3 isEarned:(BOOL)arg4 ;
-(void)reportSpamUsername:(id)arg1 impressionID:(id)arg2 shouldBlockUser:(BOOL)arg3 isEarned:(BOOL)arg4 ;
-(id)_requestParameterWithValues:(id)arg1 ;
-(id)_requestParametersForSearch:(id)arg1 experiments:(id)arg2 searchFeatures:(id)arg3 count:(id)arg4 prevCursor:(id)arg5 nextCursor:(id)arg6 ;
-(void)search:(id)arg1 experiments:(id)arg2 count:(id)arg3 prevCursor:(id)arg4 nextCursor:(id)arg5 polling:(BOOL)arg6 searchFeatures:(id)arg7 ;
-(id)requestDescriptionForSearch:(id)arg1 experiments:(id)arg2 searchFeatures:(id)arg3 ;
-(/*^block*/id)_scribeJSONResponseBlock;
-(void)scribeEvents:(id)arg1 eventParameters:(id)arg2 withURL:(id)arg3 isCompressed:(BOOL)arg4 ;
-(void)scribeThriftEvents:(id)arg1 withURL:(id)arg2 ;
-(void)retweet:(id)arg1 ;
-(/*^block*/id)_retweetResponseBlockWithScribeNetworkOperation:(id)arg1 ;
-(/*^block*/id)_retweetAttemptResponseBlockWithScribeNetworkOperation:(id)arg1 ;
-(void)_retweetLogNetworkOperation:(id)arg1 response:(id)arg2 ;
-(void)_queryServerPushDestinationsWithToken:(id)arg1 useHoldbackMaxPushVersion:(BOOL)arg2 ;
-(void)_didUnregisterForPush:(id)arg1 ;
-(void)registerForPushWithDeviceToken:(id)arg1 enabledFor:(long long)arg2 appVersion:(long long)arg3 useHoldbackMaxPushVersion:(BOOL)arg4 ;
-(void)loadPushSettingsUseHoldbackMaxPushVersion:(BOOL)arg1 ;
-(void)unregisterForPushUnauthenticatedWithUsername:(id)arg1 clientApplicationID:(id)arg2 ;
-(void)unregisterForPush;
-(void)logPromotedUser:(id)arg1 event:(long long)arg2 ;
-(void)logPromotedTrend:(id)arg1 event:(long long)arg2 ;
-(void)logPromotedTweet:(id)arg1 event:(long long)arg2 ;
-(void)_logPromotedImpression:(id)arg1 event:(long long)arg2 logType:(long long)arg3 isEarned:(BOOL)arg4 ;
-(void)_logPromotedImpression:(id)arg1 event:(long long)arg2 logType:(long long)arg3 isEarned:(BOOL)arg4 extraParameters:(id)arg5 ;
-(id)_eventStringForEventType:(long long)arg1 ;
-(void)logPromotionItem:(id)arg1 ;
-(id)_queryTypeParam:(unsigned long long)arg1 ;
-(void)_handlePlacesRequest:(id)arg1 ;
-(void)fetchPlaces:(id)arg1 location:(id)arg2 queryType:(unsigned long long)arg3 ;
-(void)checkSubscriptionForUserID:(id)arg1 forListID:(id)arg2 ;
-(void)listWithUserID:(id)arg1 username:(id)arg2 slug:(id)arg3 ;
-(void)list:(id)arg1 followUserID:(id)arg2 username:(id)arg3 ;
-(void)list:(id)arg1 unfollowUserID:(id)arg2 username:(id)arg3 ;
-(void)updateList:(id)arg1 name:(id)arg2 description:(id)arg3 mode:(id)arg4 ;
-(void)createList:(id)arg1 description:(id)arg2 mode:(id)arg3 ;
-(void)deleteList:(id)arg1 ;
-(void)listWithListID:(id)arg1 ;
-(void)unfollowList:(id)arg1 ;
-(void)listMembershipsForUserID:(id)arg1 username:(id)arg2 cursor:(id)arg3 filteredToOwner:(BOOL)arg4 ;
-(void)list:(id)arg1 followUsernames:(id)arg2 ;
-(void)list:(id)arg1 unfollowUsernames:(id)arg2 ;
-(void)listsOwnershipsForUserID:(id)arg1 username:(id)arg2 cursor:(id)arg3 ;
-(void)listSuscriptionsForUserID:(id)arg1 username:(id)arg2 cursor:(id)arg3 ;
-(void)listMembershipsForUserID:(id)arg1 username:(id)arg2 cursor:(id)arg3 ;
-(void)listSubscriptionsAndOwnedForUserID:(id)arg1 username:(id)arg2 ownedFirst:(BOOL)arg3 ;
-(void)listStatuses:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 ;
-(void)listStatuses:(id)arg1 userID:(id)arg2 username:(id)arg3 sinceID:(id)arg4 maxID:(id)arg5 count:(id)arg6 ;
-(void)listMembers:(id)arg1 cursor:(id)arg2 ;
-(void)listMembers:(id)arg1 userID:(id)arg2 username:(id)arg3 cursor:(id)arg4 ;
-(void)listSubscribers:(id)arg1 cursor:(id)arg2 ;
-(void)listSubscribers:(id)arg1 userID:(id)arg2 username:(id)arg3 cursor:(id)arg4 ;
-(void)followList:(id)arg1 ;
-(void)list:(id)arg1 followsUserID:(id)arg2 username:(id)arg3 ;
-(void)friendshipForSourceUserID:(id)arg1 targetUserID:(id)arg2 ;
-(void)lookupRelationshipsForUsers:(id)arg1 ;
-(/*^block*/id)_followResponseBlock:(id)arg1 ;
-(/*^block*/id)_followAttemptResponseBlock;
-(void)_relationshipsResponse:(id)arg1 ;
-(void)_lookupRelationshipsForUsersWithIDs:(id)arg1 usersWithUsernames:(id)arg2 ;
-(void)_relationshipsResponse:(id)arg1 users:(id)arg2 ;
-(void)_relationshipShowResponse:(id)arg1 ;
-(void)followWithRequest:(id)arg1 ;
-(void)enableRetweetsFromUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)disableRetweetsFromUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)followUsernames:(id)arg1 ;
-(void)followUserIDs:(id)arg1 ;
-(void)unfollowUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)unfollowUserIDs:(id)arg1 ;
-(void)lifelineUnfollowUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)cancelFollowRequestWithUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)deviceUnfollowUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)friendshipForSourceUsername:(id)arg1 targetUsername:(id)arg2 ;
-(void)pendingFollowRequests;
-(void)pendingFollowerRequests;
-(void)acceptFollowerRequestFromUserID:(id)arg1 ;
-(void)declineFollowerRequestFromUserID:(id)arg1 ;
-(void)favoriteStatus:(id)arg1 ;
-(/*^block*/id)_favoriteResponseBlock:(id)arg1 ;
-(/*^block*/id)_favoriteAttemptResponseBlock:(id)arg1 ;
-(void)_favoriteLogNetworkOperation:(id)arg1 response:(id)arg2 ;
-(void)favoritesForUserID:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 ;
-(void)favoritesForUsername:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 ;
-(void)unfavoriteStatus:(id)arg1 ;
-(void)universalDiscoveryWithCursor:(id)arg1 isNext:(BOOL)arg2 scrollDirection:(long long)arg3 polling:(BOOL)arg4 ;
-(void)reportSpamWithMessageID:(id)arg1 conversationID:(id)arg2 spamType:(id)arg3 blockUser:(BOOL)arg4 ;
-(void)refreshFeatureSwitches;
-(void)refreshFeatureSwitchesRaw;
-(void)blockingIDs;
-(void)blockingIDsWithCursor:(id)arg1 ;
-(void)blockUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)blockUsername:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)unblockUserID:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)unblockUsername:(id)arg1 impressionID:(id)arg2 isEarned:(BOOL)arg3 ;
-(void)_blocksExistsResponse:(id)arg1 ;
-(void)mentionsActivityAboutMeSince:(id)arg1 maxID:(id)arg2 count:(id)arg3 filters:(id)arg4 notificationsSettingsManager:(id)arg5 ;
-(void)mentionsActivityAboutMeSince:(id)arg1 maxID:(id)arg2 count:(id)arg3 filters:(id)arg4 ;
-(void)activityAboutMeSince:(id)arg1 maxID:(id)arg2 count:(id)arg3 version:(id)arg4 filters:(id)arg5 polling:(BOOL)arg6 notificationsSettingsManager:(id)arg7 ;
-(void)activityAboutMeSince:(id)arg1 maxID:(id)arg2 count:(id)arg3 version:(id)arg4 filters:(id)arg5 polling:(BOOL)arg6 ;
-(void)activityByFriendsSince:(id)arg1 maxID:(id)arg2 count:(id)arg3 ;
-(void)_activityReponseForActivities:(id)arg1 activityFilterBlock:(/*^block*/id)arg2 error:(id)arg3 ;
-(id)_forceBucketsParamSringWithNotificationSettingsManager:(id)arg1 ;
-(void)_mentionsActivityResponse:(id)arg1 ;
-(void)_activityResponse:(id)arg1 activityFilterBlock:(/*^block*/id)arg2 ;
-(void)activitySummaryForStatusID:(id)arg1 ;
-(void)favoritersForStatusID:(id)arg1 cursor:(id)arg2 ;
-(void)retweetersForStatusID:(id)arg1 cursor:(id)arg2 ;
-(void)fetchConnectReadPositionFromPolling:(BOOL)arg1 ;
-(void)setConnectReadPosition:(id)arg1 ;
-(void)updateSettingsDiscoverabilityOneTime:(BOOL)arg1 ;
-(void)updateSettingsPassword:(id)arg1 currentPassword:(id)arg2 ;
-(void)updateSettingsEmail:(id)arg1 password:(id)arg2 ;
-(void)updateSettingsAllowAbuseFiltering:(BOOL)arg1 ;
-(void)savedSearches;
-(void)removeSavedSearch:(id)arg1 ;
-(void)passwordStrength:(id)arg1 fullName:(id)arg2 screenName:(id)arg3 email:(id)arg4 ;
-(void)updateSettingsDiscoverableByPhone:(BOOL)arg1 ;
-(void)updateSettingsUsername:(id)arg1 ;
-(void)updateSettingsAllowMediaTagging:(unsigned long long)arg1 ;
-(void)updateSettingsDiscoverableByEmail:(BOOL)arg1 ;
-(void)updateSettingsAcceptDirectMessagesFrom:(unsigned long long)arg1 ;
-(void)updateSettingsAccountProtection:(BOOL)arg1 ;
-(void)updateSettingsTailorAds:(BOOL)arg1 ;
-(void)_settingsResponse:(id)arg1 ;
-(/*^block*/id)_rediscoverabilitySettingsUpdateAttemptResponseBlock;
-(void)verifyCredentials;
-(void)getSettings;
-(void)updateProfileImage:(id)arg1 ;
-(void)updateBannerImage:(id)arg1 size:(CGSize)arg2 ;
-(void)removeBannerImage;
-(void)updateProfileName:(id)arg1 email:(id)arg2 url:(id)arg3 location:(id)arg4 description:(id)arg5 ;
-(void)updateProfileName:(id)arg1 email:(id)arg2 url:(id)arg3 structuredLocation:(id)arg4 description:(id)arg5 ;
-(void)createSavedSearch:(id)arg1 named:(id)arg2 ;
-(void)updateSettings:(id)arg1 ;
-(id)userIDNumber;
-(id)apiRoot;
-(id)dmApi_v1_1_Root;
-(void)invokeResponseBlock:(id)arg1 ;
-(id)request:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 timeout:(double)arg9 packetTimeout:(double)arg10 retryPolicyProvider:(id)arg11 responseBlockInBackground:(/*^block*/id)arg12 attemptResponseBlockInBackground:(/*^block*/id)arg13 ;
-(/*^block*/id)accountCreateJSONResponseBlock;
-(void)v1_1_guestRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)guestRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)guestRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 timeout:(double)arg6 packetTimeout:(double)arg7 retryPolicyProvider:(id)arg8 responseBlockInBackground:(/*^block*/id)arg9 attemptResponseBlockInBackground:(/*^block*/id)arg10 ;
-(id)request:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 retryPolicyProvider:(id)arg9 responseBlockInBackground:(/*^block*/id)arg10 attemptResponseBlockInBackground:(/*^block*/id)arg11 ;
-(id)requestWithPartialURL:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 authType:(unsigned long long)arg7 responseBlockInBackground:(/*^block*/id)arg8 attemptResponseBlockInBackground:(/*^block*/id)arg9 ;
-(id)apiRoot_v1_1;
-(id)uploadApi_v1_1_Root;
-(id)blobstoreApiRoot;
-(void)_attachCredentials:(id)arg1 authType:(unsigned long long)arg2 ;
-(void)preAttemptResponse:(id)arg1 ;
-(void)attemptResponse:(id)arg1 willRetry:(BOOL)arg2 attemptResponseBlockInBackground:(/*^block*/id)arg3 ;
-(void)requestResponse:(id)arg1 responseBlockInBackground:(/*^block*/id)arg2 ;
-(id)request:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 timeout:(double)arg9 retryPolicyProvider:(id)arg10 responseBlockInBackground:(/*^block*/id)arg11 attemptResponseBlockInBackground:(/*^block*/id)arg12 ;
-(id)apiRoot_v1;
-(id)request:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 responseBlockInBackground:(/*^block*/id)arg9 ;
-(void)v1_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(id)oauthApiRoot;
-(void)oauth_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 responseBlockInBackground:(/*^block*/id)arg5 ;
-(id)internalApiRoot;
-(id)thirdPartyFilterApiRoot;
-(id)thirdPartyFilterStagingApiRoot;
-(void)v1_1_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 timeout:(double)arg6 retryPolicyProvider:(id)arg7 responseBlockInBackground:(/*^block*/id)arg8 attemptResponseBlockInBackground:(/*^block*/id)arg9 ;
-(BOOL)_isInterestingURLForErrorNotifications:(id)arg1 ;
-(void)_initializePendingErrorNotificationDictionary;
-(id)_truncateOAuthToken:(id)arg1 ;
-(void)_attemptReverseAuthCredentialRecovery;
-(id)_extractEligibleOneFactorAuthorizationFactors:(id)arg1 ;
-(void)_logAPIResponse:(id)arg1 ;
-(void)_extractAPIErrorFromResponse:(id)arg1 ;
-(double)_clockDelta:(id)arg1 ;
-(BOOL)_handleRequestNotSignedError:(long long)arg1 urlString:(id)arg2 ;
-(void)_clearPendingErrorNotificationsForURL:(id)arg1 account:(id)arg2 ;
-(void)_postErrorNotificationLater:(id)arg1 forURL:(id)arg2 account:(id)arg3 forceReauth:(BOOL)arg4 bouncer:(BOOL)arg5 bouncerInfo:(id)arg6 ;
-(void)invokeResponseBlock:(id)arg1 preprocessBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)statusesResponseBlock;
-(/*^block*/id)_userJSONResponseBlock:(BOOL)arg1 ;
-(id)userStreamApiRoot;
-(id)mobileApiRoot;
-(id)cardsApiRoot;
-(id)cardsCapiApiRoot;
-(id)commerceApiRoot;
-(id)paymentApiRoot;
-(id)requestWithPartialURL:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 authType:(unsigned long long)arg7 responseBlockInBackground:(/*^block*/id)arg8 ;
-(void)v1_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)v1_POST:(id)arg1 headers:(id)arg2 multiPartFormData:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)v1_GET:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)v1_DELETE:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)appRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)v1_1_appRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)oauth_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)internal_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)thirdPartyFilterRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)thirdPartyFilterStagingRequest:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)v1_1_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 ;
-(void)v1_1_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 retryPolicyProvider:(id)arg6 responseBlockInBackground:(/*^block*/id)arg7 attemptResponseBlockInBackground:(/*^block*/id)arg8 ;
-(void)v1_1_request:(id)arg1 method:(long long)arg2 parameters:(id)arg3 headers:(id)arg4 multiPartFormData:(id)arg5 timeout:(double)arg6 packetTimeout:(double)arg7 retryPolicyProvider:(id)arg8 responseBlockInBackground:(/*^block*/id)arg9 attemptResponseBlockInBackground:(/*^block*/id)arg10 ;
-(void)invokeProgressBlockWithProgress:(double)arg1 ;
-(void)statusRequest:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 promoted:(BOOL)arg5 polling:(BOOL)arg6 ;
-(/*^block*/id)headOnlyResponseBlock;
-(/*^block*/id)statusResponseBlockWithWriteIntoDatabase:(BOOL)arg1 ;
-(/*^block*/id)richTimelineStatusesResponseBlock;
-(/*^block*/id)usersPaginatedResultsJSONResponseBlock;
-(/*^block*/id)usersJSONResponseBlock;
-(/*^block*/id)userJSONResponseBlock;
-(/*^block*/id)friendshipsIncomingJSONResponseBlock;
-(/*^block*/id)friendshipsOutgoingJSONResponseBlock;
-(/*^block*/id)extendedProfileJSONResponseBlock;
-(/*^block*/id)listsJSONResponseBlock;
-(/*^block*/id)listsPaginatedJSONResponseBlock;
-(/*^block*/id)listJSONResponseBlock;
-(/*^block*/id)listGenericResponseBlock;
-(/*^block*/id)mutingGenericResponseBlock;
-(/*^block*/id)mutingUserIDsPaginatedResultsJSONResponseBlock;
-(/*^block*/id)customTimelineStatusesResponseBlock;
-(/*^block*/id)customTimelinesJSONResponseBlock;
-(/*^block*/id)customTimelinesPaginatedJSONResponseBlock;
-(/*^block*/id)customTimelineJSONResponseBlock;
-(/*^block*/id)customTimelineGenericResponseBlock;
-(/*^block*/id)followingIDsJSONResponseBlock;
-(/*^block*/id)verifyCredentialsJSONResponseBlock;
-(/*^block*/id)derivedInfoJSONResponseBlock;
-(id)username;
-(void)tvShowInfoWithShowID:(id)arg1 shouldFetchDetails:(BOOL)arg2 ;
-(void)xAuthRequestAccessTokensWithChallengeResponse:(id)arg1 identifier:(id)arg2 requestID:(id)arg3 ;
-(void)xAuthRequestAccessTokensWithLoginCode:(id)arg1 userID:(id)arg2 requestID:(id)arg3 ;
-(void)xAuthRequestOneFactorAuthorization:(id)arg1 factorType:(unsigned long long)arg2 simCountryCode:(id)arg3 requestID:(id)arg4 ;
-(void)xAuthRequestAccessTokensWithIdentifier:(id)arg1 password:(id)arg2 simCountryCode:(id)arg3 timeout:(double)arg4 packetTimeout:(double)arg5 retryPolicyProvider:(id)arg6 supportOneFactorAuthorization:(BOOL)arg7 ;
-(void)webviewLoginChallengePollWithLoginCode:(id)arg1 userID:(id)arg2 requestID:(id)arg3 ;
-(void)signUpWithInfo:(id)arg1 retryPolicyProvider:(id)arg2 ;
-(id)_resultFromCompletedRequest:(id)arg1 urlEncodedResult:(BOOL)arg2 error:(out id*)arg3 ;
-(/*^block*/id)_xAuthRequestAccessTokensResponseBlock:(id)arg1 ;
-(/*^block*/id)_xAuthRequestAccessTokensAttemptResponseBlock:(id)arg1 ;
-(void)_xAuthRequestAccessTokensLogNetworkOperation:(id)arg1 response:(id)arg2 ;
-(void)signUp_POST:(id)arg1 parameters:(id)arg2 retryPolicyProvider:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)xAuthRequestAccessTokensWithIdentifier:(id)arg1 password:(id)arg2 simCountryCode:(id)arg3 timeout:(double)arg4 packetTimeout:(double)arg5 retryPolicyProvider:(id)arg6 ;
-(id)_generateRequestID;
-(void)_processConversationAddParticipantsResponse:(id)arg1 ;
-(id)directMessageRequest:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 responseBlockInBackground:(/*^block*/id)arg9 ;
-(void)_processConversationRenameResponse:(id)arg1 ;
-(void)_processConversationDeleteResponse:(id)arg1 ;
-(id)_errorWithResponse:(id)arg1 ;
-(void)_processDirectMessagePermissionsResponse:(id)arg1 ;
-(void)_processUserUpdatesResponse:(id)arg1 ;
-(void)_processUserInboxResponse:(id)arg1 ;
-(void)_processConversationEntriesResponse:(id)arg1 ;
-(void)_processSendMessageResponse:(id)arg1 hasMedia:(BOOL)arg2 networkOperation:(id)arg3 ;
-(void)_processSendMessageAttemptResponse:(id)arg1 hasMedia:(BOOL)arg2 willRetry:(BOOL)arg3 networkOperation:(id)arg4 ;
-(id)directMessageRequest:(id)arg1 apiRoot:(id)arg2 method:(long long)arg3 parameters:(id)arg4 headers:(id)arg5 multiPartFormData:(id)arg6 start:(BOOL)arg7 authType:(unsigned long long)arg8 timeout:(double)arg9 packetTimeout:(double)arg10 retryPolicyProvider:(id)arg11 responseBlockInBackground:(/*^block*/id)arg12 attemptResponseBlockInBackground:(/*^block*/id)arg13 ;
-(void)_processConversationMetadataResponse:(id)arg1 ;
-(id)_jsonDictionaryWithResponse:(id)arg1 error:(id*)arg2 ;
-(void)_parseResponse:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addParticipants:(id)arg1 toConversationID:(id)arg2 ;
-(void)renameGroupConversation:(id)arg1 newName:(id)arg2 ;
-(void)deleteMessageEntry:(id)arg1 ;
-(void)deleteConversationWithConversationID:(id)arg1 lastEventID:(long long)arg2 preservingTrust:(BOOL)arg3 ;
-(void)markAllConversationsReadUpToEventID:(long long)arg1 ;
-(void)updateLastSeenEventID:(long long)arg1 ;
-(void)markMessageThreadWithConversationID:(id)arg1 readUpToEventID:(long long)arg2 ;
-(id)directMessagePermissionsForUserIDs:(id)arg1 usernames:(id)arg2 ;
-(id)directMessageUserUpdatesSinceCursor:(id)arg1 inboxMinID:(id)arg2 polling:(BOOL)arg3 ;
-(id)directMessageUserInboxFromEntryID:(id)arg1 toEntryID:(id)arg2 limit:(id)arg3 ;
-(id)directMessageConversationEntries:(id)arg1 fromEntry:(id)arg2 toEntry:(id)arg3 limit:(id)arg4 ;
-(id)createConversationWithParticipants:(id)arg1 text:(id)arg2 attachment:(id)arg3 requestID:(id)arg4 impressionID:(id)arg5 timeout:(double)arg6 packetTimeout:(double)arg7 retryPolicyProvider:(id)arg8 ;
-(void)conversationMetadata:(id)arg1 ;
-(id)sendMessageToConversationID:(id)arg1 text:(id)arg2 attachment:(id)arg3 requestID:(id)arg4 impressionID:(id)arg5 timeout:(double)arg6 packetTimeout:(double)arg7 retryPolicyProvider:(id)arg8 ;
-(id)disableNotificationsForConversationID:(id)arg1 ;
-(id)enableNotificationsForConversationID:(id)arg1 ;
-(unsigned long long)authType;
-(void)setAllowPartialAuth:(BOOL)arg1 ;
-(void)v1_1_GET:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(BOOL)requireSystemAuth;
-(void)setRequireSystemAuth:(BOOL)arg1 ;
-(BOOL)allowPartialAuth;
-(BOOL)useInRequestOAuth;
-(void)setUseInRequestOAuth:(BOOL)arg1 ;
-(void)v1_1_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)v1_1_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 timeout:(double)arg4 retryPolicyProvider:(id)arg5 responseBlockInBackground:(/*^block*/id)arg6 attemptResponseBlockInBackground:(/*^block*/id)arg7 ;
-(void)v1_1_POST:(id)arg1 headers:(id)arg2 multiPartFormData:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)v1_1_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 timeout:(double)arg4 packetTimeout:(double)arg5 retryPolicyProvider:(id)arg6 responseBlockInBackground:(/*^block*/id)arg7 attemptResponseBlockInBackground:(/*^block*/id)arg8 ;
-(void)setAuthType:(unsigned long long)arg1 ;
-(void)internal_GET:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(id)initWithAccount:(id)arg1 apiRoot:(id)arg2 configuration:(id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)initWithAccount:(id)arg1 credentials:(id)arg2 apiRoot:(id)arg3 configuration:(id)arg4 responseBlock:(/*^block*/id)arg5 ;
-(void)v1_1_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 retryPolicyProvider:(id)arg4 responseBlockInBackground:(/*^block*/id)arg5 attemptResponseBlockInBackground:(/*^block*/id)arg6 ;
-(void)v1_1_POST:(id)arg1 headers:(id)arg2 multiPartFormData:(id)arg3 retryPolicyProvider:(id)arg4 responseBlockInBackground:(/*^block*/id)arg5 attemptResponseBlockInBackground:(/*^block*/id)arg6 ;
-(void)v1_1_DELETE:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)internal_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)internal_POST:(id)arg1 headers:(id)arg2 multiPartFormData:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)thirdPartyFilter_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)thirdPartyFilterStaging_POST:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)internal_DELETE:(id)arg1 parameters:(id)arg2 headers:(id)arg3 responseBlockInBackground:(/*^block*/id)arg4 ;
-(void)setResponseBlock:(id)arg1 ;
-(id)responseBlock;
-(void)dealloc;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end
