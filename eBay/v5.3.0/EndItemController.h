/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol EndItemControllerDelegate;
@class UITableView, UIBarButtonItem, UINavigationBar, UINavigationItem, NSString, EBNListing, NSMutableArray;

@interface EndItemController : EUIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* myTableView;
	UIBarButtonItem* cancelButton;
	UIBarButtonItem* endItemButton;
	UINavigationBar* navBar;
	UINavigationItem* navBarNavItem;
	long long chosenReasonIndex;
	NSString* endingReason;
	EBNListing* ebayItem;
	NSMutableArray* endingReasons;
	id<EndItemControllerDelegate> delegate;
	BOOL disableReasonSelection;

}

@property (nonatomic,retain) UINavigationBar * navBar; 
@property (nonatomic,retain) EBNListing * ebayItem; 
@property (nonatomic,retain) UITableView * myTableView; 
@property (nonatomic,retain) UIBarButtonItem * cancelButton; 
@property (nonatomic,retain) UIBarButtonItem * endItemButton; 
@property (assign,nonatomic,__weak) id<EndItemControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)myTableView;
-(void)setMyTableView:(UITableView *)arg1 ;
-(void)resetNavigationTitle;
-(void)endItemButtonPressed:(id)arg1 ;
-(void)endItemButtonFinish:(id)arg1 ;
-(UIBarButtonItem *)endItemButton;
-(void)setEndItemButton:(UIBarButtonItem *)arg1 ;
-(EBNListing *)ebayItem;
-(void)setEbayItem:(EBNListing *)arg1 ;
-(void)setDelegate:(id<EndItemControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<EndItemControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(double)preferredContentHeight;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
@end

