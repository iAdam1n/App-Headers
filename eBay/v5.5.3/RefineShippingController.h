/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/RefineViewController.h>

@class NSMutableDictionary, NSArray, CheckboxCell;

@interface RefineShippingController : RefineViewController {

	NSMutableDictionary* _sectionLookup;
	NSArray* _checkboxCells;
	CheckboxCell* _freeShippingCell;
	CheckboxCell* _expeditedShippingCell;

}

@property (nonatomic,retain) NSMutableDictionary * sectionLookup;               //@synthesize sectionLookup=_sectionLookup - In the implementation block
@property (nonatomic,retain) NSArray * checkboxCells;                           //@synthesize checkboxCells=_checkboxCells - In the implementation block
@property (nonatomic,retain) CheckboxCell * freeShippingCell;                   //@synthesize freeShippingCell=_freeShippingCell - In the implementation block
@property (nonatomic,retain) CheckboxCell * expeditedShippingCell;              //@synthesize expeditedShippingCell=_expeditedShippingCell - In the implementation block
-(void)setupTableCells;
-(id)descriptionOfOptions;
-(BOOL)isCustomizedOption;
-(void)siteChanged;
-(void)refreshSettingsDisplay;
-(void)setSectionLookup:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionLookup;
-(void)addShowOnlyOptionForCell:(id)arg1 toSection:(id)arg2 ;
-(void)updateShowOnlyState;
-(void)checkboxAction:(id)arg1 ;
-(NSArray *)checkboxCells;
-(void)setCheckboxCells:(NSArray *)arg1 ;
-(CheckboxCell *)freeShippingCell;
-(void)setFreeShippingCell:(CheckboxCell *)arg1 ;
-(CheckboxCell *)expeditedShippingCell;
-(void)setExpeditedShippingCell:(CheckboxCell *)arg1 ;
-(void)dcsChanged:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
