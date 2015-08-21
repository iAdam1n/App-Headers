/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1UpdateIndicatorDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1SlideshowViewControllerDelegate.h>
#import <Twitter/TFNImageTransitionDelegate.h>
#import <Twitter/T1SearchQueryTableRowHost.h>
#import <Twitter/T1SummaryCellDelegate.h>
#import <Twitter/TFNUISearching.h>
#import <Twitter/TFNCompositionProtocol.h>

@class T1PreviewImageListCell, T1StatusTableRowAdapter, TFNTwitterAccount, TFNTwitterSearchStream, TFNTwitterScribeContext, NSString, T1UpdateIndicator, TFNTwitterSearchQuery;

@interface T1UniversalSearchViewController : TFNItemsDataViewController <T1UpdateIndicatorDelegate, TFNTwitterAuthenticated, T1SlideshowViewControllerDelegate, TFNImageTransitionDelegate, T1SearchQueryTableRowHost, T1SummaryCellDelegate, TFNUISearching, TFNCompositionProtocol> {

	T1PreviewImageListCell* _slideshowCell;
	BOOL _firstLoad;
	BOOL _didFullyAppear;
	T1StatusTableRowAdapter* _statusTableRowAdapter;
	BOOL _showsSearchButton;
	BOOL _showsUpdateIndicator;
	TFNTwitterAccount* _account;
	TFNTwitterSearchStream* _stream;
	TFNTwitterScribeContext* _scribeContext;
	NSString* _scribeParameterContext;
	NSString* _subtitle;
	T1UpdateIndicator* _updateIndicator;
	unsigned long long _supportedSectionTypes;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterSearchStream * stream;                       //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) TFNTwitterSearchQuery * searchQuery; 
@property (nonatomic,copy) TFNTwitterScribeContext * scribeContext;                 //@synthesize scribeContext=_scribeContext - In the implementation block
@property (nonatomic,copy) NSString * scribeParameterContext;                       //@synthesize scribeParameterContext=_scribeParameterContext - In the implementation block
@property (assign,nonatomic) BOOL showsSearchButton;                                //@synthesize showsSearchButton=_showsSearchButton - In the implementation block
@property (assign,nonatomic) BOOL showsUpdateIndicator;                             //@synthesize showsUpdateIndicator=_showsUpdateIndicator - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) T1UpdateIndicator * updateIndicator;                 //@synthesize updateIndicator=_updateIndicator - In the implementation block
@property (assign,nonatomic) unsigned long long supportedSectionTypes;              //@synthesize supportedSectionTypes=_supportedSectionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL filtersEnabled; 
+(id)searchControllerForPlace:(id)arg1 ;
+(unsigned long long)_sectionTypeForStreamObject:(id)arg1 ;
+(BOOL)_shouldPollFor:(id)arg1 ;
-(id)scribe;
-(id)scribePage;
-(void)setSearchQuery:(TFNTwitterSearchQuery *)arg1 ;
-(void)setScribeParameterContext:(NSString *)arg1 ;
-(TFNTwitterScribeContext *)scribeContext;
-(id)scribeSection;
-(id)scribeComponent;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)viewDidFullyAppear:(BOOL)arg1 ;
-(void)_streamDidUpdate:(id)arg1 ;
-(BOOL)isLoadingTop;
-(void)loadTop:(id)arg1 ;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)setShowsSearchButton:(BOOL)arg1 ;
-(id)scribeImpressionParameters;
-(NSString *)scribeParameterContext;
-(void)setSupportedSectionTypes:(unsigned long long)arg1 ;
-(void)setShowsUpdateIndicator:(BOOL)arg1 ;
-(BOOL)showsSearchButton;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(void)setPreviewImageHidden:(BOOL)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3 ;
-(void)imageTransitionViewController:(id)arg1 willTransition:(BOOL)arg2 object:(id)arg3 ;
-(void)imageTransitionViewController:(id)arg1 didTransition:(BOOL)arg2 object:(id)arg3 ;
-(BOOL)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2 ;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(void)searchQueryAdapter:(id)arg1 didSelectSearchQuery:(id)arg2 atIndexPath:(id)arg3 ;
-(void)slideshow:(id)arg1 didSelectStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didDeleteStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectUser:(id)arg2 ;
-(void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2 ;
-(void)summaryCellAcronymButtonWasTapped:(id)arg1 ;
-(id)itemsForStreamObject:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_buildSections;
-(T1UpdateIndicator *)updateIndicator;
-(BOOL)canShowUpdateIndicator:(id)arg1 ;
-(id)_itemsForUserGallery:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_showLocationErrorPromptWithDismissBlock:(/*^block*/id)arg1 ;
-(void)_showUpdateIndicatorOnceIfNeeded;
-(void)_updateFreshCountWithPollingCount:(long long)arg1 ;
-(unsigned long long)supportedSectionTypes;
-(id)_viewMorePhotosItem;
-(id)_itemsForStatusGallery:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_itemsForTwitterCluster:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_itemsForEventGallery:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_sectionType:(unsigned long long)arg1 needsSectionBreakWithSection:(unsigned long long)arg2 ;
-(id)_footerItemForSectionType:(unsigned long long)arg1 ;
-(id)_headerItemForSectionType:(unsigned long long)arg1 ;
-(void)_pushNearbySearch;
-(void)_previewImageList:(id)arg1 presentSlideshowFromPreviewInfo:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)_shouldShowHeaderForCluster:(id)arg1 ;
-(id)_previewImageListWithStatusGallery:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_shouldShowFooterForCluster:(id)arg1 clusterDataCount:(long long)arg2 ;
-(id)_viewMorePeopleYouFollowItem;
-(id)_viewMoreNearYouItem;
-(void)_accurateButtonTapped;
-(void)_inaccurateButtonTapped;
-(BOOL)showsUpdateIndicator;
-(id)composition;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)update;
-(void)_setupTitleView;
-(void)setStream:(TFNTwitterSearchStream *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterSearchQuery *)searchQuery;
-(TFNTwitterSearchStream *)stream;
@end

