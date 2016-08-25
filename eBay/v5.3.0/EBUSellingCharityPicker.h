/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SimpleListPicker.h>

@class ListingItemDataManager;

@interface EBUSellingCharityPicker : SimpleListPicker {

	ListingItemDataManager* _dataManager;

}

@property (nonatomic,retain) ListingItemDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
+(id)picker:(id)arg1 ;
-(id)makeCellForIndexPath:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)simpleListSelectionChanged;
-(void)setupWithDataManager:(id)arg1 ;
-(void)refreshCharities;
-(void)addCharity;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(ListingItemDataManager *)dataManager;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

