/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTabbedViewController.h>

@protocol ECSearchResultsMapViewNavigationProtocol;
@class ECSearchAdsDataProvider, ECResultsViewSegmentedControl, ECSearchResultsViewController;

@interface ECSearchResultsTabbedViewController : ECBaseTabbedViewController {

	ECSearchAdsDataProvider* _dataProvider;
	ECResultsViewSegmentedControl* _resultViewTypeSegmentedControl;
	ECSearchResultsViewController* _listController;
	ECSearchResultsViewController* _galleryController;
	id<ECSearchResultsMapViewNavigationProtocol> _navigationDelegate;

}

@property (nonatomic,retain) ECSearchAdsDataProvider * dataProvider;                                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ECResultsViewSegmentedControl * resultViewTypeSegmentedControl;               //@synthesize resultViewTypeSegmentedControl=_resultViewTypeSegmentedControl - In the implementation block
@property (nonatomic,retain) ECSearchResultsViewController * listController;                               //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) ECSearchResultsViewController * galleryController;                            //@synthesize galleryController=_galleryController - In the implementation block
@property (nonatomic,retain) id<ECSearchResultsMapViewNavigationProtocol> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL canShowGallery; 
@property (nonatomic,readonly) BOOL canShowMap; 
-(void)setGalleryController:(ECSearchResultsViewController *)arg1 ;
-(void)setResultViewTypeSegmentedControl:(ECResultsViewSegmentedControl *)arg1 ;
-(ECResultsViewSegmentedControl *)resultViewTypeSegmentedControl;
-(BOOL)canShowGallery;
-(ECSearchResultsViewController *)galleryController;
-(void)resultViewTypeSegmentedControlAction:(id)arg1 ;
-(void)selectViewType:(long long)arg1 ;
-(id)contollerForType:(long long)arg1 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)trackViewSelected:(long long)arg1 ;
-(BOOL)canShowMap;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDataProvider:(ECSearchAdsDataProvider *)arg1 ;
-(ECSearchAdsDataProvider *)dataProvider;
-(id<ECSearchResultsMapViewNavigationProtocol>)navigationDelegate;
-(ECSearchResultsViewController *)listController;
-(void)setListController:(ECSearchResultsViewController *)arg1 ;
-(void)setNavigationDelegate:(id<ECSearchResultsMapViewNavigationProtocol>)arg1 ;
@end

