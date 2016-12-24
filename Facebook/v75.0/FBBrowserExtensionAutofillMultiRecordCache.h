/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBBrowserExtensionAutofillMultiRecordCache : NSObject {

	FBUserSession* _session;

}
+(id)sharedInstanceWithSession:(id)arg1 ;
-(void)removeLocalCacheAutofillGroups;
-(void)addLocalCacheAutofillGroup:(id)arg1 ;
-(void)updateLocalCacheFromAutofillGroup:(id)arg1 toAutofillGroup:(id)arg2 ;
-(id)cachedLocalAutofillGroupsForGroupType:(id)arg1 requestedAutofillTags:(id)arg2 ;
-(id)cachedGraphQLAutofillGroupForGroupType:(id)arg1 requestedAutofillTags:(id)arg2 ;
-(BOOL)isGraphQLCacheValid;
-(void)removeLocalCacheAutofillGroup:(id)arg1 ;
-(void)updateGraphQLCacheWithAutofillGroup:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
