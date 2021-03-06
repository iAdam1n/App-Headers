/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerListener.h>
#import <Facebook/FBViewControllerAppearanceLifecycleListener.h>

@class FBNotificationsSyncManager, FBNotificationsSeenStateManager, FBViewControllerAppearanceLifecycleListenerAnnouncer, NSString;

@interface FBNotificationsViewSeenStateUpdateHelper : NSObject <FBNotificationsSyncManagerListener, FBViewControllerAppearanceLifecycleListener> {

	FBNotificationsSyncManager* _syncManager;
	FBNotificationsSeenStateManager* _seenStateManager;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	BOOL _onScreen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(id)initWithNotificationsSyncManager:(id)arg1 notificationsSeenStateManager:(id)arg2 controllerLifecycleAnnouncer:(id)arg3 ;
-(void)viewControllerViewDidAppear:(BOOL)arg1 ;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)_markAllNotificationsAsSeenIfOnScreenAndActive;
-(void)_markNotificationsAsSeenIfOnScreenAndActive:(id)arg1 ;
-(BOOL)_isOnScreenAndActive;
-(void)dealloc;
-(void)viewControllerViewDidDisappear:(BOOL)arg1 ;
@end

