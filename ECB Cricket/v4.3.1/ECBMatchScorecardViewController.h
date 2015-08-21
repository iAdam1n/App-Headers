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
#import <ECBCricketApp/OTHERScrollingTabBarControllerViewController.h>

@class OTHERScrollingTabBarItem, ECBInnings, UITableView, NSArray, ECBLoadingView, NSString;

@interface ECBMatchScorecardViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, OTHERScrollingTabBarControllerViewController> {

	BOOL _statusBarShouldBeHidden;
	OTHERScrollingTabBarItem* _scrollingTabBarItem;
	ECBInnings* _innings;
	UITableView* _inningsTableView;
	NSArray* _headerTitles;
	NSArray* _sortedSections;
	ECBLoadingView* _rotationTip;

}

@property (nonatomic,retain) ECBInnings * innings;                                        //@synthesize innings=_innings - In the implementation block
@property (assign,nonatomic) BOOL statusBarShouldBeHidden;                                //@synthesize statusBarShouldBeHidden=_statusBarShouldBeHidden - In the implementation block
@property (nonatomic,readonly) UITableView * inningsTableView;                            //@synthesize inningsTableView=_inningsTableView - In the implementation block
@property (nonatomic,readonly) NSArray * headerTitles;                                    //@synthesize headerTitles=_headerTitles - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSections;                                  //@synthesize sortedSections=_sortedSections - In the implementation block
@property (nonatomic,readonly) ECBLoadingView * rotationTip;                              //@synthesize rotationTip=_rotationTip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) OTHERScrollingTabBarItem * scrollingTabBarItem;              //@synthesize scrollingTabBarItem=_scrollingTabBarItem - In the implementation block
+(BOOL)shouldDisplayForInnings:(id)arg1 ;
-(OTHERScrollingTabBarItem *)scrollingTabBarItem;
-(void)setScrollingTabBarItem:(OTHERScrollingTabBarItem *)arg1 ;
-(ECBInnings *)innings;
-(void)setStatusBarShouldBeHidden:(BOOL)arg1 ;
-(void)setRotationTipHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)statusBarShouldBeHidden;
-(ECBLoadingView *)rotationTip;
-(void)setInnings:(ECBInnings *)arg1 ;
-(NSArray *)sortedSections;
-(NSArray *)headerTitles;
-(UITableView *)inningsTableView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end

