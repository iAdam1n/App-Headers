/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView, MNPaymentsPeerToPeerStatusModelForReceipt, MNPaymentsTransferStatusModelForTransactionHistoryCell;

@interface MNPaymentsPeerToPeerStatusModel : FBValueObject <NSCopying> {

	FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView* _modelForPaymentAttachment;
	MNPaymentsPeerToPeerStatusModelForReceipt* _modelForReceipt;
	MNPaymentsTransferStatusModelForTransactionHistoryCell* _modelForTranscationHistoryCell;

}

@property (nonatomic,copy,readonly) FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView * modelForPaymentAttachment;              //@synthesize modelForPaymentAttachment=_modelForPaymentAttachment - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsPeerToPeerStatusModelForReceipt * modelForReceipt;                                              //@synthesize modelForReceipt=_modelForReceipt - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferStatusModelForTransactionHistoryCell * modelForTranscationHistoryCell;                  //@synthesize modelForTranscationHistoryCell=_modelForTranscationHistoryCell - In the implementation block
-(FBPaymentsPeerToPeerTransferStatusModelForPaymentAttachmentView *)modelForPaymentAttachment;
-(MNPaymentsPeerToPeerStatusModelForReceipt *)modelForReceipt;
-(MNPaymentsTransferStatusModelForTransactionHistoryCell *)modelForTranscationHistoryCell;
-(id)initWithModelForPaymentAttachment:(id)arg1 modelForReceipt:(id)arg2 modelForTranscationHistoryCell:(id)arg3 ;
@end
