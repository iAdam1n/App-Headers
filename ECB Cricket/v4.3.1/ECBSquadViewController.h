/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <ECBCricketApp/ECBPagingViewControllerDelegate.h>

@class ECBSquad, UITableView, NSArray, NSString;

@interface ECBSquadViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ECBPagingViewControllerDelegate> {

	ECBSquad* _squad;
	UITableView* _squadTableView;
	NSArray* _sortedPlayers;

}

@property (nonatomic,retain) ECBSquad * squad;                            //@synthesize squad=_squad - In the implementation block
@property (nonatomic,readonly) UITableView * squadTableView;              //@synthesize squadTableView=_squadTableView - In the implementation block
@property (nonatomic,readonly) NSArray * sortedPlayers;                   //@synthesize sortedPlayers=_sortedPlayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSquad:(ECBSquad *)arg1 ;
-(id)initWithSquad:(id)arg1 ;
-(UITableView *)squadTableView;
-(NSArray *)sortedPlayers;
-(id)indexPathForPlayer:(id)arg1 ;
-(void)viewController:(id)arg1 shouldPageInDirection:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(ECBSquad *)squad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
