/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserInvalidating.h>

@protocol MNLegacySyncEngineManaging;
@class FBMUserStoreUserUpdateAnnouncingAdapter, FBMLoggedInUserInfoManager, FBMLoggedInUserFetcher, NSString;

@interface FBMUserInvalidator : NSObject <FBClassProvidable, MNUserInvalidating> {

	id<MNLegacySyncEngineManaging> _DEPRECATED_legacySyncEngineManager;
	FBMUserStoreUserUpdateAnnouncingAdapter* _userStoreUpdateAdapter;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)invalidateUsersWithIds:(id)arg1 ;
-(id)initWithLegacySyncEngineManager:(id)arg1 userStoreUpdateAdapter:(id)arg2 loggedInUserInfoManager:(id)arg3 loggedInUserFetcher:(id)arg4 ;
-(void)_updateLoggedInUserIfNecessary:(id)arg1 ;
@end
