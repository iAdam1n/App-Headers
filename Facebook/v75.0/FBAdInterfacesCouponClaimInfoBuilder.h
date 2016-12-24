/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAdInterfacesMessage;

@interface FBAdInterfacesCouponClaimInfoBuilder : NSObject {

	NSString* _adAccountID;
	NSString* _couponPromotionGroupID;
	NSString* _placement;
	BOOL _promotionCouponClaimed;
	FBAdInterfacesMessage* _claimMessage;

}
+(id)adInterfacesCouponClaimInfo;
+(id)adInterfacesCouponClaimInfoFromExistingAdInterfacesCouponClaimInfo:(id)arg1 ;
-(id)withAdAccountID:(id)arg1 ;
-(id)withCouponPromotionGroupID:(id)arg1 ;
-(id)withPlacement:(id)arg1 ;
-(id)withClaimMessage:(id)arg1 ;
-(id)withPromotionCouponClaimed:(BOOL)arg1 ;
-(id)build;
@end
