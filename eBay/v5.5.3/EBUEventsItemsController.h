/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUItemsCollectionController.h>
#import <eBay/EBURefineResultsDelegate.h>
#import <eBay/EBNPagedResultsDataManagerObserver.h>

@class EBNEventsDataManager, EBUEventsItemsHeaderView, EBUEventRefineToolbarController, NSTimer, EUILineSeparatorView, NSString;

@interface EBUEventsItemsController : EBUItemsCollectionController <EBURefineResultsDelegate, EBNPagedResultsDataManagerObserver> {

	BOOL _reloadOnAspectChange;
	EBNEventsDataManager* _dataManager;
	EBUEventsItemsHeaderView* _scrollingHeader;
	EBUEventRefineToolbarController* _refineToolbarController;
	NSTimer* _timeLeftTicker;
	EUILineSeparatorView* _brandingStripView;

}

@property (assign,nonatomic,__weak) EBUEventsItemsHeaderView * scrollingHeader;                      //@synthesize scrollingHeader=_scrollingHeader - In the implementation block
@property (nonatomic,retain) EBUEventRefineToolbarController * refineToolbarController;              //@synthesize refineToolbarController=_refineToolbarController - In the implementation block
@property (assign,nonatomic) BOOL reloadOnAspectChange;                                              //@synthesize reloadOnAspectChange=_reloadOnAspectChange - In the implementation block
@property (nonatomic,retain) NSTimer * timeLeftTicker;                                               //@synthesize timeLeftTicker=_timeLeftTicker - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * brandingStripView;                               //@synthesize brandingStripView=_brandingStripView - In the implementation block
@property (nonatomic,retain) EBNEventsDataManager * dataManager;                                     //@synthesize dataManager=_dataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canLoadMore;
-(void)refetchContents;
-(void)applySearchOptionChanges:(id)arg1 ;
-(long long)defaultPresentationType;
-(void)setPresentationType:(long long)arg1 animated:(BOOL)arg2 sender:(id)arg3 ;
-(EBUEventRefineToolbarController *)refineToolbarController;
-(EBUEventsItemsHeaderView *)scrollingHeader;
-(void)setScrollingHeader:(EBUEventsItemsHeaderView *)arg1 ;
-(void)reloadHeaderData;
-(void)setRefineToolbarController:(EBUEventRefineToolbarController *)arg1 ;
-(id)viewSelectorToShowInRefinePanel;
-(BOOL)reloadOnAspectChange;
-(void)setReloadOnAspectChange:(BOOL)arg1 ;
-(NSTimer *)timeLeftTicker;
-(void)setTimeLeftTicker:(NSTimer *)arg1 ;
-(EUILineSeparatorView *)brandingStripView;
-(void)setBrandingStripView:(EUILineSeparatorView *)arg1 ;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)setDataManager:(EBNEventsDataManager *)arg1 ;
-(unsigned long long)loadedCount;
-(void)pagedDataManagerDidFindItems:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)loadMore;
-(EBNEventsDataManager *)dataManager;
@end
