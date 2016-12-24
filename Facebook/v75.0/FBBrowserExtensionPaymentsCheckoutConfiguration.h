/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfiguration.h>

@protocol FBPaymentsCheckoutConfiguration, FBPaymentsCheckoutRequestHandling;
@class FBUserSession, NSString;

@interface FBBrowserExtensionPaymentsCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	id<FBPaymentsCheckoutConfiguration> _parsedCheckoutConfiguration;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)paymentInfo;
-(id)orderStatusController;
-(id)initWithSession:(id)arg1 parsedCheckoutConfiguration:(id)arg2 delegate:(id)arg3 ;
-(id)requestHandler;
@end
