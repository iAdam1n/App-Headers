/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutPaymentProcessControlling <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutPaymentProcessControllingDelegate> delegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@required
-(void)processPaymentWithFlowId:(id)arg1 collectedData:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

