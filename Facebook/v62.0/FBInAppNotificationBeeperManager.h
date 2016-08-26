/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInAppBasicBeeperContentViewDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBNotificationsSyncManagerListener.h>

@protocol FBInAppNotificationActivityDelegate, FBInAppNotificationBeeperManagerDelegate;
@class FBInAppBeeperManager, FBKeyboardObserver, FBNotificationsSyncManager, FBFacecastInAppNotificationBeeperManager, FBUserSession, FBInAppNotificationView, NSString;

@interface FBInAppNotificationBeeperManager : NSObject <FBInAppBasicBeeperContentViewDelegate, FBKeyboardObserverDelegate, FBNotificationsSyncManagerListener> {

	FBInAppBeeperManager* _inAppBeeperManager;
	FBKeyboardObserver* _keyboardObserver;
	BOOL _useNotificationsService;
	FBNotificationsSyncManager* _notificationsSyncManager;
	FBFacecastInAppNotificationBeeperManager* _facecastBeeperManager;
	id<FBInAppNotificationActivityDelegate> _activityDelegate;
	id<FBInAppNotificationBeeperManagerDelegate> _delegate;
	FBUserSession* _session;
	FBInAppNotificationView* _notificationView;

}

@property (nonatomic,retain) FBInAppNotificationView * notificationView;                                   //@synthesize notificationView=_notificationView - In the implementation block
@property (assign,nonatomic,__weak) id<FBInAppNotificationActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBInAppNotificationBeeperManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 ;
-(FBInAppNotificationView *)notificationView;
-(void)_showBeeperIfNeededForLoadWithReason:(long long)arg1 isHeadLoad:(BOOL)arg2 addedNotifications:(id)arg3 ;
-(void)_showBeeperIfNeededForCurrentNotifications:(id)arg1 ;
-(void)showInAppNotification:(id)arg1 ;
-(BOOL)eligibleForBeeperWithNotification:(id)arg1 ;
-(void)_logEvent:(id)arg1 notification:(id)arg2 ;
-(void)didSelectContentView;
-(void)didDismissContentView;
-(void)didIgnoreContentView;
-(void)didReplaceContentView;
-(void)setNotificationView:(FBInAppNotificationView *)arg1 ;
-(void)setDelegate:(id<FBInAppNotificationBeeperManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBInAppNotificationBeeperManagerDelegate>)delegate;
-(id<FBInAppNotificationActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<FBInAppNotificationActivityDelegate>)arg1 ;
-(FBUserSession *)session;
@end
