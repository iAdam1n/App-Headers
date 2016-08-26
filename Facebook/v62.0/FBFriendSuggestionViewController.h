/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/FBFriendCenterItem.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBPYMKStreamListener.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBFriendingViewControllerLoggingProtocol.h>

@protocol FBPYMKStreamProtocol;
@class FBUserSession, FBComponentTableViewDataSource, FBFriendingToolbox, FBPullToRefreshView, FBScenePath, FBFriendingSimpleDataSourceHelper, NSMutableDictionary, NSMutableSet, NSString;

@interface FBFriendSuggestionViewController : FBTableViewController <FBFriendCenterItem, CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentScrollEventListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceCellConfigProvider, FBComponentCellAppearanceEventListener, FBPYMKStreamListener, FBPullToRefreshViewDelegate, FBFriendingViewControllerLoggingProtocol> {

	FBUserSession* _session;
	FBComponentTableViewDataSource* _dataSource;
	FBFriendingToolbox* _toolbox;
	FBPullToRefreshView* _pullToRefreshView;
	FBScenePath* _scenePath;
	FBFriendingSimpleDataSourceHelper* _dataSourceHelper;
	NSMutableDictionary* _pymkSuggestionsToLog;
	NSMutableSet* _pymkSuggestionIdsLogged;
	BOOL _isInView;
	BOOL _navigatedToProfile;
	unsigned long long _numberOfSuggestionsSeen;
	id<FBPYMKStreamProtocol> _stream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBPYMKStreamProtocol> stream;              //@synthesize stream=_stream - In the implementation block
+(id)menuItemDescription;
+(BOOL)needRecreateOnAccess;
+(id)newViewControllerWithSession:(id)arg1 ;
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(unsigned long long)friendCenterPreferredPresentationMethod;
-(id)dataSource:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned long long)arg3 ;
-(void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3 ;
-(void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)PYMKStream:(id)arg1 didRemoveSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)_didEnterBackground;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(id)analyticsModule;
-(BOOL)fb_automaticallyAdjustsTableViewInsets;
-(void)finalizeLoggingForSurfaceName:(id)arg1 ;
-(void)_logPYMKImpression;
-(void)_clearAndLogPYMKImpression;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setStream:(id<FBPYMKStreamProtocol>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id<FBPYMKStreamProtocol>)stream;
@end
