/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGViewController.h>
#import <Telegram/ASWatcher.h>
#import <Telegram/TGModernConversationAudioPlayerDelegate.h>

@class TGNotificationItem, NSMutableArray, STimer, TGModernConversationAudioPlayer, TGNotificationWindow, TGNotificationOverlayView, TGNotificationView, ASHandle, UIView, UIWindow, NSString;

@interface TGNotificationController : TGViewController <ASWatcher, TGModernConversationAudioPlayerDelegate> {

	TGNotificationItem* _currentItem;
	NSMutableArray* _queue;
	BOOL _ignoringStartupNotifications;
	BOOL _ignoringCompleted;
	STimer* _timer;
	unsigned long long _ticksToTransition;
	TGModernConversationAudioPlayer* _currentAudioPlayer;
	int _currentAudioPlayerMessageId;
	TGNotificationWindow* _window;
	TGNotificationOverlayView* _overlayView;
	/*^block*/id _navigateToConversation;
	TGNotificationView* _notificationView;
	ASHandle* _actionHandle;
	UIView* _wrapperView;

}

@property (nonatomic,readonly) TGNotificationView * notificationView;              //@synthesize notificationView=_notificationView - In the implementation block
@property (nonatomic,retain) ASHandle * actionHandle;                              //@synthesize actionHandle=_actionHandle - In the implementation block
@property (nonatomic,readonly) UIView * wrapperView;                               //@synthesize wrapperView=_wrapperView - In the implementation block
@property (nonatomic,readonly) UIWindow * window; 
@property (nonatomic,copy) id navigateToConversation;                              //@synthesize navigateToConversation=_navigateToConversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(void)localizationUpdated;
-(void)setNavigateToConversation:(id)arg1 ;
-(BOOL)shouldDisplayNotificationForConversation:(id)arg1 ;
-(void)displayNotificationForConversation:(id)arg1 identifier:(int)arg2 replyToMid:(int)arg3 duration:(double)arg4 configure:(/*^block*/id)arg5 ;
-(void)dismissNotificationsForConversationId:(long long)arg1 ;
-(void)dismissAllNotifications;
-(void)audioPlayerDidFinish;
-(void)overlayPressed;
-(id)notificationWindow;
-(BOOL)shouldExpandOnTap;
-(id)userListForConversationId:(long long)arg1 channelGroup:(BOOL)arg2 mention:(id)arg3 ;
-(id)hashtagListForHashtag:(id)arg1 ;
-(id)stickersListForEmoji:(id)arg1 ;
-(id)_downloadMediaWithAttachment:(id)arg1 conversationId:(long long)arg2 messageId:(int)arg3 ;
-(void)_cancelMediaWithId:(id)arg1 ;
-(void)_playAudioWithAttachment:(id)arg1 peerId:(long long)arg2 messageId:(int)arg3 ;
-(BOOL)_isMediaAvailable:(id)arg1 ;
-(id)_inlineMediaContext:(int)arg1 ;
-(void)showNextItem;
-(void)_presentNotificationView;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateStatusBarHiding:(BOOL)arg1 ;
-(void)removeWindow;
-(void)_updateInlineMediaContext;
-(void)_stopInlineMediaIfPlaying;
-(void)expandCurrentNotification;
-(void)_updateMediaAccessTimeWithAttachment:(id)arg1 peerId:(long long)arg2 messageId:(int)arg3 ;
-(id)navigateToConversation;
-(TGNotificationView *)notificationView;
-(UIView *)wrapperView;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)hideAnimated:(BOOL)arg1 ;
@end
