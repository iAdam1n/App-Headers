/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>

@class TFNTwitterCommercePurchase;

@interface T1PurchaseHistoryDetailTableViewController : TFNItemsDataViewController {

	TFNTwitterCommercePurchase* _purchase;

}

@property (nonatomic,retain) TFNTwitterCommercePurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)updateSections;
-(id)_summaryItem;
-(id)_chargeSummary;
-(id)_cellForLabel:(id)arg1 value:(id)arg2 shouldHaveSeparator:(BOOL)arg3 emphasis:(BOOL)arg4 minimumHeight:(double)arg5 ;
-(id)_shippingAddressItem;
-(id)_merchantEmailItem;
-(TFNTwitterCommercePurchase *)purchase;
-(void)viewDidLoad;
-(void)setPurchase:(TFNTwitterCommercePurchase *)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
@end
