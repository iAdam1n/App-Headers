/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBSearchBaseAppSpecificConfigProtocol;
@class FBUserSession, FBGraphSearchConfig, FBGraphSearchPadConfig, FBSimpleSearchConfig, FBSimpleSearchTAInjectionExperimentContext, FBSimpleSearchTAFOFInjectionExperimentContext, FBSimpleSearchSERPSearchBoxExperimentContext, FBComposerMentionProviderExperimentContext, FBNewsLiveFeedAttachmentExperimentContext, FBGraphSearchPhotoResultsPageChronoSortExperimentContext, FBCelebritySearchTypeaheadConfig, FBScopedSearchConfig, FBSearchMixedMediaGridExperimentContext, FBProfilePivotsSearchConfig, FBMWildeInlineMessageActionInSearchSuggestionsExperimentContext, FBGraphSearchNullStateExperimentContext, FBGraphSearchTypeaheadExperimentContext;

@interface FBSearchConfig : NSObject {

	FBUserSession* _session;
	unsigned long long _searchMode;
	FBGraphSearchConfig* _graphSearchConfig;
	FBGraphSearchPadConfig* _graphSearchPadConfig;
	FBSimpleSearchConfig* _simpleSearchConfig;
	FBSimpleSearchTAInjectionExperimentContext* _simpleSearchTAFindAllNamedXInjectionExperimentConfig;
	FBSimpleSearchTAFOFInjectionExperimentContext* _simpleSearchTAFOFInjectionExperimentConfig;
	FBSimpleSearchSERPSearchBoxExperimentContext* _simpleSearchSERPSearchBoxExperimentConfig;
	FBComposerMentionProviderExperimentContext* _composerExperimentConfig;
	FBNewsLiveFeedAttachmentExperimentContext* _newsLiveFeedAttachmentConfig;
	FBGraphSearchPhotoResultsPageChronoSortExperimentContext* _graphSearchPhotoResultsPageChronoSortConfig;
	FBCelebritySearchTypeaheadConfig* _celebritySearchTAConfig;
	FBScopedSearchConfig* _scopedSearchConfig;
	FBSearchMixedMediaGridExperimentContext* _searchMixedMediaGridConfig;
	id<FBSearchBaseAppSpecificConfigProtocol> _appSpecificSearchConfig;
	FBProfilePivotsSearchConfig* _profilePivotsConfig;
	FBMWildeInlineMessageActionInSearchSuggestionsExperimentContext* _inlineMessageActionInSearchSuggestionsConfig;
	FBGraphSearchNullStateExperimentContext* _graphSearchNullStateConfig;
	FBGraphSearchTypeaheadExperimentContext* _graphSearchTypeaheadConfig;

}

