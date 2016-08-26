/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBViewControllerAppearanceLifecycleListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBNotificationsFriendingIntermixedPullToRefreshManagerListener.h>

@class FBNotificationsComponentDataSourceWrapper, FBViewControllerAppearanceLifecycleListenerAnnouncer, NSNotificationCenter, FBNotificationsFriendingIntermixedPullToRefreshManager, NSMutableSet, NSString;

@interface FBIntermixedTabFriendRequestLoggingHelper : NSObject <FBViewControllerAppearanceLifecycleListener, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceSelectionEventListener, FBNotificationsFriendingIntermixedPullToRefreshManagerListener> {

	FBNotificationsComponentDataSourceWrapper* _componentDataSource;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	NSNotificationCenter* _notificationCenter;
	FBNotificationsFriendingIntermixedPullToRefreshManager* _pullToRefreshManager;
	BOOL _isInView;
	NSMutableSet* _seenFriendRequestIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)viewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)_logFriendRequestImpression;
-(void)_saveVisibleFriendRequests;
-(id)initWithComponentDataSource:(id)arg1 controllerLifecycleAnnouncer:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_didEnterBackground;
-(void)pullToRefreshManagerDidTriggerRefresh:(id)arg1 ;
-(void)pullToRefreshManagerDidFinishRefresh:(id)arg1 ;
-(void)setUpWithPullToRefreshManager:(id)arg1 ;
-(void)dealloc;
@end
