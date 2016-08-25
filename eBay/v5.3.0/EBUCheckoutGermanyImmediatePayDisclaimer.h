/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCheckoutSimpleRowView.h>

@class EBNCheckoutDataManager, EBUCheckoutActionHandler;

@interface EBUCheckoutGermanyImmediatePayDisclaimer : EBUCheckoutSimpleRowView {

	EBNCheckoutDataManager* _dataManager;
	EBUCheckoutActionHandler* _actionHandler;

}

@property (__weak) EBNCheckoutDataManager * dataManager;                  //@synthesize dataManager=_dataManager - In the implementation block
@property (__weak) EBUCheckoutActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
+(id)viewFromDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(void)setupViewWithDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(void)setupImmediatePayHeader;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(EBUCheckoutActionHandler *)actionHandler;
-(void)setActionHandler:(EBUCheckoutActionHandler *)arg1 ;
@end

