/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemDataProviderProtocol.h>

@class ECSearchParameters, ECAdManager, ECAd, ECGetItemsResults, ECSearchResults, NSArray, NSString;

@interface ECSearchAdsDataProvider : NSObject <ECItemDataProviderProtocol> {

	BOOL hasMore;
	BOOL _parametersEditable;
	BOOL _usersAds;
	BOOL _picturesOnly;
	BOOL _includeTopAds;
	BOOL _extendedSearchLeafNodeParent;
	BOOL _extendedSearchByNearbyParameter;
	BOOL _shouldSkipAddingToRecentSearches;
	BOOL _updatingResults;
	long long _searchStart;
	ECSearchParameters* _parameters;
	ECAdManager* _adManager;
	ECAd* _originatingAd;
	ECGetItemsResults* _topAdItems;
	unsigned long long _extendedSearchDistance;
	ECSearchResults* _lastResultsLoaded;
	unsigned long long _pageSize;
	ECSearchResults* _results;
	ECSearchResults* _extendedResults;

}

@property (assign,nonatomic) long long searchStart;                                       //@synthesize searchStart=_searchStart - In the implementation block
@property (nonatomic,retain) ECSearchParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) ECAdManager * adManager;                                     //@synthesize adManager=_adManager - In the implementation block
@property (assign,nonatomic) BOOL parametersEditable;                                     //@synthesize parametersEditable=_parametersEditable - In the implementation block
@property (nonatomic,__weak,readonly) ECSearchParameters * activeParameters; 
@property (nonatomic,retain) ECAd * originatingAd;                                        //@synthesize originatingAd=_originatingAd - In the implementation block
@property (assign,nonatomic) BOOL usersAds;                                               //@synthesize usersAds=_usersAds - In the implementation block
@property (assign,nonatomic) BOOL picturesOnly;                                           //@synthesize picturesOnly=_picturesOnly - In the implementation block
@property (assign,nonatomic) BOOL includeTopAds;                                          //@synthesize includeTopAds=_includeTopAds - In the implementation block
@property (nonatomic,retain) ECGetItemsResults * topAdItems;                              //@synthesize topAdItems=_topAdItems - In the implementation block
@property (nonatomic,readonly) BOOL extendedSearchSupported; 
@property (assign,nonatomic) unsigned long long extendedSearchDistance;                   //@synthesize extendedSearchDistance=_extendedSearchDistance - In the implementation block
@property (assign,nonatomic) BOOL extendedSearchLeafNodeParent;                           //@synthesize extendedSearchLeafNodeParent=_extendedSearchLeafNodeParent - In the implementation block
@property (assign,nonatomic) BOOL extendedSearchByNearbyParameter;                        //@synthesize extendedSearchByNearbyParameter=_extendedSearchByNearbyParameter - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * extendedItems; 
@property (nonatomic,readonly) unsigned long long extendedTotalItems; 
@property (nonatomic,retain) ECSearchResults * lastResultsLoaded;                         //@synthesize lastResultsLoaded=_lastResultsLoaded - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipAddingToRecentSearches;                       //@synthesize shouldSkipAddingToRecentSearches=_shouldSkipAddingToRecentSearches - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                                 //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,retain) ECSearchResults * results;                                   //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) ECSearchResults * extendedResults;                           //@synthesize extendedResults=_extendedResults - In the implementation block
@property (assign,nonatomic) BOOL updatingResults;                                        //@synthesize updatingResults=_updatingResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalItems; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,readonly) BOOL updating; 
-(BOOL)extendedSearchByNearbyParameter;
-(long long)searchStart;
-(ECAdManager *)adManager;
-(void)setAdManager:(ECAdManager *)arg1 ;
-(unsigned long long)totalItems;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStart:(long long)arg1 adManager:(id)arg2 ;
-(void)setPicturesOnly:(BOOL)arg1 ;
-(void)setShouldSkipAddingToRecentSearches:(BOOL)arg1 ;
-(void)setLastResultsLoaded:(ECSearchResults *)arg1 ;
-(void)cancelUpdate;
-(BOOL)updatingResults;
-(ECSearchResults *)lastResultsLoaded;
-(BOOL)hasMore;
-(BOOL)usersAds;
-(BOOL)parametersEditable;
-(id)activeExtendedParameters;
-(id)usableParametersFromParameters:(id)arg1 ;
-(void)setSearchStart:(long long)arg1 ;
-(void)setParametersEditable:(BOOL)arg1 ;
-(void)setExtendedSearchLeafNodeParent:(BOOL)arg1 ;
-(void)setExtendedSearchByNearbyParameter:(BOOL)arg1 ;
-(unsigned long long)extendedSearchDistance;
-(void)setExtendedSearchDistance:(unsigned long long)arg1 ;
-(void)setExtendedResults:(ECSearchResults *)arg1 ;
-(ECSearchResults *)extendedResults;
-(id)extendedParameters;
-(BOOL)extendedSearchLeafNodeParent;
-(BOOL)extendedSearchSupported;
-(void)setUpdatingResults:(BOOL)arg1 ;
-(BOOL)picturesOnly;
-(BOOL)includeTopAds;
-(void)setTopAdItems:(ECGetItemsResults *)arg1 ;
-(ECGetItemsResults *)topAdItems;
-(BOOL)shouldSkipAddingToRecentSearches;
-(NSArray *)extendedItems;
-(unsigned long long)extendedTotalItems;
-(ECSearchParameters *)activeParameters;
-(void)loadExtendedWithCompletionHandler:(/*^block*/id)arg1 ;
-(ECAd *)originatingAd;
-(void)setOriginatingAd:(ECAd *)arg1 ;
-(void)setUsersAds:(BOOL)arg1 ;
-(void)setIncludeTopAds:(BOOL)arg1 ;
-(NSArray *)items;
-(ECSearchParameters *)parameters;
-(void)setParameters:(ECSearchParameters *)arg1 ;
-(ECSearchResults *)results;
-(void)setResults:(ECSearchResults *)arg1 ;
-(BOOL)hasResults;
-(void)setPageSize:(unsigned long long)arg1 ;
-(unsigned long long)pageSize;
-(void)clearResults;
-(BOOL)updating;
@end
