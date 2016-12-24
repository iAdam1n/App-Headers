/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBOmnistore, FBOmnistoreCollection, FBOmnistoreCollectionName, MNOmnistoreUserPrefsDeltaListenerAnnouncer, NSString;

@interface MNOmnistoreUserPrefsStore : NSObject <FBViewerContextClassProvidable> {

	id<MNAuthenticationManager> _authManager;
	FBOmnistore* _omnistore;
	FBOmnistoreCollection* _collection;
	FBOmnistoreCollectionName* _collectionName;
	MNOmnistoreUserPrefsDeltaListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)upgradeFromUserSettingsIfNeeded:(id)arg1 ;
-(void)setSeenSaveToCameraRollOnCapturePrompt:(BOOL)arg1 ;
-(BOOL)hasSeenSaveToCameraRollOnCapturePrompt;
-(void)setSaveToCameraRollOnCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isSaveToCameraRollOnCaptureEnabled;
-(BOOL)hasValueForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 valueIfNotExists:(BOOL)arg2 ;
-(unsigned)int32ForKey:(id)arg1 ;
-(BOOL)setInt32:(unsigned)arg1 forKey:(id)arg2 ;
-(unsigned)int32ForKey:(id)arg1 valueIfNotExists:(unsigned)arg2 ;
-(id)initWithOmnistore:(id)arg1 authManager:(id)arg2 ;
-(void)_didReceiveUserPrefsDeltas:(id)arg1 ;
-(id)_getObjectWithPrimaryKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
