/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfigurationProviding.h>

@class FBUserSession, FBPaymentsInvoiceInfo, NSString;

@interface FBPaymentsInvoiceCheckoutConfigurationProvider : NSObject <FBPaymentsCheckoutConfigurationProviding> {

	FBUserSession* _session;
	FBPaymentsInvoiceInfo* _invoiceInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 invoiceInfo:(id)arg2 ;
-(id)checkoutConfigurationWithCartItems:(id)arg1 purchaseInfoDescriptors:(id)arg2 priceList:(id)arg3 ;
@end
