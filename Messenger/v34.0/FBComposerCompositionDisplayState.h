/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class FBComposerDestination, NSString, FBNearbyPlace, CLLocation, FBTaggableActivityComposition, NSArray, FBTypedNSArrayOfFBComposerPublishedMention, FBTypedNSArrayOfFBComposerPublishedHashtag, FBComposerTaggedUsersBundle, NSDictionary, FBComposerAlbumAttachment, FBTypedNSArrayOfNSString, FBComposerTraits, FBComposerConfiguration, NSDate, FBComposerProductItemAttachment, FBComposerPostEditingSummary, FBComposerHighlightedText, FBComposerAppAttribution, FBComposerGoodwillCampaignAttachment, FBComposerSelectableDate, FBComposerLifeEventAttachments, FBComposerChannelsPostingSummary, FBComposerContentSuggestion, FBComposerAudienceSuggestion;

@interface FBComposerCompositionDisplayState : FBValueObject <NSCopying, NSCoding> {

	BOOL _placeIsUserSelected;
	BOOL _suggestedPhoto;
	BOOL _isLoadingTaggedActivitySuggestions;
	BOOL _tagsAreUserSelected;
	BOOL _compositionIncludesMediaAttachments;
	BOOL _userRemovedAllExistingLinks;
	BOOL _compositionIsStoryShare;
	BOOL _publishAsQuestionAndAnswerSession;
	BOOL _hasTargeting;
	FBComposerDestination* _destination;
	NSString* _statusText;
	NSString* _untrimmedStatusText;
	FBNearbyPlace* _taggedPlace;
	CLLocation* _placePickerLocation;
	FBTaggableActivityComposition* _taggableActivityComposition;
	NSArray* _mentions;
	FBTypedNSArrayOfFBComposerPublishedMention* _composerMentions;
	FBTypedNSArrayOfFBComposerPublishedHashtag* _hashtags;
	FBComposerTaggedUsersBundle* _taggedUsers;
	NSArray* _assetIDs;
	NSDictionary* _photoTags;
	FBComposerAlbumAttachment* _albumAttachment;
	FBTypedNSArrayOfNSString* _deniedLinks;
	FBComposerTraits* _traits;
	FBComposerConfiguration* _configuration;
	unsigned long long _postContentType;
	NSDate* _scheduledDate;
	unsigned long long _allowedPostContentTypeOptions;
	unsigned long long _starRating;
	FBComposerProductItemAttachment* _productItemAttachment;
	FBComposerPostEditingSummary* _postEditingSummary;
	FBComposerHighlightedText* _openGraphRobotext;
	FBComposerAppAttribution* _appAttribution;
	NSString* _ref;
	NSString* _actionType;
	NSDictionary* _actionParameters;
	NSDictionary* _actionPropertyToCreatedObjectType;
	NSArray* _openGraphMediaAttachmentsForDisplay;
	NSArray* _openGraphMediaAttachmentsForUpload;
	FBComposerGoodwillCampaignAttachment* _goodwillCampaignAttachment;
	FBComposerSelectableDate* _lifeEventDate;
	FBComposerLifeEventAttachments* _lifeEventAttachments;
	FBComposerChannelsPostingSummary* _channelsPostingSummary;
	NSArray* _montagePhotoAttachments;
	FBComposerContentSuggestion* _contentSuggestion;
	FBComposerAudienceSuggestion* _audienceSuggestion;
	unsigned long long _contributorsState;
	NSArray* _feedTopics;

}

