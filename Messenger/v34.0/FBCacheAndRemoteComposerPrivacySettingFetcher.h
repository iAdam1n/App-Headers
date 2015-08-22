/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBPreferencesPrivacySettingPersister, FBUserSession;

@interface FBCacheAndRemoteComposerPrivacySettingFetcher : NSObject {

	FBPreferencesPrivacySettingPersister* _privacySettingPersister;
	FBUserSession* _userSession;

}
+(id)privacySettingsHelper;
+(BOOL)userObeysDefaultPrivacyModel:(id)arg1 ;
+(void)setPrivacySettingsHelper:(id)arg1 ;
+(BOOL)isCustomPrivacySettingsSupported;
+(void)updateLocalHasDefaultPrivacy:(BOOL)arg1 forSession:(id)arg2 ;
-(void)updateStickyCachePrivacySetting:(id)arg1 updateDefaultCachePrivacySetting:(BOOL)arg2 ;
-(void)clearPrivacySettingCache;
-(void)_remoteFetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(id)cachedDefaultPrivacySetting;
-(id)initWithUserSession:(id)arg1 privacySettingPersister:(id)arg2 ;
-(void)updateCachedAndServerStickyPrivacySetting:(id)arg1 updateCachedAndServerDefaultPrivacySetting:(BOOL)arg2 ;
-(void)updatePrivacySettingsCache;
-(void)fetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)cachedPrivacySettings:(out id*)arg1 selectedPrivacySetting:(out id*)arg2 ;
@end
