/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECRootViewControllerProtocol
@optional
-(void)showSearchAds;
-(long long)authenticationMode;
-(void)showLoginIfNotLoggedInForMode:(long long)arg1;
-(void)showSearchAdsAndPopToRoot:(BOOL)arg1;
-(void)showRegistrationPage;
-(void)showWatchlist;
-(void)showMessages;
-(void)showPostFlow;
-(void)showPostFlowAndPopToRoot:(BOOL)arg1;
-(BOOL)canLoginOnCurrentController;
-(void)showUserBids;
-(void)showSavedSearch;

@required
-(void)showMyAdsAndPopToRoot:(BOOL)arg1;
-(void)presentEULA:(/*^block*/id)arg1;
-(void)handleEULAAccepted;
-(void)viewControllerAppeared:(id)arg1;
-(void)presentAsModal:(id)arg1;
-(void)showMyAdsAndResetPostFlow;
-(void)goToPreviousSelectedTab;
-(void)handleSessionExpired:(BOOL)arg1;
-(void)showSettings;

@end

