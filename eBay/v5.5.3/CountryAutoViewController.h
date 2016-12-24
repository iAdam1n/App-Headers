/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, UITableView, UILabel, NSString;

@interface CountryAutoViewController : EUIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* _tableSections;
	UITableView* _tableView;
	UILabel* _autoDetectFooterView;

}

@property (retain) NSMutableArray * tableSections;                  //@synthesize tableSections=_tableSections - In the implementation block
@property (retain) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (retain) UILabel * autoDetectFooterView;                  //@synthesize autoDetectFooterView=_autoDetectFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupTableCells;
-(NSMutableArray *)tableSections;
-(void)setTableSections:(NSMutableArray *)arg1 ;
-(void)sitesAction:(id)arg1 ;
-(void)autoDetectCountryAction:(id)arg1 ;
-(void)refreshUIState;
-(void)setAutoDetectFooterView:(UILabel *)arg1 ;
-(UILabel *)autoDetectFooterView;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(BOOL)accessibilityPerformEscape;
@end
