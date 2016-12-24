/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:32:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F45DA058-3924-4296-8466-9187DEE2ADBC/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class PLVQueryListViewModel, UIButton, UILabel;

@interface Palaver.QueryListViewController : UITableViewController <UISplitViewControllerDelegate, UIViewControllerPreviewingDelegate> {

	 viewModel;
	 disposeBag;
	 addNetworkButton;
	 addNetworkLabel;

}

@property (readonly,nonatomic) PLVQueryListViewModel * viewModel; 
@property (assign,__weak,nonatomic) UIButton * addNetworkButton; 
@property (assign,__weak,nonatomic) UILabel * addNetworkLabel; 
-(void)openQueryDetailWithViewModel:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 ;
-(void)configureQueryCell:(id)arg1 indexPath:(id)arg2 ;
-(id)channelCell:(id)arg1 indexPath:(id)arg2 ;
-(id)nickCell:(id)arg1 indexPath:(id)arg2 ;
-(void)addQueryViewControllerDidCancel:(id)arg1 ;
-(void)addQueryViewControllerDidChangeQuery:(id)arg1 viewModel:(id)arg2 ;
-(UIButton *)addNetworkButton;
-(void)setAddNetworkButton:(UIButton *)arg1 ;
-(UILabel *)addNetworkLabel;
-(void)setAddNetworkLabel:(UILabel *)arg1 ;
-(void)updateAddNetworkState;
-(void)editQueries:(id)arg1 ;
-(void)showPreferences;
-(void)presentNetworkOptions:(long long)arg1 ;
-(void)addAction;
-(void)addNetwork;
-(void)addChannel;
-(void)addNick;
-(id)initWithCoder:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(BOOL)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(void)addQuery:(long long)arg1 ;
-(PLVQueryListViewModel *)viewModel;
@end
