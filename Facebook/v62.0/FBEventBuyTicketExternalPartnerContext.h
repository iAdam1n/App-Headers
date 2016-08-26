/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsBuyTicketsExternalPartnerActionsResponder, FBIntentHandler;
@class FBPaymentsKitPaymentMethod, FBImageDownloader;

@interface FBEventBuyTicketExternalPartnerContext : NSObject {

	id<FBEventsBuyTicketsExternalPartnerActionsResponder> _actionResponder;
	FBPaymentsKitPaymentMethod* _selectedPaymentMethod;
	id<FBIntentHandler> _intentHandler;
	FBImageDownloader* _imageDownloader;

}

@property (nonatomic,readonly) id<FBEventsBuyTicketsExternalPartnerActionsResponder> actionResponder;              //@synthesize actionResponder=_actionResponder - In the implementation block
@property (nonatomic,readonly) FBPaymentsKitPaymentMethod * selectedPaymentMethod;                                 //@synthesize selectedPaymentMethod=_selectedPaymentMethod - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                                  //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                                //@synthesize imageDownloader=_imageDownloader - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(FBImageDownloader *)imageDownloader;
-(id)initWithActionResponder:(id)arg1 selectedPaymentMethod:(id)arg2 intentHandler:(id)arg3 imageDownloader:(id)arg4 ;
-(FBPaymentsKitPaymentMethod *)selectedPaymentMethod;
-(id<FBEventsBuyTicketsExternalPartnerActionsResponder>)actionResponder;
@end
