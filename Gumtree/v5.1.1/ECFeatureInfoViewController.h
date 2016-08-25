/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class ECFeature, ECFeatureOrderItem, ECFeatureOrder, ECFeatureProvider, NSLayoutConstraint, ECMetricsTracker, ECFeatureInfoView;

@interface ECFeatureInfoViewController : ECBaseViewController {

	long long _appStatusBarStyle;
	BOOL _suppressFeatureSelectButton;
	ECFeature* _feature;
	/*^block*/id _onDismissController;
	ECFeatureOrderItem* _featureOrderItem;
	ECFeatureOrder* _featureOrder;
	ECFeatureProvider* _provider;
	NSLayoutConstraint* _scrollViewBottom;
	ECMetricsTracker* _metricsTracker;

}

@property (nonatomic,retain) ECFeature * feature;                                       //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) ECFeatureOrderItem * featureOrderItem;                     //@synthesize featureOrderItem=_featureOrderItem - In the implementation block
@property (nonatomic,retain) ECFeatureOrder * featureOrder;                             //@synthesize featureOrder=_featureOrder - In the implementation block
@property (nonatomic,readonly) ECFeatureInfoView * featureInfoView; 
@property (nonatomic,retain) ECFeatureProvider * provider;                              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * scrollViewBottom;              //@synthesize scrollViewBottom=_scrollViewBottom - In the implementation block
@property (nonatomic,retain) ECMetricsTracker * metricsTracker;                         //@synthesize metricsTracker=_metricsTracker - In the implementation block
@property (nonatomic,copy) id onDismissController;                                      //@synthesize onDismissController=_onDismissController - In the implementation block
@property (assign,nonatomic) BOOL suppressFeatureSelectButton;                          //@synthesize suppressFeatureSelectButton=_suppressFeatureSelectButton - In the implementation block
-(void)trackPageView;
-(ECMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(ECMetricsTracker *)arg1 ;
-(void)closeAction:(id)arg1 ;
-(id)initWithFeature:(id)arg1 provider:(id)arg2 ;
-(void)setSuppressFeatureSelectButton:(BOOL)arg1 ;
-(ECFeatureInfoView *)featureInfoView;
-(BOOL)suppressFeatureSelectButton;
-(NSLayoutConstraint *)scrollViewBottom;
-(id)onDismissController;
-(id)initWithFeatureOrderItem:(id)arg1 featureOrder:(id)arg2 ;
-(void)selectFeatureAction:(id)arg1 ;
-(void)setOnDismissController:(id)arg1 ;
-(void)setScrollViewBottom:(NSLayoutConstraint *)arg1 ;
-(ECFeatureOrder *)featureOrder;
-(void)setFeatureOrder:(ECFeatureOrder *)arg1 ;
-(ECFeatureOrderItem *)featureOrderItem;
-(void)setFeatureOrderItem:(ECFeatureOrderItem *)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(ECFeatureProvider *)provider;
-(void)setProvider:(ECFeatureProvider *)arg1 ;
-(ECFeature *)feature;
-(void)setFeature:(ECFeature *)arg1 ;
@end

