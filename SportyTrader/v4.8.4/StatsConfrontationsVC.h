/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/StatsSubviewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UILabel, ConfrontationsGraphView, UITableView, NSString;

@interface StatsConfrontationsVC : StatsSubviewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _confrontationsArray;
	BOOL _displayDrawsGraph;
	UILabel* _headerLabel;
	ConfrontationsGraphView* _team1GraphView;
	ConfrontationsGraphView* _drawsGraphView;
	ConfrontationsGraphView* _team2GraphView;
	UITableView* _confrontationsTableView;

}

@property (nonatomic,retain) UILabel * headerLabel;                                 //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) ConfrontationsGraphView * team1GraphView;              //@synthesize team1GraphView=_team1GraphView - In the implementation block
@property (nonatomic,retain) ConfrontationsGraphView * drawsGraphView;              //@synthesize drawsGraphView=_drawsGraphView - In the implementation block
@property (nonatomic,retain) ConfrontationsGraphView * team2GraphView;              //@synthesize team2GraphView=_team2GraphView - In the implementation block
@property (nonatomic,retain) UITableView * confrontationsTableView;                 //@synthesize confrontationsTableView=_confrontationsTableView - In the implementation block
@property (nonatomic,retain) NSArray * confrontationsArray;                         //@synthesize confrontationsArray=_confrontationsArray - In the implementation block
@property (assign,nonatomic) BOOL displayDrawsGraph;                                //@synthesize displayDrawsGraph=_displayDrawsGraph - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfrontationsArray:(NSArray *)arg1 ;
-(void)setDisplayDrawsGraph:(BOOL)arg1 ;
-(NSArray *)confrontationsArray;
-(BOOL)displayDrawsGraph;
-(void)updateFrameWithOrigin:(CGPoint)arg1 ;
-(UITableView *)confrontationsTableView;
-(void)updateGraphViews;
-(ConfrontationsGraphView *)team1GraphView;
-(ConfrontationsGraphView *)drawsGraphView;
-(ConfrontationsGraphView *)team2GraphView;
-(void)setTeam1GraphView:(ConfrontationsGraphView *)arg1 ;
-(void)setDrawsGraphView:(ConfrontationsGraphView *)arg1 ;
-(void)setTeam2GraphView:(ConfrontationsGraphView *)arg1 ;
-(void)setConfrontationsTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)refreshView;
@end
