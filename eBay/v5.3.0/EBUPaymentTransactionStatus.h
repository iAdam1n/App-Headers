/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EBNCheckoutDataManager;

@interface EBUPaymentTransactionStatus : NSObject {

	unsigned long long _status;
	EBNCheckoutDataManager* _dataManager;

}

@property (assign,nonatomic) unsigned long long status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) EBNCheckoutDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
+(id)emptyObject;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end

