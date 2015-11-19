/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class ECReportAdViewController, UINavigationController, ECIpadAdDetailsViewController, ECAd;

@interface ECAdReporter : NSObject {

	/*^block*/id _completionHandler;
	ECReportAdViewController* _reportAdController;
	UINavigationController* _targetNavController;
	ECIpadAdDetailsViewController* _presentingViewController;
	ECAd* _ad;

}

@property (nonatomic,copy) id completionHandler;                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) ECReportAdViewController * reportAdController;                         //@synthesize reportAdController=_reportAdController - In the implementation block
@property (nonatomic,retain) UINavigationController * targetNavController;                          //@synthesize targetNavController=_targetNavController - In the implementation block
@property (nonatomic,retain) ECIpadAdDetailsViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                                             //@synthesize ad=_ad - In the implementation block
-(void)setAd:(ECAd *)arg1 ;
-(ECReportAdViewController *)reportAdController;
-(void)cacheFlaggedAd;
-(UINavigationController *)targetNavController;
-(id)initWithNavController:(id)arg1 withPresentingViewController:(id)arg2 withAd:(id)arg3 ;
-(void)getReasonsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showReport;
-(BOOL)canFlagAd;
-(void)setReportAdController:(ECReportAdViewController *)arg1 ;
-(void)setTargetNavController:(UINavigationController *)arg1 ;
-(ECIpadAdDetailsViewController *)presentingViewController;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPresentingViewController:(ECIpadAdDetailsViewController *)arg1 ;
-(ECAd *)ad;
@end

