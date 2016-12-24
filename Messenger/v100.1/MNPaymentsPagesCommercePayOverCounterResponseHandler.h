/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsNavigationDelegate, MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate;
@class FBUserSession, FBWebViewController, FBPaymentsCheckoutLoggingService, NSString;

@interface MNPaymentsPagesCommercePayOverCounterResponseHandler : NSObject {

	FBUserSession* _session;
	FBWebViewController* _webViewController;
	FBPaymentsCheckoutLoggingService* _loggingService;
	NSString* _viewContextId;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_pushWebViewWithURL:(id)arg1 ;
-(void)_onTapDone;
-(id)initWithSession:(id)arg1 loggingService:(id)arg2 ;
-(void)handleResponseWithInstructionstUrl:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate>)arg1 ;
-(id<MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
