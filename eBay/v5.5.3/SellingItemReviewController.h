/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ListingItemViewController.h>

@class ViewItemController, ListingVerifyResult, EPHSellingAutoRelistCell, EPHSellingAutoRelistFeesCell, EPHSellingGuaranteeCell;

@interface SellingItemReviewController : ListingItemViewController {

	ViewItemController* viewItemController;
	BOOL isPublishing;
	ListingVerifyResult* _verifyResult;
	EPHSellingAutoRelistCell* _autoRelistCell;
	EPHSellingAutoRelistFeesCell* _autoRelistFeesCell;
	EPHSellingGuaranteeCell* _guaranteeCell;

}

@property (nonatomic,retain) EPHSellingAutoRelistCell * autoRelistCell;                      //@synthesize autoRelistCell=_autoRelistCell - In the implementation block
@property (nonatomic,retain) EPHSellingAutoRelistFeesCell * autoRelistFeesCell;              //@synthesize autoRelistFeesCell=_autoRelistFeesCell - In the implementation block
@property (nonatomic,retain) EPHSellingGuaranteeCell * guaranteeCell;                        //@synthesize guaranteeCell=_guaranteeCell - In the implementation block
@property (nonatomic,retain) ListingVerifyResult * verifyResult;                             //@synthesize verifyResult=_verifyResult - In the implementation block
@property (assign,nonatomic) BOOL isPublishing; 
-(BOOL)setupTableSections;
-(id)setupTableFooter;
-(void)setIsPublishing:(BOOL)arg1 ;
-(void)publishListing;
-(void)publishListingFinished;
-(BOOL)showEditListingButton;
-(void)cancelListing;
-(BOOL)useCompressedLayout;
-(id)autoRelistFeesCell:(BOOL)arg1 ;
-(id)publishListingButton;
-(id)previewListingButton;
-(void)previewListing;
-(id)editListingButton;
-(void)editListing;
-(id)publishLabelTextWithFont:(id)arg1 withLabelFont:(id)arg2 ;
-(void)shipToFund:(id)arg1 ;
-(id)listingFeesCell;
-(EPHSellingGuaranteeCell *)guaranteeCell;
-(EPHSellingAutoRelistCell *)autoRelistCell;
-(void)sellerFees:(id)arg1 ;
-(void)autoRelist:(id)arg1 ;
-(void)setAutoRelistCell:(EPHSellingAutoRelistCell *)arg1 ;
-(EPHSellingAutoRelistFeesCell *)autoRelistFeesCell;
-(void)setAutoRelistFeesCell:(EPHSellingAutoRelistFeesCell *)arg1 ;
-(void)setGuaranteeCell:(EPHSellingGuaranteeCell *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isPublishing;
-(void)setVerifyResult:(ListingVerifyResult *)arg1 ;
-(ListingVerifyResult *)verifyResult;
@end
