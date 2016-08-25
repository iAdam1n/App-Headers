/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OASMainAppsViewController.h>
#import <TestFlight/OASAppListDelegate.h>
#import <TestFlight/OASettingsButtonsViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSMutableSet, OASSessionContext, OASAppList, UIView, UICollectionViewController, UICollectionView, OASCollectionViewColumnGridLayout, OASettingsButtonsView, NSHashTable, UIRefreshControl, UILabel, UIButton, NSArray, NSString;

@interface OAAppListViewController : OASMainAppsViewController <OASAppListDelegate, OASettingsButtonsViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _mainAppList;
	NSMutableSet* _expandedApps;
	BOOL _collectionViewSupportsQueryingSupplementaryViews;
	OASSessionContext* _sessionContext;
	OASAppList* _appList;
	UIView* _contentSubview;
	UICollectionViewController* _collectionViewController;
	UICollectionView* _collectionView;
	OASCollectionViewColumnGridLayout* _layout;
	OASettingsButtonsView* _collectionViewSettingsButtonsView;
	NSHashTable* _visibleSectionHeaders;
	UIRefreshControl* _refreshControl;
	UIView* _contentSuperview;
	OASettingsButtonsView* _settingsButtonsView;
	UIView* _loadingView;
	UIView* _errorView;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;
	UIButton* _errorTryAgainButton;
	NSArray* _errorTryAgainButtonConstraints;

}

@property (nonatomic,retain) OASSessionContext * sessionContext;                                     //@synthesize sessionContext=_sessionContext - In the implementation block
@property (nonatomic,retain) OASAppList * appList;                                                   //@synthesize appList=_appList - In the implementation block
@property (nonatomic,retain) UIView * contentSubview;                                                //@synthesize contentSubview=_contentSubview - In the implementation block
@property (nonatomic,retain) UICollectionViewController * collectionViewController;                  //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) OASCollectionViewColumnGridLayout * layout;                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) OASettingsButtonsView * collectionViewSettingsButtonsView;              //@synthesize collectionViewSettingsButtonsView=_collectionViewSettingsButtonsView - In the implementation block
@property (nonatomic,retain) NSHashTable * visibleSectionHeaders;                                    //@synthesize visibleSectionHeaders=_visibleSectionHeaders - In the implementation block
@property (assign,nonatomic) BOOL collectionViewSupportsQueryingSupplementaryViews;                  //@synthesize collectionViewSupportsQueryingSupplementaryViews=_collectionViewSupportsQueryingSupplementaryViews - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIView * contentSuperview;                                              //@synthesize contentSuperview=_contentSuperview - In the implementation block
@property (nonatomic,retain) OASettingsButtonsView * settingsButtonsView;                            //@synthesize settingsButtonsView=_settingsButtonsView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                                   //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                                     //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic) UILabel * errorTitleLabel;                                              //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (assign,nonatomic) UILabel * errorMessageLabel;                                            //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
@property (nonatomic,retain) UIButton * errorTryAgainButton;                                         //@synthesize errorTryAgainButton=_errorTryAgainButton - In the implementation block
@property (nonatomic,retain) NSArray * errorTryAgainButtonConstraints;                               //@synthesize errorTryAgainButtonConstraints=_errorTryAgainButtonConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OASSessionContext *)sessionContext;
-(void)setSessionContext:(OASSessionContext *)arg1 ;
-(void)appList:(id)arg1 stateDidChange:(long long)arg2 ;
-(void)appListDidLoadDataFromServer:(id)arg1 ;
-(void)setAppList:(OASAppList *)arg1 ;
-(void)appList:(id)arg1 didChangeError:(id)arg2 ;
-(void)appListDidReloadList:(id)arg1 ;
-(void)appList:(id)arg1 didChangeAppList:(id)arg2 ;
-(OASAppList *)appList;
-(id)initWithSessionContext:(id)arg1 appList:(id)arg2 andSetAsMainAppList:(BOOL)arg3 ;
-(void)setOverrideStateToShowLoading:(BOOL)arg1 ;
-(void)setCollectionViewSettingsButtonsView:(OASettingsButtonsView *)arg1 ;
-(void)didPullToRefresh:(id)arg1 ;
-(OASettingsButtonsView *)settingsButtonsView;
-(UIView *)contentSuperview;
-(UIButton *)errorTryAgainButton;
-(UILabel *)errorTitleLabel;
-(UILabel *)errorMessageLabel;
-(NSArray *)errorTryAgainButtonConstraints;
-(UIView *)contentSubview;
-(void)setContentSubview:(UIView *)arg1 ;
-(BOOL)collectionViewSupportsQueryingSupplementaryViews;
-(void)updateHeader:(id)arg1 forSection:(long long)arg2 ;
-(id)appForIndexPath:(id)arg1 ;
-(OASettingsButtonsView *)collectionViewSettingsButtonsView;
-(void)didSelectAppAtIndexPath:(id)arg1 ;
-(void)settingsButtonRedeemTapped:(id)arg1 ;
-(void)settingsButtonsAppleIDTapped:(id)arg1 ;
-(void)settingsButtonsTAndCsTapped:(id)arg1 ;
-(NSHashTable *)visibleSectionHeaders;
-(void)setVisibleSectionHeaders:(NSHashTable *)arg1 ;
-(void)setCollectionViewSupportsQueryingSupplementaryViews:(BOOL)arg1 ;
-(void)setContentSuperview:(UIView *)arg1 ;
-(void)setSettingsButtonsView:(OASettingsButtonsView *)arg1 ;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
-(void)setErrorTryAgainButton:(UIButton *)arg1 ;
-(void)setErrorTryAgainButtonConstraints:(NSArray *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)viewWillLayoutSubviews;
-(OASCollectionViewColumnGridLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLayout:(OASCollectionViewColumnGridLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(UICollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(UICollectionViewController *)arg1 ;
-(UIView *)loadingView;
-(void)refresh;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)resetState;
-(void)setLoadingView:(UIView *)arg1 ;
@end

