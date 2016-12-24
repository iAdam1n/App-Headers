/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsInvoiceMutationHandlerDelegate;
@class FBUserSession, NSString;

@interface FBPaymentsInvoiceMutationHandler : NSObject {

	FBUserSession* _session;
	NSString* _productType;
	NSString* _productID;
	NSString* _actorID;
	id<FBPaymentsInvoiceMutationHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsInvoiceMutationHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 productType:(id)arg2 productID:(id)arg3 actorID:(id)arg4 ;
-(void)udpateInvoiceWithActionIdentifer:(id)arg1 actionData:(id)arg2 ;
-(void)_successWithResponse:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsInvoiceMutationHandlerDelegate>)arg1 ;
-(id<FBPaymentsInvoiceMutationHandlerDelegate>)delegate;
-(void)_failWithError:(id)arg1 ;
@end
