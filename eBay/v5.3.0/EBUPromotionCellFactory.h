/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EBUPromotionCellFactory : NSObject
+(id)activePromotionCellsFromCartPromotions:(id)arg1 cellDelegate:(id)arg2 sellerId:(id)arg3 ;
+(id)removeExcludedActivePromotions:(id)arg1 ;
+(id)combinedActivePromotions:(id)arg1 ;
+(id)makeEBNPromotionCellWithSimplePromotion:(id)arg1 cellDelegate:(id)arg2 sellerId:(id)arg3 ;
+(id)spoofSomeSimplePromotions:(id)arg1 ;
+(id)makeEBNPromotionCellForItem:(id)arg1 withPromotion:(id)arg2 inCart:(BOOL)arg3 cellDelegate:(id)arg4 ;
@end

