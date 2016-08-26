/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECAppConfig.h>
#import <Gumtree/ECAppConfigThreatMetrixProtocol.h>

@class NSString;

@interface ECAppConfigUK : ECAppConfig <ECAppConfigThreatMetrixProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsThreatMetrix; 
@property (nonatomic,readonly) Class threatMetrixManagerClass; 
@property (nonatomic,readonly) NSString * threatMetrixOrgID; 
-(id)artCategoryIconDictionary;
-(id)apiConfig;
-(id)bingProxyURLBase;
-(id)apiCredentials;
-(BOOL)targetSupportsNativeRegistration;
-(id)defaultCategoryID;
-(unsigned long long)defaultPageSize;
-(id)configForBannerType:(unsigned long long)arg1 ;
-(double)homepageEditorialWidth;
-(double)homepageEditorialHeight;
-(id)bannerPolicy;
-(BOOL)showsBingTextLinksOnSRP;
-(id)rootCategoryID;
-(id)locationConfig;
-(BOOL)bingTestModeEnabled;
-(BOOL)isMobileNumber:(id)arg1 ;
-(id)statusesForPayableAds;
-(unsigned long long)featureLoadingOptions;
-(id)distancesInMetersForDistanceIDs;
-(id)distancesInMilesForDistanceIDs;
-(id)locationIDsForWhichToHideTheDistanceSelector;
-(BOOL)apiSupportsUserProfile;
-(id)featureTypesForCellTypeMap;
-(BOOL)supportsThreatMetrix;
-(Class)threatMetrixManagerClass;
-(NSString *)threatMetrixOrgID;
-(id)apiDistanceUnit;
-(id)apiPictureSizes;
-(id)apiAdListInParams;
-(unsigned long long)apiTitleMaxChar;
-(BOOL)isPostSignInRequired;
-(id)countryISOCode;
-(id)privacyPolicyURL;
-(id)userAgreementURL;
-(id)registrationUrl;
-(id)activationDeepLinkPath;
-(BOOL)nativeRegistrationHasMarketingPreference;
-(BOOL)nativeRegistrationPreferencesAreOptIn;
-(BOOL)nativeRegistrationUsesFirstNameAndLastName;
-(BOOL)nativeRegistrationRequiresConfirmation;
-(id)nativeRegistrationSiteSpecificString;
-(id)nativeRegistrationToken:(id)arg1 ;
-(id)nativeRegistrationSignature:(id)arg1 ;
-(BOOL)shouldURLEncodeActivationParameters;
-(id)signInRegFieldOrder;
-(BOOL)targetSupportsInAppRegistration;
-(id)forgotPasswordConfig;
-(id)webURLString;
-(id)apiEULAFrameFilename;
-(id)defaultAdReplyRows;
-(id)legalTextFileName;
-(id)appStoreID;
-(id)apptentiveAPIKey;
-(id)dialogDateFormat;
-(id)googleAnalyticsProductID;
-(id)googleAnalyticsQAID;
-(id)crittercismID;
-(id)contactSupportEmailAddress;
-(BOOL)supportsAutocompleteOnSearchField;
-(double)defaultFilterLimit;
-(id)googleAdsClientID;
-(id)validAdSizesForBannerType:(unsigned long long)arg1 withAdSize:(CGSize)arg2 ;
-(id)bannerPolicyForPage:(id)arg1 ;
-(BOOL)showsBingTextLinksOnVIP;
-(id)bingConfiguration;
-(BOOL)showLocationPickerIfLocationIsNotSet;
-(BOOL)shouldShowDatePostedOnSRPForFeaturedAds;
-(BOOL)supportsPriceWithFrequency;
-(BOOL)postFieldOptional:(id)arg1 ;
-(BOOL)targetSupportsShowPostersAds;
-(BOOL)targetSupportsShowNumberOfPostersAds;
-(BOOL)targetUsesAccountIDForPostersOtherAds;
-(BOOL)switchUserProfileIdentifiersComparisonHack;
-(unsigned long long)maxPostImages;
-(BOOL)postContactAlternateEmailSupported;
-(id)postContactEmailMetadataKey;
-(id)manageAccountWebURL;
-(BOOL)postContactNameSupported;
-(BOOL)postFieldIsEmailLock:(id)arg1 ;
-(BOOL)postFieldIsVRN:(id)arg1 ;
-(BOOL)apiSupportsUserAdStats;
-(id)userAdStatsOrder;
-(id)statTypeMap;
-(id)statLabelMap;
-(BOOL)showStatusForActiveAds;
-(id)statusesForActivateAds;
-(id)statusesForEditingAds;
-(BOOL)canChangePostLocationOnEdit;
-(id)apiAlternateLocationsCommand;
-(id)apiCategorySuggestionsCommand;
-(BOOL)apiSupportsCategorySuggestions;
-(BOOL)apiSupportsContentURL;
-(id)apiCategoryIDsRequiringAtLeastOnePostPicturesHACK;
-(id)apiCategoryIDsForFSBO;
-(BOOL)apiSupportsPetRehomeValue;
-(BOOL)apiAlwaysAllowsEmailReply;
-(id)apiLocalTimeZone;
-(id)apiExtraHeaders;
-(BOOL)targetSupportsSavedSearch;
-(BOOL)supportsEmailNotifications;
-(BOOL)targetSupportsTitleForSavedSearch;
-(id)adCellLayoutTypeKey;
-(long long)postedDateDisplayFormat;
-(unsigned long long)apiPhoneMinChar;
-(unsigned long long)apiPhoneMaxChar;
-(unsigned long long)apiDescriptionMinWord;
-(id)teleCaptchaURLString;
-(id)testingForceTokenExpiredUserID;
-(id)testingForceTokenExpiredToken;
-(id)apiBooleanAttributeValueTrue;
-(id)apiBooleanAttributeValueFalse;
-(BOOL)supportsHighlight;
-(id)shortPriceFormat;
-(double)adDetailsWebAdEdgePadding;
-(id)supportedFeaturesForPromote;
-(id)adStatesSupportingFeaturePromotion;
-(BOOL)supportsPayments;
-(BOOL)shouldShowMultipleFeatureOptionsAsMultipleFeatures;
-(BOOL)useExtendedCellHeightInEarly2013StyleMyAdTableCell;
-(id)userAdsViewNibName;
-(BOOL)extendedSearchForLeafLocations;
-(BOOL)extendedSearchByNearbyParameter;
-(id)helpAndContactURLString;
-(id)reportAdReasonIDs;
-(id)reportAdReasons;
-(BOOL)reportAdIncludesEmailIfLoggedIn;
-(id)adjustConfig;
-(id)c2Value;
-(id)publisherSecretCode;
-(BOOL)supportsComScore;
-(id)optimizelyAPIToken;
-(id)optimizelyDevAPIToken;
-(id)optimizelyTestDictionaryForVIPContact;
-(BOOL)shouldCollapseEmailAndChat;
-(id)optimizelyTestDictionaryForRefineButton;
-(BOOL)supportsRemoteNotifications;
-(BOOL)supportsGCMNotification;
-(id)gcmSenderID;
-(id)gcmStagingSenderID;
-(BOOL)supportsBumpUpNotifications;
-(BOOL)supportsSearchAlertNotification;
-(Class)chatManagerClass;
-(BOOL)supportsChatMessageNotifications;
-(BOOL)supportsChatFlagConversation;
-(BOOL)chatFlaggedConversationAllowRepliesForFlaggedUser;
-(BOOL)chatFlaggedConversationAllowRepliesForFlaggingUser;
-(BOOL)supportsChatDeleteConversation;
-(BOOL)supportsCannedChatReplies;
-(BOOL)showUserProfile;
-(BOOL)chatDisplaysWelcomeMessage;
-(BOOL)chatDialogAdCellsShowDeletedStatus;
-(id)mtsClientId;
-(id)ebayApiAppName;
-(id)ebayApiAppId;
-(id)authProviderName;
-(id)mtsIdentityProvider;
-(id)mdnsClientId;
-(id)mdnsProviderLongName;
-(Class)postValidatorClass;
-(BOOL)locationsNeedAParentToBeValidInPostFlow;
-(id)shareAppEmailBody;
-(id)shareAppSMSBody;
-(id)googleLoginClientId;
-(BOOL)supportsMetadataPreselection;
-(id)facebookLoginConfig;
-(BOOL)targetSupportsStoredCV;
-(id)adVIPDetailSections;
-(id)imageForFeatureName:(id)arg1 ;
-(BOOL)isValidPhoneNumber:(id)arg1 ;
-(id)userNameKey;
-(id)name;
-(id)isoCode;
-(id)theme;
-(id)palette;
-(id)termsOfUseURL;
@end
