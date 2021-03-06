/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfiguration.h>

@protocol FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutOrderStatusControlling, FBPaymentsCheckoutContentConfiguration;
@class FBPaymentsCheckoutPaymentInfo, NSString;

@interface FBPaymentsParsedCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsCheckoutOrderStatusControlling> _orderStatusController;
	id<FBPaymentsCheckoutContentConfiguration> _contentConfiguration;
	FBPaymentsCheckoutPaymentInfo* _paymentInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)paymentInfo;
-(id)orderStatusController;
-(id)contentConfiguration;
-(id)initWithPaymentInfo:(id)arg1 requestHandler:(id)arg2 contentConfiguration:(id)arg3 orderStatusController:(id)arg4 ;
-(id)requestHandler;
@end

