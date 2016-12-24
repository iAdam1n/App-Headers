/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession;

@interface FBAICallToActionMessagePageValidator : NSObject {

	id<FBServiceTransactionMutating> _adminInfoQueryHandle;
	FBUserSession* _session;

}
+(BOOL)_parseAdminInfoResponse:(id)arg1 ;
+(id)_validationErrorDisabledForPageID:(id)arg1 ;
-(void)validatePageID:(id)arg1 withResultBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(id)initWithSession:(id)arg1 ;
@end
