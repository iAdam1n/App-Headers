/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:19 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemListViewModel.h>

@class NSArray, NSMutableArray;

@interface ECSearchResultsViewModel : ECItemListViewModel {

	long long _delegateViewType;
	NSArray* _inlineBannersAdded_workaround;
	unsigned long long _autoExpansionRemovedCount;
	NSMutableArray* _autoExpansionFilteredItems;
	unsigned long long _bottomBannerAdCounter;

}

@property (assign,nonatomic) long long delegateViewType;                                //@synthesize delegateViewType=_delegateViewType - In the implementation block
@property (retain) NSArray * inlineBannersAdded_workaround;                             //@synthesize inlineBannersAdded_workaround=_inlineBannersAdded_workaround - In the implementation block
@property (assign,nonatomic) unsigned long long autoExpansionRemovedCount;              //@synthesize autoExpansionRemovedCount=_autoExpansionRemovedCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoExpansionFilteredItems;               //@synthesize autoExpansionFilteredItems=_autoExpansionFilteredItems - In the implementation block
@property (assign,nonatomic) unsigned long long bottomBannerAdCounter;                  //@synthesize bottomBannerAdCounter=_bottomBannerAdCounter - In the implementation block
-(unsigned long long)defaultPageSize;
-(id)trackingName;
-(void)trackPageView;
-(BOOL)searchCanBeSaved;
-(void)startNewSearchForTimeline;
-(void)startNewSearchForPriceline;
-(void)startNewSearch;
-(void)initiateLocationRequestProcess;
-(void)startNewSearchWithParameters:(id)arg1 ;
-(id)statusStringForItem:(id)arg1 ;
-(void)loadExtraItems;
-(BOOL)hasZeroResultsInlineBannerEnabled;
-(id)searchDataProvider;
-(void)setDelegateViewType:(long long)arg1 ;
-(long long)delegateViewType;
-(void)updateLocalExtendedItemsCache;
-(void)loadMoreItemsForCurrentSearch;
-(BOOL)shouldPerformExtendedSearch;
-(void)searchExtendedItemsAsNewSearch:(BOOL)arg1 ;
-(NSMutableArray *)autoExpansionFilteredItems;
-(id)addExtendedResultsToSearchMap:(id)arg1 ;
-(NSArray *)inlineBannersAdded_workaround;
-(void)setInlineBannersAdded_workaround:(NSArray *)arg1 ;
-(void)sendAdjustProductListingEvent:(id)arg1 fromExtendedSearch:(BOOL)arg2 ;
-(unsigned long long)autoExpansionRemovedCount;
-(void)setBottomBannerAdCounter:(unsigned long long)arg1 ;
-(void)setAutoExpansionRemovedCount:(unsigned long long)arg1 ;
-(void)setAutoExpansionFilteredItems:(NSMutableArray *)arg1 ;
-(BOOL)meetsBottomBannerReloadRequestForCount:(unsigned long long)arg1 ;
-(unsigned long long)bottomBannerTypeForCurrentView;
-(unsigned long long)bottomBannerAdCounter;
-(id)adIdentifiersFromResults:(id)arg1 fromExtendedSearch:(BOOL)arg2 ;
-(void)startNewSearchForListGrid;
-(id)addResultsToSearchMap:(id)arg1 ;
-(void)processMoreItemsReceivedResult:(id)arg1 originalNumberOfItems:(unsigned long long)arg2 ;
-(void)processItemsReceivedResult:(id)arg1 originalNumberOfItems:(unsigned long long)arg2 ;
-(id)searchParameters;
-(void)resetEverything;
@end

