/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECPostBaseViewController.h>

@class ECPostFeatureTotalView, ECPostFeatureTotalButton, ECTooltipOverlayView, ECActivityIndicatorView, ECNotificationObserver;

@interface ECPostFeaturesViewController : ECPostBaseViewController {

	BOOL _totalViewVisible;
	ECPostFeatureTotalView* _totalView;
	ECPostFeatureTotalButton* _totalButton;
	ECTooltipOverlayView* _tooltipOverlayView;
	ECActivityIndicatorView* _activityIndicator;
	ECNotificationObserver* _featureLoadedObserver;
	id _featureChangeObserver;

}

@property (nonatomic,retain) ECPostFeatureTotalView * totalView;                           //@synthesize totalView=_totalView - In the implementation block
@property (nonatomic,retain) ECPostFeatureTotalButton * totalButton;                       //@synthesize totalButton=_totalButton - In the implementation block
@property (nonatomic,retain) ECTooltipOverlayView * tooltipOverlayView;                    //@synthesize tooltipOverlayView=_tooltipOverlayView - In the implementation block
@property (assign,getter=isTotalViewVisible,nonatomic) BOOL totalViewVisible;              //@synthesize totalViewVisible=_totalViewVisible - In the implementation block
@property (retain) ECActivityIndicatorView * activityIndicator;                            //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * featureLoadedObserver;               //@synthesize featureLoadedObserver=_featureLoadedObserver - In the implementation block
@property (nonatomic,retain) id featureChangeObserver;                                     //@synthesize featureChangeObserver=_featureChangeObserver - In the implementation block
@property (nonatomic,copy) id completionHandler; 
+(id)createQuickConnectTooltipOverlayView;
-(id)featureProvider;
-(id)initWithDataProvider:(id)arg1 ;
-(BOOL)showInsertionFee;
-(void)configureFeatureCell:(id)arg1 ;
-(void)setTotalButton:(ECPostFeatureTotalButton *)arg1 ;
-(ECPostFeatureTotalButton *)totalButton;
-(void)setTooltipOverlayView:(ECTooltipOverlayView *)arg1 ;
-(ECTooltipOverlayView *)tooltipOverlayView;
-(void)didStartReloadingPurchaseMetaData;
-(void)didEndReloadingPurchaseMetaData;
-(void)initNavigationItem;
-(void)showQuickConnectTooltipWithView:(id)arg1 ;
-(void)setFeatureLoadedObserver:(ECNotificationObserver *)arg1 ;
-(void)skipAction:(id)arg1 ;
-(void)setTotalView:(ECPostFeatureTotalView *)arg1 ;
-(ECPostFeatureTotalView *)totalView;
-(void)hideLoadingView;
-(void)updateObservationOfFeatureProviders;
-(void)updateTotalView;
-(void)showTotalView;
-(void)hideTotalView;
-(BOOL)isTotalViewVisible;
-(void)setTotalViewVisible:(BOOL)arg1 ;
-(void)updateTotalViewAnimated:(BOOL)arg1 ;
-(void)completeWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)setFeatureChangeObserver:(id)arg1 ;
-(ECNotificationObserver *)featureLoadedObserver;
-(id)featureChangeObserver;
-(void)dealloc;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)cancelAction;
-(ECActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(ECActivityIndicatorView *)arg1 ;
-(void)purchase;
-(void)showLoadingView;
@end

