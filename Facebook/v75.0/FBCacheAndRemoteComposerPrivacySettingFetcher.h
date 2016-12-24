/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPreferencesPrivacySettingPersister, FBUserSession;

@interface FBCacheAndRemoteComposerPrivacySettingFetcher : NSObject {

	FBPreferencesPrivacySettingPersister* _privacySettingPersister;
	FBUserSession* _userSession;

}
+(BOOL)userObeysDefaultPrivacyModel:(id)arg1 ;
+(id)privacySettingsHelper;
+(void)setPrivacySettingsHelper:(id)arg1 ;
+(BOOL)isCustomPrivacySettingsSupported;
+(void)updateLocalHasDefaultPrivacy:(BOOL)arg1 forSession:(id)arg2 ;
-(void)fetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)updateCachedAndServerStickyPrivacySetting:(id)arg1 updateCachedAndServerDefaultPrivacySetting:(BOOL)arg2 ;
-(void)updateStickyCachePrivacySetting:(id)arg1 updateDefaultCachePrivacySetting:(BOOL)arg2 ;
-(void)cachedPrivacySettings:(out id*)arg1 selectedPrivacySetting:(out id*)arg2 ;
-(void)updatePrivacySettingsCache;
-(id)cachedDefaultPrivacySetting_DO_NOT_USE_UNLESS_ABSOLUTELY_NECESSARY;
-(void)clearPrivacySettingCache;
-(void)_remoteFetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)_remoteFetchCurrentlySelectedPrivacySettingWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(id)initWithUserSession:(id)arg1 privacySettingPersister:(id)arg2 ;
-(void)fetchCurrentlySelectedComposerPrivacySettingWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
@end