@property (nonatomic,retain) FBUserSession * session;                                                                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long searchMode;                                                                                               //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,retain) FBGraphSearchConfig * graphSearchConfig;                                                                                     //@synthesize graphSearchConfig=_graphSearchConfig - In the implementation block
@property (nonatomic,retain) FBGraphSearchPadConfig * graphSearchPadConfig;                                                                               //@synthesize graphSearchPadConfig=_graphSearchPadConfig - In the implementation block
@property (nonatomic,retain) FBSimpleSearchConfig * simpleSearchConfig;                                                                                   //@synthesize simpleSearchConfig=_simpleSearchConfig - In the implementation block
@property (nonatomic,retain) FBSimpleSearchTAInjectionExperimentContext * simpleSearchTAFindAllNamedXInjectionExperimentConfig;                           //@synthesize simpleSearchTAFindAllNamedXInjectionExperimentConfig=_simpleSearchTAFindAllNamedXInjectionExperimentConfig - In the implementation block
@property (nonatomic,retain) FBSimpleSearchTAFOFInjectionExperimentContext * simpleSearchTAFOFInjectionExperimentConfig;                                  //@synthesize simpleSearchTAFOFInjectionExperimentConfig=_simpleSearchTAFOFInjectionExperimentConfig - In the implementation block
@property (nonatomic,retain) FBSimpleSearchSERPSearchBoxExperimentContext * simpleSearchSERPSearchBoxExperimentConfig;                                    //@synthesize simpleSearchSERPSearchBoxExperimentConfig=_simpleSearchSERPSearchBoxExperimentConfig - In the implementation block
@property (nonatomic,retain) FBComposerMentionProviderExperimentContext * composerExperimentConfig;                                                       //@synthesize composerExperimentConfig=_composerExperimentConfig - In the implementation block
@property (nonatomic,retain) FBNewsLiveFeedAttachmentExperimentContext * newsLiveFeedAttachmentConfig;                                                    //@synthesize newsLiveFeedAttachmentConfig=_newsLiveFeedAttachmentConfig - In the implementation block
@property (nonatomic,retain) FBGraphSearchPhotoResultsPageChronoSortExperimentContext * graphSearchPhotoResultsPageChronoSortConfig;                      //@synthesize graphSearchPhotoResultsPageChronoSortConfig=_graphSearchPhotoResultsPageChronoSortConfig - In the implementation block
@property (nonatomic,retain) FBCelebritySearchTypeaheadConfig * celebritySearchTAConfig;                                                                  //@synthesize celebritySearchTAConfig=_celebritySearchTAConfig - In the implementation block
@property (nonatomic,retain) FBScopedSearchConfig * scopedSearchConfig;                                                                                   //@synthesize scopedSearchConfig=_scopedSearchConfig - In the implementation block
@property (nonatomic,retain) FBSearchMixedMediaGridExperimentContext * searchMixedMediaGridConfig;                                                        //@synthesize searchMixedMediaGridConfig=_searchMixedMediaGridConfig - In the implementation block
@property (nonatomic,retain) id<FBSearchBaseAppSpecificConfigProtocol> appSpecificSearchConfig;                                                           //@synthesize appSpecificSearchConfig=_appSpecificSearchConfig - In the implementation block
@property (nonatomic,retain) FBProfilePivotsSearchConfig * profilePivotsConfig;                                                                           //@synthesize profilePivotsConfig=_profilePivotsConfig - In the implementation block
@property (nonatomic,retain) FBMWildeInlineMessageActionInSearchSuggestionsExperimentContext * inlineMessageActionInSearchSuggestionsConfig;              //@synthesize inlineMessageActionInSearchSuggestionsConfig=_inlineMessageActionInSearchSuggestionsConfig - In the implementation block
@property (nonatomic,retain) FBGraphSearchNullStateExperimentContext * graphSearchNullStateConfig;                                                        //@synthesize graphSearchNullStateConfig=_graphSearchNullStateConfig - In the implementation block
@property (nonatomic,retain) FBGraphSearchTypeaheadExperimentContext * graphSearchTypeaheadConfig;                                                        //@synthesize graphSearchTypeaheadConfig=_graphSearchTypeaheadConfig - In the implementation block
-(BOOL)_isENUS;
-(unsigned long long)searchMode;
-(void)setSearchMode:(unsigned long long)arg1 ;
-(FBGraphSearchConfig *)graphSearchConfig;
-(void)setGraphSearchConfig:(FBGraphSearchConfig *)arg1 ;
-(FBGraphSearchPadConfig *)graphSearchPadConfig;
-(void)setGraphSearchPadConfig:(FBGraphSearchPadConfig *)arg1 ;
-(FBSimpleSearchConfig *)simpleSearchConfig;
-(void)setSimpleSearchConfig:(FBSimpleSearchConfig *)arg1 ;
-(FBSimpleSearchTAInjectionExperimentContext *)simpleSearchTAFindAllNamedXInjectionExperimentConfig;
-(void)setSimpleSearchTAFindAllNamedXInjectionExperimentConfig:(FBSimpleSearchTAInjectionExperimentContext *)arg1 ;
-(FBSimpleSearchTAFOFInjectionExperimentContext *)simpleSearchTAFOFInjectionExperimentConfig;
-(void)setSimpleSearchTAFOFInjectionExperimentConfig:(FBSimpleSearchTAFOFInjectionExperimentContext *)arg1 ;
-(FBSimpleSearchSERPSearchBoxExperimentContext *)simpleSearchSERPSearchBoxExperimentConfig;
-(void)setSimpleSearchSERPSearchBoxExperimentConfig:(FBSimpleSearchSERPSearchBoxExperimentContext *)arg1 ;
-(FBComposerMentionProviderExperimentContext *)composerExperimentConfig;
-(void)setComposerExperimentConfig:(FBComposerMentionProviderExperimentContext *)arg1 ;
-(FBNewsLiveFeedAttachmentExperimentContext *)newsLiveFeedAttachmentConfig;
-(void)setNewsLiveFeedAttachmentConfig:(FBNewsLiveFeedAttachmentExperimentContext *)arg1 ;
-(FBGraphSearchPhotoResultsPageChronoSortExperimentContext *)graphSearchPhotoResultsPageChronoSortConfig;
-(void)setGraphSearchPhotoResultsPageChronoSortConfig:(FBGraphSearchPhotoResultsPageChronoSortExperimentContext *)arg1 ;
-(FBCelebritySearchTypeaheadConfig *)celebritySearchTAConfig;
-(void)setCelebritySearchTAConfig:(FBCelebritySearchTypeaheadConfig *)arg1 ;
-(FBScopedSearchConfig *)scopedSearchConfig;
-(void)setScopedSearchConfig:(FBScopedSearchConfig *)arg1 ;
-(FBSearchMixedMediaGridExperimentContext *)searchMixedMediaGridConfig;
-(void)setSearchMixedMediaGridConfig:(FBSearchMixedMediaGridExperimentContext *)arg1 ;
-(id<FBSearchBaseAppSpecificConfigProtocol>)appSpecificSearchConfig;
-(void)setAppSpecificSearchConfig:(id<FBSearchBaseAppSpecificConfigProtocol>)arg1 ;
-(FBProfilePivotsSearchConfig *)profilePivotsConfig;
-(void)setProfilePivotsConfig:(FBProfilePivotsSearchConfig *)arg1 ;
-(FBMWildeInlineMessageActionInSearchSuggestionsExperimentContext *)inlineMessageActionInSearchSuggestionsConfig;
-(void)setInlineMessageActionInSearchSuggestionsConfig:(FBMWildeInlineMessageActionInSearchSuggestionsExperimentContext *)arg1 ;
-(FBGraphSearchNullStateExperimentContext *)graphSearchNullStateConfig;
-(void)setGraphSearchNullStateConfig:(FBGraphSearchNullStateExperimentContext *)arg1 ;
-(FBGraphSearchTypeaheadExperimentContext *)graphSearchTypeaheadConfig;
-(void)setGraphSearchTypeaheadConfig:(FBGraphSearchTypeaheadExperimentContext *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

