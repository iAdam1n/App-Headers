/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewControllerAppearanceLifecycleListener.h>
#import <Facebook/FBNotificationsFriendingIntermixedPullToRefreshManagerListener.h>
#import <Facebook/FBNotificationsForegroundBackgroundEventListener.h>

@class FBNotificationsRichNotificationsManager, FBViewControllerAppearanceLifecycleListenerAnnouncer, NSDate, FBNotificationsFriendingIntermixedPullToRefreshManager, NSString;

@interface FBNotificationsFriendingRichNotificationsAutoReloadingManager : NSObject <FBViewControllerAppearanceLifecycleListener, FBNotificationsFriendingIntermixedPullToRefreshManagerListener, FBNotificationsForegroundBackgroundEventListener> {

	FBNotificationsRichNotificationsManager* _richNotificationsManager;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifeCycleAnnouncer;
	NSDate* _lastRefreshedTime;
	FBNotificationsFriendingIntermixedPullToRefreshManager* _pullToRefreshManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewControllerViewDidAppear:(BOOL)arg1 ;
-(void)pullToRefreshManagerDidTriggerRefresh:(id)arg1 ;
-(void)pullToRefreshManagerDidFinishRefresh:(id)arg1 ;
-(void)_reloadIfCooledDown;
-(void)appDidEnterForegroundWithNotificationsViewOnScreen;
-(void)appDidEnterBackgroundWithNotificationsViewOnScreen;
-(id)initWithRichNotificationsManager:(id)arg1 lifeCycleAnnouncer:(id)arg2 ;
-(void)setupWithPullToRefreshManager:(id)arg1 ;
@end
