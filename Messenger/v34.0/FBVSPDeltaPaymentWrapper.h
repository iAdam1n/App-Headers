/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class FBVSPDeltaNewTransfer, FBVSPDeltaTransferStatus, FBVSPDeltaPaymentMethodUpdated, FBVSPDeltaPaymentMethodRemoved, FBVSPDeltaPaymentMethodPrimary, FBVSPDeltaPinCode, FBVSPDeltaPaymentNoOp, FBVSPDeltaPaymentForcedFetch, FBVSPDeltaPaymentEnable, FBVSPDeltaNewPaymentRequest, FBVSPDeltaPaymentRequestStatus, NSString;

@interface FBVSPDeltaPaymentWrapper : NSObject <TBase, NSCoding> {

	FBVSPDeltaNewTransfer* __deltaNewTransfer;
	FBVSPDeltaTransferStatus* __deltaTransferStatus;
	FBVSPDeltaPaymentMethodUpdated* __deltaPaymentMethodUpdated;
	FBVSPDeltaPaymentMethodRemoved* __deltaPaymentMethodRemoved;
	FBVSPDeltaPaymentMethodPrimary* __deltaPaymentMethodPrimary;
	FBVSPDeltaPinCode* __deltaPinCode;
	FBVSPDeltaPaymentNoOp* __deltaPaymentNoOp;
	FBVSPDeltaPaymentForcedFetch* __deltaPaymentForcedFetch;
	FBVSPDeltaPaymentEnable* __deltaPaymentEnable;
	FBVSPDeltaNewPaymentRequest* __deltaNewPaymentRequest;
	FBVSPDeltaPaymentRequestStatus* __deltaPaymentRequestStatus;
	BOOL __deltaNewTransfer_isset;
	BOOL __deltaTransferStatus_isset;
	BOOL __deltaPaymentMethodUpdated_isset;
	BOOL __deltaPaymentMethodRemoved_isset;
	BOOL __deltaPaymentMethodPrimary_isset;
	BOOL __deltaPinCode_isset;
	BOOL __deltaPaymentNoOp_isset;
	BOOL __deltaPaymentForcedFetch_isset;
	BOOL __deltaPaymentEnable_isset;
	BOOL __deltaNewPaymentRequest_isset;
	BOOL __deltaPaymentRequestStatus_isset;

}

