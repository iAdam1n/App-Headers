/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBPaymentsCheckoutPayRequestHandler : NSObject {

	FBUserSession* _session;

}
-(void)placeNMOROrderForOrderType:(id)arg1 orderId:(id)arg2 receiverId:(id)arg3 requestId:(id)arg4 amount:(id)arg5 paymentMethod:(id)arg6 action:(id)arg7 contactNumberId:(id)arg8 shippingOptionID:(id)arg9 mailingAddressId:(id)arg10 credentialToken:(id)arg11 extraData:(id)arg12 successBlock:(/*^block*/id)arg13 failureBlock:(/*^block*/id)arg14 ;
-(id)initWithSession:(id)arg1 ;
@end
