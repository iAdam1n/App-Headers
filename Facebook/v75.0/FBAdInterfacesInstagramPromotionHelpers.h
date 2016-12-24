/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdInterfacesInstagramPromotionHelpers : NSObject
+(id)parseInstagramInfoFromPage:(id)arg1 isEligibleForInstagram:(BOOL)arg2 isImageAutocroppedForInstagram:(BOOL)arg3 ;
+(unsigned long long)instagramAccountTypeFromInstagramInfo:(id)arg1 ;
+(id)instagramAccountIDFromInstagramInfo:(id)arg1 creative:(id)arg2 boostedComponentAppID:(id)arg3 ;
+(void)performInstagramAdPrevieRequestwWithAdAccountID:(id)arg1 creative:(id)arg2 session:(id)arg3 callback:(/*^block*/id)arg4 ;
+(void)performInstagramAdPrevieRequestwWithStoryID:(id)arg1 session:(id)arg2 callback:(/*^block*/id)arg3 ;
+(unsigned long long)instagramAccountTypeFromInstagramInfo:(id)arg1 creative:(id)arg2 boostedComponentAppID:(id)arg3 ;
+(BOOL)allowInstagramToggleFromPromotionStatus:(unsigned long long)arg1 andPromotionAction:(unsigned long long)arg2 ;
+(BOOL)determineOptOutFromPromotion:(id)arg1 ;
@end
