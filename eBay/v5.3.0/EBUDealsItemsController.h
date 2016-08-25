/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUItemsCollectionController.h>
#import <eBay/EBNPagedResultsDataManagerObserver.h>

@class EBNPagedResultsDataManager, EUILineSeparatorView, NSString;

@interface EBUDealsItemsController : EBUItemsCollectionController <EBNPagedResultsDataManagerObserver> {

	EBNPagedResultsDataManager* _dataManager;
	EUILineSeparatorView* _brandingStripView;

}

@property (nonatomic,retain) EUILineSeparatorView * brandingStripView;              //@synthesize brandingStripView=_brandingStripView - In the implementation block
@property (nonatomic,retain) EBNPagedResultsDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canLoadMore;
-(void)refetchContents;
-(long long)defaultPresentationType;
-(EUILineSeparatorView *)brandingStripView;
-(void)setBrandingStripView:(EUILineSeparatorView *)arg1 ;
-(void)registerDealsDetailsSourceTracking;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)setDataManager:(EBNPagedResultsDataManager *)arg1 ;
-(EBNPagedResultsDataManager *)dataManager;
-(unsigned long long)loadedCount;
-(void)pagedDataManagerDidFindItems:(id)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadMore;
@end

