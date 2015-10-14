/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol PLVNickListViewControllerDelegate;
@class PLVNickListViewModel, UISearchBar, UIActionSheet, IRCChannel, NSString;

@interface PLVNickListViewController : UITableViewController <UIActionSheetDelegate, UISearchBarDelegate, UIPopoverPresentationControllerDelegate> {

	PLVNickListViewModel* _viewModel;
	id<PLVNickListViewControllerDelegate> _delegate;
	UISearchBar* _searchBar;
	UIActionSheet* _actionSheet;

}

@property (nonatomic,retain) PLVNickListViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PLVNickListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UISearchBar * searchBar;                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) IRCChannel * channel; 
@property (assign,nonatomic,__weak) UIActionSheet * actionSheet;                                 //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(PLVNickListViewModel *)viewModel;
-(void)setViewModel:(PLVNickListViewModel *)arg1 ;
-(void)setDelegate:(id<PLVNickListViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<PLVNickListViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(void)dismiss;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(IRCChannel *)channel;
@end

