/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalWebFlowDelegate.h>
#import <Facebook/FBPaymentsCheckoutReceiptPresenting.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, NSURL, NSString;

@interface FBPaymentsEventTicketingReceiptPresenter : NSObject <FBModalWebFlowDelegate, FBPaymentsCheckoutReceiptPresenting> {

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
