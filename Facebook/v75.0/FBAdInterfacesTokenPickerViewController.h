/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBEntityPickerTextFieldDelegate.h>
#import <Facebook/FBAdInterfacesTokenFetcherDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBAdInterfacesTokenParser, FBAdInterfacesTokenPickerViewControllerDelegate;
@class FBUserSession, NSArray, FBAdInterfacesTokenFetcher, UITableView, UILabel, FBAvatarPickerView, NSString;

@interface FBAdInterfacesTokenPickerViewController : UIViewController <FBEntityPickerTextFieldDelegate, FBAdInterfacesTokenFetcherDelegate, UITableViewDataSource, UITableViewDelegate> {

	FBUserSession* _session;
	NSArray* _currentResults;
	FBAdInterfacesTokenFetcher* _tokensFetcher;
	id<FBAdInterfacesTokenParser> _parser;
	NSArray* _initialTargetTokens;
	UITableView* _tableView;
	UILabel* _noResultsLabel;
	UIEdgeInsets _thumbnailInsets;
	id<FBAdInterfacesTokenPickerViewControllerDelegate> _delegate;
	FBAvatarPickerView* _audiencePickerView;

}

@property (nonatomic,retain) FBAvatarPickerView * audiencePickerView;                                          //@synthesize audiencePickerView=_audiencePickerView - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdInterfacesTokenPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel;
-(void)_didTapDone;
-(id)initWithSession:(id)arg1 targetTokens:(id)arg2 parser:(id)arg3 ;
-(void)textField:(id)arg1 searchTextChanged:(id)arg2 ;
-(void)textFieldHeightDidChange:(id)arg1 ;
-(void)textField:(id)arg1 userWillDeleteObjectByTyping:(id)arg2 ;
-(void)tokenFetcher:(id)arg1 didFetchResults:(id)arg2 ;
-(void)tokenFetcher:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_resultsFilter;
-(void)showNoTokensSelectedWarning;
-(id)_resultAtIndexPath:(id)arg1 ;
-(void)_addSelectedToken:(id)arg1 ;
-(id)_selectedResults;
-(BOOL)isLocation:(id)arg1 containedInLocation:(id)arg2 ;
-(void)addTokenAndUpdate:(id)arg1 ;
-(id)_tokensCollidingWithResult:(id)arg1 ;
-(FBAvatarPickerView *)audiencePickerView;
-(void)setAudiencePickerView:(FBAvatarPickerView *)arg1 ;
-(void)setDelegate:(id<FBAdInterfacesTokenPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBAdInterfacesTokenPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)textFieldDidBeginEditing:(id)arg1 ;
@end
