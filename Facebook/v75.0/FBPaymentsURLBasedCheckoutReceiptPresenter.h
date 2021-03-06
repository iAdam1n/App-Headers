/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalWebFlowDelegate.h>
#import <Facebook/FBPaymentsCheckoutReceiptPresenting.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, NSURL, NSString;

@interface FBPaymentsURLBasedCheckoutReceiptPresenter : NSObject <FBModalWebFlowDelegate, FBPaymentsCheckoutReceiptPresenting> {

	FBUserSession* _session;
	NSURL* _receiptURL;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(id)initWithSession:(id)arg1 receiptURL:(id)arg2 ;
-(void)presentReceiptWithCheckoutResponse:(id)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

