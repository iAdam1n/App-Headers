/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSDictionary;

@interface FBProtileAnalytics : NSObject {

	FBUserSession* _session;
	NSDictionary* _profileExtras;

}
-(id)initWithProfileExtras:(id)arg1 session:(id)arg2 ;
-(void)logProtileItemTapWithProtileType:(id)arg1 extraInfos:(id)arg2 targetPerson:(id)arg3 ;
-(void)logProtileViewWithProtileType:(id)arg1 extraInfos:(id)arg2 targetPerson:(id)arg3 ;
-(void)logProtileHeaderTapWithProtileType:(id)arg1 targetPerson:(id)arg2 ;
-(void)logProtileFooterTapWithProtileType:(id)arg1 targetPerson:(id)arg2 ;
-(void)_logWithEvent:(id)arg1 protileType:(id)arg2 extraInfos:(id)arg3 targetPerson:(id)arg4 ;
-(id)_extrasWithProtileType:(id)arg1 extraInfos:(id)arg2 targetPerson:(id)arg3 ;
@end