@property (setter=setDeltaNewTransfer:,getter=deltaNewTransfer,nonatomic,retain) FBVSPDeltaNewTransfer * deltaNewTransfer; 
@property (setter=setDeltaTransferStatus:,getter=deltaTransferStatus,nonatomic,retain) FBVSPDeltaTransferStatus * deltaTransferStatus; 
@property (setter=setDeltaPaymentMethodUpdated:,getter=deltaPaymentMethodUpdated,nonatomic,retain) FBVSPDeltaPaymentMethodUpdated * deltaPaymentMethodUpdated; 
@property (setter=setDeltaPaymentMethodRemoved:,getter=deltaPaymentMethodRemoved,nonatomic,retain) FBVSPDeltaPaymentMethodRemoved * deltaPaymentMethodRemoved; 
@property (setter=setDeltaPaymentMethodPrimary:,getter=deltaPaymentMethodPrimary,nonatomic,retain) FBVSPDeltaPaymentMethodPrimary * deltaPaymentMethodPrimary; 
@property (setter=setDeltaPinCode:,getter=deltaPinCode,nonatomic,retain) FBVSPDeltaPinCode * deltaPinCode; 
@property (setter=setDeltaPaymentNoOp:,getter=deltaPaymentNoOp,nonatomic,retain) FBVSPDeltaPaymentNoOp * deltaPaymentNoOp; 
@property (setter=setDeltaPaymentForcedFetch:,getter=deltaPaymentForcedFetch,nonatomic,retain) FBVSPDeltaPaymentForcedFetch * deltaPaymentForcedFetch; 
@property (setter=setDeltaPaymentEnable:,getter=deltaPaymentEnable,nonatomic,retain) FBVSPDeltaPaymentEnable * deltaPaymentEnable; 
@property (setter=setDeltaNewPaymentRequest:,getter=deltaNewPaymentRequest,nonatomic,retain) FBVSPDeltaNewPaymentRequest * deltaNewPaymentRequest; 
@property (setter=setDeltaPaymentRequestStatus:,getter=deltaPaymentRequestStatus,nonatomic,retain) FBVSPDeltaPaymentRequestStatus * deltaPaymentRequestStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)deltaPaymentEnableIsSet;
-(FBVSPDeltaPaymentEnable *)deltaPaymentEnable;
-(BOOL)deltaPaymentMethodPrimaryIsSet;
-(FBVSPDeltaPaymentMethodPrimary *)deltaPaymentMethodPrimary;
-(BOOL)deltaPaymentMethodRemovedIsSet;
-(FBVSPDeltaPaymentMethodRemoved *)deltaPaymentMethodRemoved;
-(BOOL)deltaPaymentMethodUpdatedIsSet;
-(FBVSPDeltaPaymentMethodUpdated *)deltaPaymentMethodUpdated;
-(BOOL)deltaPinCodeIsSet;
-(FBVSPDeltaPinCode *)deltaPinCode;
-(BOOL)deltaNewTransferIsSet;
-(FBVSPDeltaNewTransfer *)deltaNewTransfer;
-(BOOL)deltaTransferStatusIsSet;
-(FBVSPDeltaTransferStatus *)deltaTransferStatus;
-(BOOL)deltaPaymentForcedFetchIsSet;
-(FBVSPDeltaPaymentForcedFetch *)deltaPaymentForcedFetch;
-(BOOL)deltaPaymentNoOpIsSet;
-(FBVSPDeltaPaymentNoOp *)deltaPaymentNoOp;
-(void)setDeltaNewTransfer:(FBVSPDeltaNewTransfer *)arg1 ;
-(void)setDeltaTransferStatus:(FBVSPDeltaTransferStatus *)arg1 ;
-(void)setDeltaPaymentMethodUpdated:(FBVSPDeltaPaymentMethodUpdated *)arg1 ;
-(void)setDeltaPaymentMethodRemoved:(FBVSPDeltaPaymentMethodRemoved *)arg1 ;
-(void)setDeltaPaymentMethodPrimary:(FBVSPDeltaPaymentMethodPrimary *)arg1 ;
-(void)setDeltaPinCode:(FBVSPDeltaPinCode *)arg1 ;
-(void)setDeltaPaymentNoOp:(FBVSPDeltaPaymentNoOp *)arg1 ;
-(void)setDeltaPaymentForcedFetch:(FBVSPDeltaPaymentForcedFetch *)arg1 ;
-(void)setDeltaPaymentEnable:(FBVSPDeltaPaymentEnable *)arg1 ;
-(void)setDeltaNewPaymentRequest:(FBVSPDeltaNewPaymentRequest *)arg1 ;
-(void)setDeltaPaymentRequestStatus:(FBVSPDeltaPaymentRequestStatus *)arg1 ;
-(id)initWithDeltaNewTransfer:(id)arg1 deltaTransferStatus:(id)arg2 deltaPaymentMethodUpdated:(id)arg3 deltaPaymentMethodRemoved:(id)arg4 deltaPaymentMethodPrimary:(id)arg5 deltaPinCode:(id)arg6 deltaPaymentNoOp:(id)arg7 deltaPaymentForcedFetch:(id)arg8 deltaPaymentEnable:(id)arg9 deltaNewPaymentRequest:(id)arg10 deltaPaymentRequestStatus:(id)arg11 ;
-(void)unsetDeltaNewTransfer;
-(void)unsetDeltaTransferStatus;
-(void)unsetDeltaPaymentMethodUpdated;
-(void)unsetDeltaPaymentMethodRemoved;
-(void)unsetDeltaPaymentMethodPrimary;
-(void)unsetDeltaPinCode;
-(void)unsetDeltaPaymentNoOp;
-(void)unsetDeltaPaymentForcedFetch;
-(void)unsetDeltaPaymentEnable;
-(FBVSPDeltaNewPaymentRequest *)deltaNewPaymentRequest;
-(BOOL)deltaNewPaymentRequestIsSet;
-(void)unsetDeltaNewPaymentRequest;
-(FBVSPDeltaPaymentRequestStatus *)deltaPaymentRequestStatus;
-(BOOL)deltaPaymentRequestStatusIsSet;
-(void)unsetDeltaPaymentRequestStatus;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
