/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface FBPaymentsSelectPaymentMethodsActionProvider : NSObject {

	NSMutableArray* _rowActions;
	NSMutableDictionary* _selectActionHandlerForPaymentMethods;
	NSMutableDictionary* _selectActionHandlerForPaymentMethodOptions;

}
-(void)registerPaymentMethodActionHandler:(id)arg1 forPaymentMethodType:(id)arg2 ;
-(void)registerPaymentMethodOptionActionHandler:(id)arg1 forPaymentMethodType:(id)arg2 ;
-(void)addRowAction:(id)arg1 ;
-(id)rowActions;
-(id)selectActionHandlerForPaymentMethodWithPaymentMethodType:(id)arg1 ;
-(id)selectActionHandlerForPaymentMethodOptionWithPaymentMethodType:(id)arg1 ;
-(id)init;
@end
