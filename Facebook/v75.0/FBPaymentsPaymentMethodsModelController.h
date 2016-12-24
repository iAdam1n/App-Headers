/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsPaymentMethodsLocalDataMutator.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface FBPaymentsPaymentMethodsModelController : NSObject <FBPaymentsPaymentMethodsLocalDataMutator> {

	NSObject*<OS_dispatch_queue> _paymentMethodsUpdateQueue;
	NSArray* _allPaymentMethods;

}

@property (nonatomic,copy,readonly) NSArray * allPaymentMethods;              //@synthesize allPaymentMethods=_allPaymentMethods - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addOrUpdatePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadPaymentMethodsLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_addOrUpdatePaymentMethod:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_removePaymentMethod:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_updatePaymentMethods:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSArray *)allPaymentMethods;
-(id)init;
@end
