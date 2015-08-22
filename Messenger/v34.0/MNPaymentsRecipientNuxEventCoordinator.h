/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener.h>
#import <Messenger/FBPaymentsAttachmentViewModelListener.h>

@protocol FBPaymentsPeerToPeerPaymentMethodsCoordinator;
@class FBUserSession, MNPaymentsRecipientNuxEventListenerAnnouncer, FBPaymentsAttachmentViewModelCoordinator, NSString;

@interface MNPaymentsRecipientNuxEventCoordinator : NSObject <FBPaymentsPeerToPeerPaymentMethodsCoordinatorListener, FBPaymentsAttachmentViewModelListener> {

	FBUserSession* _session;
	MNPaymentsRecipientNuxEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsPeerToPeerPaymentMethodsCoordinator> _paymentMethodsCoordinator;
	FBPaymentsAttachmentViewModelCoordinator* _paymentAttachmentViewModelCoordinator;
	BOOL _isProcessingRecipientNux;

}

@property (assign,nonatomic) BOOL isProcessingRecipientNux;              //@synthesize isProcessingRecipientNux=_isProcessingRecipientNux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isProcessingRecipientNux;
-(void)didUpdateWithPaymentAttachmentViewModels:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 paymentAttachmentViewModelCoordinator:(id)arg3 ;
-(void)logExposureIfNeeded:(id)arg1 ;
-(void)setIsProcessingRecipientNux:(BOOL)arg1 ;
-(void)paymentMethodsCoordinatorDidUpdate:(id)arg1 oldPresetPaymentMethod:(id)arg2 newPresetPaymentMethod:(id)arg3 isOptimistic:(BOOL)arg4 ;
-(void)paymentMethodsCoordinatorDidUpdate:(id)arg1 isOptimistic:(BOOL)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
