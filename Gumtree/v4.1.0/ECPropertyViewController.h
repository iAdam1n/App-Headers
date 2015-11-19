/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewController.h>

@class ECLabelValueTableViewCell, ECProperty, NSMutableArray, NSMutableIndexSet, ECActivityIndicatorView;

@interface ECPropertyViewController : ECBaseTableViewController {

	ECLabelValueTableViewCell* _sizingCell;
	ECProperty* _property;
	NSMutableArray* _sections;
	NSMutableArray* _sectionTitles;
	NSMutableArray* _sectionAccessibilityIdentifiers;
	NSMutableIndexSet* _visibleSections;
	ECActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) ECProperty * property;                                         //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionTitles;                                //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionAccessibilityIdentifiers;              //@synthesize sectionAccessibilityIdentifiers=_sectionAccessibilityIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * visibleSections;                           //@synthesize visibleSections=_visibleSections - In the implementation block
@property (nonatomic,retain) ECActivityIndicatorView * spinner;                             //@synthesize spinner=_spinner - In the implementation block
-(void)loadExtendedInfo:(id)arg1 forAd:(id)arg2 ;
-(NSMutableArray *)sectionAccessibilityIdentifiers;
-(NSMutableIndexSet *)visibleSections;
-(BOOL)isSectionVisible:(long long)arg1 ;
-(void)renderCell:(id)arg1 item:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 indexPathsForSection:(long long)arg2 ;
-(void)setSectionAccessibilityIdentifiers:(NSMutableArray *)arg1 ;
-(void)setVisibleSections:(NSMutableIndexSet *)arg1 ;
-(void)setProperty:(ECProperty *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)sectionTitles;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(ECActivityIndicatorView *)spinner;
-(void)setSpinner:(ECActivityIndicatorView *)arg1 ;
-(void)setSectionTitles:(NSMutableArray *)arg1 ;
-(ECProperty *)property;
-(id)itemAtIndexPath:(id)arg1 ;
@end
