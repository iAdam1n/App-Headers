/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SimpleListPicker.h>

@class ListingItemDataManager, NSArray, NSIndexPath;

@interface EBUPaymentMethodPicker : SimpleListPicker {

	ListingItemDataManager* _dataManager;
	NSArray* _optionValues;
	NSIndexPath* _lastSelectedIndexPath;

}

@property (nonatomic,retain) NSArray * optionValues;                            //@synthesize optionValues=_optionValues - In the implementation block
@property (nonatomic,copy) NSIndexPath * lastSelectedIndexPath;                 //@synthesize lastSelectedIndexPath=_lastSelectedIndexPath - In the implementation block
@property (nonatomic,retain) ListingItemDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
-(void)setLastSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)lastSelectedIndexPath;
-(void)setupPaymentMethods;
-(NSArray *)optionValues;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(void)setOptionValues:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(ListingItemDataManager *)dataManager;
@end
