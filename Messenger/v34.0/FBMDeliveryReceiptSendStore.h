/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBCache;

@interface FBMDeliveryReceiptSendStore : NSObject {

	FBCache* _pendingStore;
	FBCache* _sendingStore;
	FBCache* _sentStore;

}
-(BOOL)_isDeliveryReceipt:(id)arg1 inStore:(id)arg2 ;
-(void)_mergeDeliveryReceipt:(id)arg1 intoStore:(id)arg2 ;
-(void)addPendingDeliveryReceipt:(id)arg1 ;
-(void)_mergeDeliveryReceipts:(id)arg1 intoStore:(id)arg2 ;
-(void)_removeDeliveryReceipts:(id)arg1 fromStore:(id)arg2 ;
-(void)addPendingDeliveryReceipts:(id)arg1 ;
-(id)flushAllPendingDeliveryReceipts;
-(void)archiveSentDeliveryReceipts:(id)arg1 ;
-(void)markFailedDeliveryReceiptsAsPending:(id)arg1 ;
-(id)init;
@end
