/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache;

@interface FBMDeliveryReceiptSendStore : NSObject {

	FBCache* _pendingStore;
	FBCache* _sendingStore;
	FBCache* _sentStore;

}
-(BOOL)_isDeliveryReceipt:(id)arg1 inStore:(id)arg2 ;
-(void)_mergeDeliveryReceipt:(id)arg1 intoStore:(id)arg2 ;
-(void)_mergeDeliveryReceipts:(id)arg1 intoStore:(id)arg2 ;
-(void)_removeDeliveryReceipts:(id)arg1 fromStore:(id)arg2 ;
-(void)addPendingDeliveryReceipts:(id)arg1 ;
-(void)addPendingDeliveryReceipt:(id)arg1 ;
-(id)flushAllPendingDeliveryReceipts;
-(void)archiveSentDeliveryReceipts:(id)arg1 ;
-(void)markFailedDeliveryReceiptsAsPending:(id)arg1 ;
-(id)init;
@end
