/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsImpressionEventListener.h>

@protocol FBNotificationsRichNotificationsHighlightOperationManagerDelegate;
@class FBNotificationsSyncManager, NSMutableDictionary, FBNotificationsImpressionPersistenceService, NSString;

@interface FBNotificationsRichNotificationsHighlightOperationManager : NSObject <FBNotificationsImpressionEventListener> {

	FBNotificationsSyncManager* _syncManager;
	NSMutableDictionary* _graphQLIDToTimers;
	NSMutableDictionary* _graphQLIDToMaxImpressionCount;
	FBNotificationsImpressionPersistenceService* _impressionPersistenceService;
	id<FBNotificationsRichNotificationsHighlightOperationManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNotificationsRichNotificationsHighlightOperationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_addTimer:(id)arg1 forGraphQLID:(id)arg2 toDictionary:(id)arg3 ;
-(void)didReceiveImpressionForNotification:(id)arg1 ;
-(id)_currentNotifications;
-(BOOL)_hasTriggersForNotificationGraphQLID:(id)arg1 ;
-(void)removeTriggersForNotification:(id)arg1 ;
-(id)initWithSyncManager:(id)arg1 impressionPersistenceService:(id)arg2 ;
-(void)updateTriggersForAllNotifications;
-(void)addTriggersForNotification:(id)arg1 ;
-(void)updateExistingTriggersForUpdatedNotification:(id)arg1 oldNotification:(id)arg2 changeType:(unsigned long long)arg3 ;
-(void)setDelegate:(id<FBNotificationsRichNotificationsHighlightOperationManagerDelegate>)arg1 ;
-(id<FBNotificationsRichNotificationsHighlightOperationManagerDelegate>)delegate;
@end
