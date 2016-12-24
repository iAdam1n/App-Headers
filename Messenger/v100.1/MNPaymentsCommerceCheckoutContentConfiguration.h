/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, FBPaymentsPINController, FBPaymentsTouchIDController, FBMemPeerToPeerPlatformContext, NSString;

@interface MNPaymentsCommerceCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	FBMemPeerToPeerPlatformContext* _platformContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)headerViewFactory;
-(id)initWithSession:(id)arg1 pinController:(id)arg2 touchIDController:(id)arg3 platformContext:(id)arg4 ;
@end
