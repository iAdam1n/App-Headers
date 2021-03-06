/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPStoreManagerDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@protocol SKPPurchaseCreditFlowDelegate;
@class UIWindow, UIView, MKActivityIndicatorView, MKAlertView, NSString;

@interface SKPPurchaseCreditFlowController : NSObject <SKPStoreManagerDelegate, SFSafariViewControllerDelegate> {

	BOOL _invalidated;
	BOOL _shouldHandlePurchaseCreditAlert;
	id<SKPPurchaseCreditFlowDelegate> _delegate;
	unsigned long long _statisticsEvent;
	UIWindow* _activityWindow;
	UIView* _activityViewContainer;
	MKActivityIndicatorView* _activityViewIndicator;
	MKAlertView* _purchaseCreditAlertView;
	long long _creditButtonTag;
	long long _purchaseCreditAlertType;

}

@property (assign,nonatomic) unsigned long long statisticsEvent;                             //@synthesize statisticsEvent=_statisticsEvent - In the implementation block
@property (nonatomic,retain) UIWindow * activityWindow;                                      //@synthesize activityWindow=_activityWindow - In the implementation block
@property (nonatomic,retain) UIView * activityViewContainer;                                 //@synthesize activityViewContainer=_activityViewContainer - In the implementation block
@property (nonatomic,retain) MKActivityIndicatorView * activityViewIndicator;                //@synthesize activityViewIndicator=_activityViewIndicator - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                          //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) MKAlertView * purchaseCreditAlertView;                   //@synthesize purchaseCreditAlertView=_purchaseCreditAlertView - In the implementation block
@property (assign,nonatomic) long long creditButtonTag;                                      //@synthesize creditButtonTag=_creditButtonTag - In the implementation block
@property (assign,nonatomic) BOOL shouldHandlePurchaseCreditAlert;                           //@synthesize shouldHandlePurchaseCreditAlert=_shouldHandlePurchaseCreditAlert - In the implementation block
@property (assign,nonatomic) long long purchaseCreditAlertType;                              //@synthesize purchaseCreditAlertType=_purchaseCreditAlertType - In the implementation block
@property (assign,nonatomic,__weak) id<SKPPurchaseCreditFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)storeManager:(id)arg1 didRetrieveProduct:(id)arg2 ;
-(void)storeManager:(id)arg1 didRetrieveConversionRate:(double)arg2 ;
-(void)storeManager:(id)arg1 didFailTransaction:(id)arg2 dueToError:(id)arg3 ;
-(void)storeManager:(id)arg1 didFailTransaction:(id)arg2 dueToWalletStatus:(unsigned long long)arg3 ;
-(void)storeManager:(id)arg1 didSucceedTransaction:(id)arg2 withWalletStatus:(unsigned long long)arg3 ;
-(void)storeManager:(id)arg1 didSucceedPreviousTransaction:(id)arg2 withWalletStatus:(unsigned long long)arg3 ;
-(void)storeManager:(id)arg1 didFailPreviousTransaction:(id)arg2 dueToError:(id)arg3 ;
-(void)storeManager:(id)arg1 didFailPreviousTransaction:(id)arg2 dueToWalletStatus:(unsigned long long)arg3 ;
-(void)startPurchaseFlowFrom:(long long)arg1 ;
-(void)setPurchaseCreditAlertView:(MKAlertView *)arg1 ;
-(BOOL)shouldHandlePurchaseCreditAlert;
-(void)setStatisticsEvent:(unsigned long long)arg1 ;
-(UIView *)activityViewContainer;
-(MKActivityIndicatorView *)activityViewIndicator;
-(unsigned long long)statisticsEvent;
-(void)showAlertWithTitle:(id)arg1 message:(id)arg2 showSupportButton:(BOOL)arg3 ;
-(void)showHelpPage;
-(MKAlertView *)purchaseCreditAlertView;
-(long long)creditButtonTag;
-(void)showPurchaseCreditAlertViewForProduct:(id)arg1 ;
-(void)showNoCreditAlertViewForProduct:(id)arg1 error:(id)arg2 ;
-(long long)purchaseCreditAlertType;
-(void)startPurchaseFlowWithEvent:(unsigned long long)arg1 ;
-(void)setShouldHandlePurchaseCreditAlert:(BOOL)arg1 ;
-(void)setCreditButtonTag:(long long)arg1 ;
-(void)sendCannotStartOrderStatisticsWithError:(id)arg1 product:(id)arg2 ;
-(void)displayError:(id)arg1 forProduct:(id)arg2 ;
-(void)setPurchaseCreditAlertType:(long long)arg1 ;
-(void)stopPurchaseFlowAndReportEvent:(BOOL)arg1 ;
-(void)displayWalletStatus:(unsigned long long)arg1 forTransaction:(id)arg2 ;
-(void)displayError:(id)arg1 forTransaction:(id)arg2 ;
-(void)updateCredit:(id)arg1 ;
-(void)didRetrieveProduct:(id)arg1 ;
-(UIWindow *)activityWindow;
-(void)setActivityWindow:(UIWindow *)arg1 ;
-(void)setActivityViewContainer:(UIView *)arg1 ;
-(void)setActivityViewIndicator:(MKActivityIndicatorView *)arg1 ;
-(void)startPurchaseFlowFromMyInfoForProduct:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SKPPurchaseCreditFlowDelegate>)arg1 ;
-(void)dealloc;
-(id<SKPPurchaseCreditFlowDelegate>)delegate;
-(void)invalidate;
-(void)applicationDidBecomeActive;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)setInvalidated:(BOOL)arg1 ;
@end

