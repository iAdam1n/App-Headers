/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBCommerceAdminShopEditNetworker : NSObject {

	FBUserSession* _session;
	NSString* _pageID;

}
-(id)initWithSession:(id)arg1 pageID:(id)arg2 ;
-(void)fetchShopWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)updateShopWithShopID:(id)arg1 introSummary:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)deleteShopWithShopSettingsID:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end
