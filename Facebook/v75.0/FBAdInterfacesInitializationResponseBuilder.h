/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAdInterfacesPromotion, FBAdInterfacesAdminInfo, NSDictionary;

@interface FBAdInterfacesInitializationResponseBuilder : NSObject {

	FBAdInterfacesPromotion* _promotion;
	FBAdInterfacesAdminInfo* _adminInfo;
	NSDictionary* _extraData;

}
+(id)adInterfacesInitializationResponse;
+(id)adInterfacesInitializationResponseFromExistingAdInterfacesInitializationResponse:(id)arg1 ;
-(id)withPromotion:(id)arg1 ;
-(id)withAdminInfo:(id)arg1 ;
-(id)withExtraData:(id)arg1 ;
-(id)build;
@end

