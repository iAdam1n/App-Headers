/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SellingKeyboardTableViewController.h>
#import <eBay/ListingItemDataManagerObserver.h>

@class ListingItemDataManager, NSString;

@interface ListingItemViewController : SellingKeyboardTableViewController <ListingItemDataManagerObserver> {

	BOOL _saveDraftChangesOnPop;
	ListingItemDataManager* _dataManager;

}

@property (nonatomic,retain) ListingItemDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic) BOOL saveDraftChangesOnPop;                        //@synthesize saveDraftChangesOnPop=_saveDraftChangesOnPop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSaveDraftChangesOnPop:(BOOL)arg1 ;
-(id)listingSupport;
-(BOOL)saveDraftChangesOnPop;
-(id)listingItem;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(ListingItemDataManager *)dataManager;
@end