@property (nonatomic,copy,readonly) FBComposerDestination * destination;                                            //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusText;                                                          //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy,readonly) NSString * untrimmedStatusText;                                                 //@synthesize untrimmedStatusText=_untrimmedStatusText - In the implementation block
@property (nonatomic,copy,readonly) FBNearbyPlace * taggedPlace;                                                    //@synthesize taggedPlace=_taggedPlace - In the implementation block
@property (nonatomic,readonly) BOOL placeIsUserSelected;                                                            //@synthesize placeIsUserSelected=_placeIsUserSelected - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * placePickerLocation;                                               //@synthesize placePickerLocation=_placePickerLocation - In the implementation block
@property (nonatomic,readonly) BOOL suggestedPhoto;                                                                 //@synthesize suggestedPhoto=_suggestedPhoto - In the implementation block
@property (nonatomic,copy,readonly) FBTaggableActivityComposition * taggableActivityComposition;                    //@synthesize taggableActivityComposition=_taggableActivityComposition - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingTaggedActivitySuggestions;                                             //@synthesize isLoadingTaggedActivitySuggestions=_isLoadingTaggedActivitySuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mentions;                                                             //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfFBComposerPublishedMention * composerMentions;                  //@synthesize composerMentions=_composerMentions - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfFBComposerPublishedHashtag * hashtags;                          //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,readonly) BOOL tagsAreUserSelected;                                                            //@synthesize tagsAreUserSelected=_tagsAreUserSelected - In the implementation block
@property (nonatomic,copy,readonly) FBComposerTaggedUsersBundle * taggedUsers;                                      //@synthesize taggedUsers=_taggedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetIDs;                                                             //@synthesize assetIDs=_assetIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * photoTags;                                                       //@synthesize photoTags=_photoTags - In the implementation block
@property (nonatomic,readonly) BOOL compositionIncludesMediaAttachments;                                            //@synthesize compositionIncludesMediaAttachments=_compositionIncludesMediaAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAlbumAttachment * albumAttachment;                                    //@synthesize albumAttachment=_albumAttachment - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * deniedLinks;                                         //@synthesize deniedLinks=_deniedLinks - In the implementation block
@property (nonatomic,readonly) BOOL userRemovedAllExistingLinks;                                                    //@synthesize userRemovedAllExistingLinks=_userRemovedAllExistingLinks - In the implementation block
@property (nonatomic,copy,readonly) FBComposerTraits * traits;                                                      //@synthesize traits=_traits - In the implementation block
@property (nonatomic,copy,readonly) FBComposerConfiguration * configuration;                                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL compositionIsStoryShare;                                                        //@synthesize compositionIsStoryShare=_compositionIsStoryShare - In the implementation block
@property (nonatomic,readonly) unsigned long long postContentType;                                                  //@synthesize postContentType=_postContentType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * scheduledDate;                                                         //@synthesize scheduledDate=_scheduledDate - In the implementation block
@property (nonatomic,readonly) BOOL publishAsQuestionAndAnswerSession;                                              //@synthesize publishAsQuestionAndAnswerSession=_publishAsQuestionAndAnswerSession - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedPostContentTypeOptions;                                    //@synthesize allowedPostContentTypeOptions=_allowedPostContentTypeOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long starRating;                                                       //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy,readonly) FBComposerProductItemAttachment * productItemAttachment;                        //@synthesize productItemAttachment=_productItemAttachment - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostEditingSummary * postEditingSummary;                              //@synthesize postEditingSummary=_postEditingSummary - In the implementation block
@property (nonatomic,copy,readonly) FBComposerHighlightedText * openGraphRobotext;                                  //@synthesize openGraphRobotext=_openGraphRobotext - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAppAttribution * appAttribution;                                      //@synthesize appAttribution=_appAttribution - In the implementation block
@property (nonatomic,copy,readonly) NSString * ref;                                                                 //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionType;                                                          //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionParameters;                                                //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionPropertyToCreatedObjectType;                               //@synthesize actionPropertyToCreatedObjectType=_actionPropertyToCreatedObjectType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * openGraphMediaAttachmentsForDisplay;                                  //@synthesize openGraphMediaAttachmentsForDisplay=_openGraphMediaAttachmentsForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSArray * openGraphMediaAttachmentsForUpload;                                   //@synthesize openGraphMediaAttachmentsForUpload=_openGraphMediaAttachmentsForUpload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerGoodwillCampaignAttachment * goodwillCampaignAttachment;              //@synthesize goodwillCampaignAttachment=_goodwillCampaignAttachment - In the implementation block
@property (nonatomic,copy,readonly) FBComposerSelectableDate * lifeEventDate;                                       //@synthesize lifeEventDate=_lifeEventDate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerLifeEventAttachments * lifeEventAttachments;                          //@synthesize lifeEventAttachments=_lifeEventAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerChannelsPostingSummary * channelsPostingSummary;                      //@synthesize channelsPostingSummary=_channelsPostingSummary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * montagePhotoAttachments;                                              //@synthesize montagePhotoAttachments=_montagePhotoAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerContentSuggestion * contentSuggestion;                                //@synthesize contentSuggestion=_contentSuggestion - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAudienceSuggestion * audienceSuggestion;                              //@synthesize audienceSuggestion=_audienceSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasTargeting;                                                                   //@synthesize hasTargeting=_hasTargeting - In the implementation block
@property (nonatomic,readonly) unsigned long long contributorsState;                                                //@synthesize contributorsState=_contributorsState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * feedTopics;                                                           //@synthesize feedTopics=_feedTopics - In the implementation block
-(unsigned long long)starRating;
-(FBComposerTaggedUsersBundle *)taggedUsers;
-(NSDictionary *)actionPropertyToCreatedObjectType;
-(FBComposerAlbumAttachment *)albumAttachment;
-(FBComposerAppAttribution *)appAttribution;
-(FBTypedNSArrayOfFBComposerPublishedHashtag *)hashtags;
-(BOOL)placeIsUserSelected;
-(unsigned long long)postContentType;
-(NSDate *)scheduledDate;
-(BOOL)suggestedPhoto;
-(BOOL)tagsAreUserSelected;
-(FBComposerProductItemAttachment *)productItemAttachment;
-(FBComposerGoodwillCampaignAttachment *)goodwillCampaignAttachment;
-(FBComposerSelectableDate *)lifeEventDate;
-(FBComposerLifeEventAttachments *)lifeEventAttachments;
-(FBTaggableActivityComposition *)taggableActivityComposition;
-(id)initWithDestination:(id)arg1 statusText:(id)arg2 untrimmedStatusText:(id)arg3 taggedPlace:(id)arg4 placeIsUserSelected:(BOOL)arg5 placePickerLocation:(id)arg6 suggestedPhoto:(BOOL)arg7 taggableActivityComposition:(id)arg8 isLoadingTaggedActivitySuggestions:(BOOL)arg9 mentions:(id)arg10 composerMentions:(id)arg11 hashtags:(id)arg12 tagsAreUserSelected:(BOOL)arg13 taggedUsers:(id)arg14 assetIDs:(id)arg15 photoTags:(id)arg16 compositionIncludesMediaAttachments:(BOOL)arg17 albumAttachment:(id)arg18 deniedLinks:(id)arg19 userRemovedAllExistingLinks:(BOOL)arg20 traits:(id)arg21 configuration:(id)arg22 compositionIsStoryShare:(BOOL)arg23 postContentType:(unsigned long long)arg24 scheduledDate:(id)arg25 publishAsQuestionAndAnswerSession:(BOOL)arg26 allowedPostContentTypeOptions:(unsigned long long)arg27 starRating:(unsigned long long)arg28 productItemAttachment:(id)arg29 postEditingSummary:(id)arg30 openGraphRobotext:(id)arg31 appAttribution:(id)arg32 ref:(id)arg33 actionType:(id)arg34 actionParameters:(id)arg35 actionPropertyToCreatedObjectType:(id)arg36 openGraphMediaAttachmentsForDisplay:(id)arg37 openGraphMediaAttachmentsForUpload:(id)arg38 goodwillCampaignAttachment:(id)arg39 lifeEventDate:(id)arg40 lifeEventAttachments:(id)arg41 channelsPostingSummary:(id)arg42 montagePhotoAttachments:(id)arg43 contentSuggestion:(id)arg44 audienceSuggestion:(id)arg45 hasTargeting:(BOOL)arg46 contributorsState:(unsigned long long)arg47 feedTopics:(id)arg48 ;
-(NSString *)untrimmedStatusText;
-(FBNearbyPlace *)taggedPlace;
-(CLLocation *)placePickerLocation;
-(BOOL)isLoadingTaggedActivitySuggestions;
-(FBTypedNSArrayOfFBComposerPublishedMention *)composerMentions;
-(NSArray *)assetIDs;
-(NSDictionary *)photoTags;
-(BOOL)compositionIncludesMediaAttachments;
-(FBTypedNSArrayOfNSString *)deniedLinks;
-(BOOL)userRemovedAllExistingLinks;
-(BOOL)compositionIsStoryShare;
-(BOOL)publishAsQuestionAndAnswerSession;
-(unsigned long long)allowedPostContentTypeOptions;
-(FBComposerPostEditingSummary *)postEditingSummary;
-(FBComposerHighlightedText *)openGraphRobotext;
-(NSArray *)openGraphMediaAttachmentsForDisplay;
-(NSArray *)openGraphMediaAttachmentsForUpload;
-(FBComposerChannelsPostingSummary *)channelsPostingSummary;
-(NSArray *)montagePhotoAttachments;
-(FBComposerContentSuggestion *)contentSuggestion;
-(FBComposerAudienceSuggestion *)audienceSuggestion;
-(BOOL)hasTargeting;
-(unsigned long long)contributorsState;
-(NSArray *)feedTopics;
-(NSArray *)mentions;
-(FBComposerTraits *)traits;
-(FBComposerDestination *)destination;
-(FBComposerConfiguration *)configuration;
-(NSString *)actionType;
-(NSString *)ref;
-(NSDictionary *)actionParameters;
-(NSString *)statusText;
@end

