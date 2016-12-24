/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCheckoutSimpleRowView.h>

@class EBNCheckoutDataManager, EBUCheckoutActionHandler;

@interface EBUCheckoutProxDisclaimerHeader : EBUCheckoutSimpleRowView {

	EBNCheckoutDataManager* _dataManager;
	EBUCheckoutActionHandler* _actionHandler;

}

@property (__weak) EBNCheckoutDataManager * dataManager;                  //@synthesize dataManager=_dataManager - In the implementation block
@property (__weak) EBUCheckoutActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
+(id)viewFromDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(void)setupViewWithDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(void)setupMainMessage;
-(void)performActionWithTrackableURL:(id)arg1 ;
-(void)performActionWithURLString:(id)arg1 ;
-(void)setupPrivacyText;
-(void)setupCreditText;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(void)setActionHandler:(EBUCheckoutActionHandler *)arg1 ;
-(EBUCheckoutActionHandler *)actionHandler;
@end
