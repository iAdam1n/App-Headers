/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITabBarViewController.h>
#import <eBay/EBUSearchViewSubControllerDelegate.h>
#import <eBay/EBUSearchLandingControllerProtocol.h>

@protocol EBUSearchLandingControllerDelegate;
@class UITextField, EBUSearchLandingRecentsTabContentController, EBUSearchLandingFollowingTabContentController, NSString;

@interface EBUSearchLandingTabViewController : EUITabBarViewController <EBUSearchViewSubControllerDelegate, EBUSearchLandingControllerProtocol> {

	id<EBUSearchLandingControllerDelegate> _searchDelegate;
	UITextField* _textField;
	EBUSearchLandingRecentsTabContentController* _recentSearchesController;
	EBUSearchLandingFollowingTabContentController* _followingController;

}

@property (nonatomic,retain) EBUSearchLandingRecentsTabContentController * recentSearchesController;              //@synthesize recentSearchesController=_recentSearchesController - In the implementation block
@property (nonatomic,retain) EBUSearchLandingFollowingTabContentController * followingController;                 //@synthesize followingController=_followingController - In the implementation block
@property (assign,nonatomic,__weak) id<EBUSearchLandingControllerDelegate> searchDelegate;                        //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (assign,nonatomic,__weak) UITextField * textField;                                                      //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollToTop:(BOOL)arg1 ;
-(void)clearModalState:(id)arg1 ;
-(void)searchViewSubControllerDataDidReload:(id)arg1 ;
-(BOOL)searchViewSubControllerDidSelectSeeAll:(id)arg1 ;
-(EBUSearchLandingRecentsTabContentController *)recentSearchesController;
-(void)setRecentSearchesController:(EBUSearchLandingRecentsTabContentController *)arg1 ;
-(EBUSearchLandingFollowingTabContentController *)followingController;
-(void)setFollowingController:(EBUSearchLandingFollowingTabContentController *)arg1 ;
-(void)tabBar:(id)arg1 didSelectTabAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITextField *)textField;
-(void)setSearchDelegate:(id<EBUSearchLandingControllerDelegate>)arg1 ;
-(id<EBUSearchLandingControllerDelegate>)searchDelegate;
-(void)willResignActive:(id)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setTextField:(UITextField *)arg1 ;
@end

