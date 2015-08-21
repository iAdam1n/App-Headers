/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class ECFeature, ECFeatureProvider, ECFeatureInfoView;

@interface ECFeatureInfoViewController : ECBaseViewController {

	long long _appStatusBarStyle;
	ECFeature* _feature;
	/*^block*/id _onDismissController;
	ECFeatureProvider* _provider;

}

@property (retain) ECFeature * feature;                                          //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) id onDismissController;                               //@synthesize onDismissController=_onDismissController - In the implementation block
@property (nonatomic,readonly) ECFeatureInfoView * featureInfoView; 
@property (nonatomic,retain) ECFeatureProvider * provider;                       //@synthesize provider=_provider - In the implementation block
-(void)trackPageView;
-(void)closeAction:(id)arg1 ;
-(ECFeatureInfoView *)featureInfoView;
-(id)onDismissController;
-(id)initWithFeature:(id)arg1 provider:(id)arg2 ;
-(void)selectFeatureAction:(id)arg1 ;
-(void)setOnDismissController:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(ECFeatureProvider *)provider;
-(void)setProvider:(ECFeatureProvider *)arg1 ;
-(ECFeature *)feature;
-(void)setFeature:(ECFeature *)arg1 ;
@end
