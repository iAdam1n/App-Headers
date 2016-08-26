/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfiguration.h>

@class FBUserSession, FBEventBuyTicketExternalPartnerModel, FBEventAnalyticTracker, FBMemEvent, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface FBPaymentsEventTicketingCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	FBEventBuyTicketExternalPartnerModel* _model;
	FBEventAnalyticTracker* _tracker;
	FBMemEvent* _event;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentConfiguration;
-(id)checkoutFlowLogger;
-(id)checkoutContextLoader;
-(id)confirmationConfigurationProvider;
-(id)orderStatusController;
-(id)initWithSession:(id)arg1 model:(id)arg2 event:(id)arg3 tracker:(id)arg4 pinController:(id)arg5 touchIDController:(id)arg6 ;
-(id)requestHandler;
@end
