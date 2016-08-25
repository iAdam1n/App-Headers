/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/StatsSubviewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UITableView, UILabel, NSString;

@interface StatsTableViewController : StatsSubviewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _statsArray;
	UITableView* _statsTableView;
	UILabel* _headerLabel;

}

@property (nonatomic,retain) UITableView * statsTableView;              //@synthesize statsTableView=_statsTableView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) NSArray * statsArray;                      //@synthesize statsArray=_statsArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatsArray:(NSArray *)arg1 ;
-(NSArray *)statsArray;
-(void)updateFrameWithOrigin:(CGPoint)arg1 ;
-(UITableView *)statsTableView;
-(void)setStatsTableView:(UITableView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)refreshView;
@end

