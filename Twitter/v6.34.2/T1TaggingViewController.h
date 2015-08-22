/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <Twitter/TFNTokenFieldDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1TaggingViewControllerDelegate;
@class T1TaggingTableView, TFNTwitterAutocompleteResultsController, TFNTimer, NSString, NSArray, NSMutableArray, TFNTwitterComposition, T1TaggingTableHeaderView, TFNTwitterAccount;

@interface T1TaggingViewController : TFNViewController <TFNTokenFieldDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, TFNTwitterAuthenticated> {

	T1TaggingTableView* _tableView;
	TFNTwitterAutocompleteResultsController* _autocompleteResultsController;
	TFNTimer* _autocompleteTimer;
	NSString* _partialText;
	NSArray* _autocompleteResults;
	NSArray* _suggestedUserItems;
	NSMutableArray* _tags;
	id<T1TaggingViewControllerDelegate> _delegate;
	TFNTwitterComposition* _composition;
	T1TaggingTableHeaderView* _headerView;

}

@property (assign,nonatomic,__weak) id<T1TaggingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNTwitterComposition * composition;                              //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) T1TaggingTableHeaderView * headerView;                          //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
-(id)scribe;
-(id)scribePage;
-(id)scribeComponent;
-(void)tokenField:(id)arg1 didAddToken:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)tokenField:(id)arg1 didRemoveToken:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)tokenField:(id)arg1 shouldReturnFromEditing:(id)arg2 ;
-(void)_updateAutocompleteResults:(id)arg1 forPartialText:(id)arg2 ;
-(void)_layoutHeaderView;
-(void)_tokenFieldEditingDidBegin:(id)arg1 ;
-(void)_tokenFieldEditingChanged:(id)arg1 ;
-(void)_updateAutocompleteResultsByPartialText:(id)arg1 ;
-(void)_sizeToFitHeaderView;
-(void)_scrollToTokenFieldEditingCursorAnimated:(BOOL)arg1 ;
-(void)_updateAutocompleteResultsOnTime:(id)arg1 ;
-(void)_adjustScrollViewInsetsForKeyboardSize:(CGSize)arg1 ;
-(void)_reloadPhantomCell;
-(void)_updateRemainingCount;
-(void)_setRemainingCountLabelHidden:(BOOL)arg1 ;
-(id)_suggestedUserItems;
-(BOOL)_showSectionHeader;
-(TFNTwitterComposition *)composition;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1TaggingViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<T1TaggingViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(T1TaggingTableHeaderView *)headerView;
-(void)setComposition:(TFNTwitterComposition *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)_reloadTableViewData;
@end
