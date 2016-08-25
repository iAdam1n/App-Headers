/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCompatibilityPropertyPickerViewController.h>

@protocol EBUCompatibilityPropertyPickerSearchRefineViewControllerDelegate;
@class NSIndexPath;

@interface EBUCompatibilityPropertyPickerSearchRefineViewController : EBUCompatibilityPropertyPickerViewController {

	id<EBUCompatibilityPropertyPickerSearchRefineViewControllerDelegate> _searchRefinePickerDelegate;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                                                     //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<EBUCompatibilityPropertyPickerSearchRefineViewControllerDelegate> searchRefinePickerDelegate;              //@synthesize searchRefinePickerDelegate=_searchRefinePickerDelegate - In the implementation block
-(void)setSearchRefinePickerDelegate:(id<EBUCompatibilityPropertyPickerSearchRefineViewControllerDelegate>)arg1 ;
-(double)sidePadding;
-(BOOL)shouldCalculatePreferredContentSize;
-(void)returnKeyPressedOnTextFieldInHeaderView:(id)arg1 ;
-(void)setupTitleAndBarItems;
-(void)setupBarButtonItems;
-(void)doneBarItemTapped:(id)arg1 ;
-(void)setupSelectedCell:(id)arg1 ;
-(void)setupNormalCell:(id)arg1 ;
-(id<EBUCompatibilityPropertyPickerSearchRefineViewControllerDelegate>)searchRefinePickerDelegate;
-(id)refineScreenFooterBackgroundColor;
-(double)spacingBetweenLabelAndTable;
-(double)selectionsLabelHeight;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(double)topPadding;
@end

